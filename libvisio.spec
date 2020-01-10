%global apiversion 0.1

Name: libvisio
Version: 0.1.1
Release: 2%{?dist}
Summary: A library for import of Microsoft Visio diagrams

License: MPLv2.0
URL: http://wiki.documentfoundation.org/DLP/Libraries/libvisio
Source: http://dev-www.libreoffice.org/src/%{name}/%{name}-%{version}.tar.xz

BuildRequires: boost-devel
BuildRequires: doxygen
BuildRequires: gperf
BuildRequires: help2man
BuildRequires: perl
BuildRequires: pkgconfig(cppunit)
BuildRequires: pkgconfig(icu-i18n)
BuildRequires: pkgconfig(librevenge-0.0)
BuildRequires: pkgconfig(libxml-2.0)
BuildRequires: pkgconfig(zlib)

Patch0: 0001-add-missing-breaks.patch
Patch1: 0001-define-more-needed-namespaces.patch

%description
%{name} is library providing ability to interpret and import
Microsoft Visio diagrams into various applications. You can find it
being used in libreoffice.

%package devel
Summary: Development files for %{name}
Requires: %{name}%{?_isa} = %{version}-%{release}

%description devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.

%package doc
Summary: Documentation of %{name} API
BuildArch: noarch

%description doc
The %{name}-doc package contains documentation files for %{name}.

%package tools
Summary: Tools to transform Microsoft Visio diagrams into other formats
Requires: %{name}%{?_isa} = %{version}-%{release}

%description tools
Tools to transform Microsoft Visio diagrams into other formats.
Currently supported: XHTML, raw, plain text.

%prep
%autosetup -p1

%build
%configure --disable-static --disable-silent-rules
sed -i \
    -e 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' \
    -e 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' \
    libtool
make %{?_smp_mflags}

export LD_LIBRARY_PATH=`pwd`/src/lib/.libs${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
help2man -N -n 'debug the conversion library' -o vsd2raw.1 ./src/conv/raw/.libs/vsd2raw
help2man -N -n 'convert Visio document into SVG' -o vsd2xhtml.1 ./src/conv/svg/.libs/vsd2xhtml
help2man -N -n 'convert Visio document into plain text' -o vsd2text.1 ./src/conv/text/.libs/vsd2text
help2man -N -n 'debug the conversion library' -o vss2raw.1 ./src/conv/raw/.libs/vss2raw
help2man -N -n 'convert Visio stencil into SVG' -o vss2xhtml.1 ./src/conv/svg/.libs/vss2xhtml
help2man -N -n 'convert Visio stencil into plain text' -o vss2text.1 ./src/conv/text/.libs/vss2text

%install
make install DESTDIR=%{buildroot}
rm -f %{buildroot}/%{_libdir}/*.la
# rhbz#1001240 we install API docs directly from build
rm -rf %{buildroot}/%{_docdir}/%{name}

install -m 0755 -d %{buildroot}/%{_mandir}/man1
install -m 0644 vsd2*.1 vss2*.1 %{buildroot}/%{_mandir}/man1

%post -p /sbin/ldconfig
%postun -p /sbin/ldconfig

%check
export LD_LIBRARY_PATH=%{buildroot}%{_libdir}${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
# Workaround time formatting problem in the test
export TZ='CET'
make check %{?_smp_mflags}

%files
%doc AUTHORS COPYING.*
%{_libdir}/%{name}-%{apiversion}.so.*

%files devel
%doc ChangeLog
%{_includedir}/%{name}-%{apiversion}
%{_libdir}/%{name}-%{apiversion}.so
%{_libdir}/pkgconfig/%{name}-%{apiversion}.pc

%files doc
%doc COPYING.*
%doc docs/doxygen/html

%files tools
%{_bindir}/vsd2raw
%{_bindir}/vsd2text
%{_bindir}/vsd2xhtml
%{_bindir}/vss2raw
%{_bindir}/vss2text
%{_bindir}/vss2xhtml
%{_mandir}/man1/vsd2raw.1*
%{_mandir}/man1/vsd2text.1*
%{_mandir}/man1/vsd2xhtml.1*
%{_mandir}/man1/vss2raw.1*
%{_mandir}/man1/vss2text.1*
%{_mandir}/man1/vss2xhtml.1*

%changelog
* Mon May 04 2015 David Tardon <dtardon@redhat.com> - 0.1.1-2
- Related: rhbz#1207761 include some upstream fixes

* Fri Apr 17 2015 David Tardon <dtardon@redhat.com> - 0.1.1-1
- Resolves: rhbz#1207761 rebase to 0.1.1

* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 0.0.31-3
- Mass rebuild 2014-01-24

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 0.0.31-2
- Mass rebuild 2013-12-27

* Mon Sep 02 2013 David Tardon <dtardon@redhat.com> - 0.0.31-1
- new release

* Fri Aug 30 2013 David Tardon <dtardon@redhat.com> - 0.0.30-4
- Resolves: rhbz#1001240 duplicate documentation files / potentially conflicting

* Sat Aug 03 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.0.30-3
- Rebuilt for https://fedoraproject.org/wiki/Fedora_20_Mass_Rebuild

* Tue Jul 30 2013 Petr Machata <pmachata@redhat.com> - 0.0.30-2
- Rebuild for boost 1.54.0

* Mon Jul 15 2013 David Tardon <dtardon@redhat.com> - 0.0.30-1
- new release

* Tue Jul 02 2013 David Tardon <dtardon@redhat.com> - 0.0.29-1
- new release

* Wed Jun 05 2013 David Tardon <dtardon@redhat.com> - 0.0.28-1
- new release

* Thu May 16 2013 David Tardon <dtardon@redhat.com> - 0.0.27-1
- new release

* Tue Apr 23 2013 David Tardon <dtardon@redhat.com> - 0.0.26-1
- new release

* Thu Feb 28 2013 David Tardon <dtardon@redhat.com> - 0.0.25-1
- new release

* Thu Feb 14 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.0.24-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_19_Mass_Rebuild

* Tue Dec 18 2012 David Tardon <dtardon@redhat.com> - 0.0.24-1
- new release

* Mon Dec 03 2012 David Tardon <dtardon@redhat.com> - 0.0.23-1
- new release

* Thu Nov 29 2012 David Tardon <dtardon@redhat.com> - 0.0.22-1
- new upstream release

* Wed Nov 21 2012 David Tardon <dtardon@redhat.com> - 0.0.21-1
- new upstream release

* Tue Nov 06 2012 David Tardon <dtardon@redhat.com> - 0.0.20-1
- new upstream version

* Fri Jul 27 2012 David Tardon <dtardon@redhat.com> - 0.0.19-2
- rebuilt for boost 1.50

* Thu Jul 26 2012 David Tardon <dtardon@redhat.com> - 0.0.19-1
- new upstream version

* Tue Jul 24 2012 David Tardon <dtardon@redhat.com> - 0.0.18-3
- fix endless loop with text fields in VSD6

* Thu Jul 19 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.0.18-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Fri Jun 22 2012 David Tardon <dtardon@redhat.com> 0.0.18-1
- new upstream version

* Fri Jun 01 2012 David Tardon <dtardon@redhat.com> 0.0.17-1
- new upstream version

* Tue Apr 17 2012 David Tardon <dtardon@redhat.com> 0.0.16-1
- new upstream version

* Tue Feb 28 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 0.0.15-2
- Rebuilt for c++ ABI breakage

* Tue Feb 21 2012 David Tardon <dtardon@redhat.com> 0.0.15-1
- new upstream version

* Wed Jan 25 2012 David Tardon <dtardon@redhat.com> 0.0.14-1
- bump version

- initial import
* Wed Dec 21 2011 David Tardon <dtardon@redhat.com> 0.0.11-1
- initial import
