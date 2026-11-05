#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F4F8
// Address: 0x26f4f8 - 0x26f738
void sub_0026F4F8_0x26f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F4F8_0x26f4f8");
#endif

    switch (ctx->pc) {
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        case 0x26f500u: goto label_26f500;
        case 0x26f504u: goto label_26f504;
        case 0x26f508u: goto label_26f508;
        case 0x26f50cu: goto label_26f50c;
        case 0x26f510u: goto label_26f510;
        case 0x26f514u: goto label_26f514;
        case 0x26f518u: goto label_26f518;
        case 0x26f51cu: goto label_26f51c;
        case 0x26f520u: goto label_26f520;
        case 0x26f524u: goto label_26f524;
        case 0x26f528u: goto label_26f528;
        case 0x26f52cu: goto label_26f52c;
        case 0x26f530u: goto label_26f530;
        case 0x26f534u: goto label_26f534;
        case 0x26f538u: goto label_26f538;
        case 0x26f53cu: goto label_26f53c;
        case 0x26f540u: goto label_26f540;
        case 0x26f544u: goto label_26f544;
        case 0x26f548u: goto label_26f548;
        case 0x26f54cu: goto label_26f54c;
        case 0x26f550u: goto label_26f550;
        case 0x26f554u: goto label_26f554;
        case 0x26f558u: goto label_26f558;
        case 0x26f55cu: goto label_26f55c;
        case 0x26f560u: goto label_26f560;
        case 0x26f564u: goto label_26f564;
        case 0x26f568u: goto label_26f568;
        case 0x26f56cu: goto label_26f56c;
        case 0x26f570u: goto label_26f570;
        case 0x26f574u: goto label_26f574;
        case 0x26f578u: goto label_26f578;
        case 0x26f57cu: goto label_26f57c;
        case 0x26f580u: goto label_26f580;
        case 0x26f584u: goto label_26f584;
        case 0x26f588u: goto label_26f588;
        case 0x26f58cu: goto label_26f58c;
        case 0x26f590u: goto label_26f590;
        case 0x26f594u: goto label_26f594;
        case 0x26f598u: goto label_26f598;
        case 0x26f59cu: goto label_26f59c;
        case 0x26f5a0u: goto label_26f5a0;
        case 0x26f5a4u: goto label_26f5a4;
        case 0x26f5a8u: goto label_26f5a8;
        case 0x26f5acu: goto label_26f5ac;
        case 0x26f5b0u: goto label_26f5b0;
        case 0x26f5b4u: goto label_26f5b4;
        case 0x26f5b8u: goto label_26f5b8;
        case 0x26f5bcu: goto label_26f5bc;
        case 0x26f5c0u: goto label_26f5c0;
        case 0x26f5c4u: goto label_26f5c4;
        case 0x26f5c8u: goto label_26f5c8;
        case 0x26f5ccu: goto label_26f5cc;
        case 0x26f5d0u: goto label_26f5d0;
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f5d8u: goto label_26f5d8;
        case 0x26f5dcu: goto label_26f5dc;
        case 0x26f5e0u: goto label_26f5e0;
        case 0x26f5e4u: goto label_26f5e4;
        case 0x26f5e8u: goto label_26f5e8;
        case 0x26f5ecu: goto label_26f5ec;
        case 0x26f5f0u: goto label_26f5f0;
        case 0x26f5f4u: goto label_26f5f4;
        case 0x26f5f8u: goto label_26f5f8;
        case 0x26f5fcu: goto label_26f5fc;
        case 0x26f600u: goto label_26f600;
        case 0x26f604u: goto label_26f604;
        case 0x26f608u: goto label_26f608;
        case 0x26f60cu: goto label_26f60c;
        case 0x26f610u: goto label_26f610;
        case 0x26f614u: goto label_26f614;
        case 0x26f618u: goto label_26f618;
        case 0x26f61cu: goto label_26f61c;
        case 0x26f620u: goto label_26f620;
        case 0x26f624u: goto label_26f624;
        case 0x26f628u: goto label_26f628;
        case 0x26f62cu: goto label_26f62c;
        case 0x26f630u: goto label_26f630;
        case 0x26f634u: goto label_26f634;
        case 0x26f638u: goto label_26f638;
        case 0x26f63cu: goto label_26f63c;
        case 0x26f640u: goto label_26f640;
        case 0x26f644u: goto label_26f644;
        case 0x26f648u: goto label_26f648;
        case 0x26f64cu: goto label_26f64c;
        case 0x26f650u: goto label_26f650;
        case 0x26f654u: goto label_26f654;
        case 0x26f658u: goto label_26f658;
        case 0x26f65cu: goto label_26f65c;
        case 0x26f660u: goto label_26f660;
        case 0x26f664u: goto label_26f664;
        case 0x26f668u: goto label_26f668;
        case 0x26f66cu: goto label_26f66c;
        case 0x26f670u: goto label_26f670;
        case 0x26f674u: goto label_26f674;
        case 0x26f678u: goto label_26f678;
        case 0x26f67cu: goto label_26f67c;
        case 0x26f680u: goto label_26f680;
        case 0x26f684u: goto label_26f684;
        case 0x26f688u: goto label_26f688;
        case 0x26f68cu: goto label_26f68c;
        case 0x26f690u: goto label_26f690;
        case 0x26f694u: goto label_26f694;
        case 0x26f698u: goto label_26f698;
        case 0x26f69cu: goto label_26f69c;
        case 0x26f6a0u: goto label_26f6a0;
        case 0x26f6a4u: goto label_26f6a4;
        case 0x26f6a8u: goto label_26f6a8;
        case 0x26f6acu: goto label_26f6ac;
        case 0x26f6b0u: goto label_26f6b0;
        case 0x26f6b4u: goto label_26f6b4;
        case 0x26f6b8u: goto label_26f6b8;
        case 0x26f6bcu: goto label_26f6bc;
        case 0x26f6c0u: goto label_26f6c0;
        case 0x26f6c4u: goto label_26f6c4;
        case 0x26f6c8u: goto label_26f6c8;
        case 0x26f6ccu: goto label_26f6cc;
        case 0x26f6d0u: goto label_26f6d0;
        case 0x26f6d4u: goto label_26f6d4;
        case 0x26f6d8u: goto label_26f6d8;
        case 0x26f6dcu: goto label_26f6dc;
        case 0x26f6e0u: goto label_26f6e0;
        case 0x26f6e4u: goto label_26f6e4;
        case 0x26f6e8u: goto label_26f6e8;
        case 0x26f6ecu: goto label_26f6ec;
        case 0x26f6f0u: goto label_26f6f0;
        case 0x26f6f4u: goto label_26f6f4;
        case 0x26f6f8u: goto label_26f6f8;
        case 0x26f6fcu: goto label_26f6fc;
        case 0x26f700u: goto label_26f700;
        case 0x26f704u: goto label_26f704;
        case 0x26f708u: goto label_26f708;
        case 0x26f70cu: goto label_26f70c;
        case 0x26f710u: goto label_26f710;
        case 0x26f714u: goto label_26f714;
        case 0x26f718u: goto label_26f718;
        case 0x26f71cu: goto label_26f71c;
        case 0x26f720u: goto label_26f720;
        case 0x26f724u: goto label_26f724;
        case 0x26f728u: goto label_26f728;
        case 0x26f72cu: goto label_26f72c;
        case 0x26f730u: goto label_26f730;
        case 0x26f734u: goto label_26f734;
        default: break;
    }

    ctx->pc = 0x26f4f8u;

label_26f4f8:
    // 0x26f4f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26f4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_26f4fc:
    // 0x26f4fc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x26f4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_26f500:
    // 0x26f500: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x26f500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_26f504:
    // 0x26f504: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x26f504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26f508:
    // 0x26f508: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x26f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_26f50c:
    // 0x26f50c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f510:
    // 0x26f510: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x26f510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_26f514:
    // 0x26f514: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26f514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26f518:
    // 0x26f518: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x26f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_26f51c:
    // 0x26f51c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26f51cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26f520:
    // 0x26f520: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x26f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_26f524:
    // 0x26f524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26f528:
    // 0x26f528: 0xc0b1488  jal         func_2C5220
label_26f52c:
    if (ctx->pc == 0x26F52Cu) {
        ctx->pc = 0x26F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F528u;
        // 0x26f52c: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F530u;
        goto label_26f530;
    }
    ctx->pc = 0x26F528u;
    SET_GPR_U32(ctx, 31, 0x26F530u);
    ctx->pc = 0x26F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F528u;
    // 0x26f52c: 0x8e5000b8  lw          $s0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26F528u, 0x26F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F530u;
label_26f530:
    // 0x26f530: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x26f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_26f534:
    // 0x26f534: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_26f538:
    if (ctx->pc == 0x26F538u) {
        ctx->pc = 0x26F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F534u;
        // 0x26f538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F53Cu;
        goto label_26f53c;
    }
    ctx->pc = 0x26F534u;
    {
        const bool branch_taken_0x26f534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F534u;
        // 0x26f538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f534) {
            ctx->pc = 0x26F718u;
            goto label_26f718;
        }
    }
    ctx->pc = 0x26F53Cu;
label_26f53c:
    // 0x26f53c: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x26f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_26f540:
    // 0x26f540: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_26f544:
    // 0x26f544: 0x40f809  jalr        $v0
label_26f548:
    if (ctx->pc == 0x26F548u) {
        ctx->pc = 0x26F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F544u;
        // 0x26f548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F54Cu;
        goto label_26f54c;
    }
    ctx->pc = 0x26F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F54Cu);
        ctx->pc = 0x26F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F544u;
        // 0x26f548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F544u, 0x26F54Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F54Cu;
label_26f54c:
    // 0x26f54c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f550:
    // 0x26f550: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x26f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_26f554:
    // 0x26f554: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x26f554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_26f558:
    // 0x26f558: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f55c:
    // 0x26f55c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26f560:
    // 0x26f560: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f564:
    // 0x26f564: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x26f564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_26f568:
    // 0x26f568: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x26f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f56c:
    // 0x26f56c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26f56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_26f570:
    // 0x26f570: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x26f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_26f574:
    // 0x26f574: 0x40f809  jalr        $v0
label_26f578:
    if (ctx->pc == 0x26F578u) {
        ctx->pc = 0x26F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F574u;
        // 0x26f578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F57Cu;
        goto label_26f57c;
    }
    ctx->pc = 0x26F574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F57Cu);
        ctx->pc = 0x26F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F574u;
        // 0x26f578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F574u, 0x26F57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F57Cu;
label_26f57c:
    // 0x26f57c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f580:
    // 0x26f580: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26f580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_26f584:
    // 0x26f584: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f588:
    // 0x26f588: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26f588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_26f58c:
    // 0x26f58c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f590:
    // 0x26f590: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26f590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_26f594:
    // 0x26f594: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x26f594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f598:
    // 0x26f598: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
label_26f59c:
    if (ctx->pc == 0x26F59Cu) {
        ctx->pc = 0x26F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F598u;
        // 0x26f59c: 0xe7a1005c  swc1        $f1, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5A0u;
        goto label_26f5a0;
    }
    ctx->pc = 0x26F598u;
    {
        const bool branch_taken_0x26f598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F598u;
        // 0x26f59c: 0xe7a1005c  swc1        $f1, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f598) {
            ctx->pc = 0x26F614u;
            goto label_26f614;
        }
    }
    ctx->pc = 0x26F5A0u;
label_26f5a0:
    // 0x26f5a0: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x26f5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26f5a4:
    // 0x26f5a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26f5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f5a8:
    // 0x26f5a8: 0xc09c36e  jal         func_270DB8
label_26f5ac:
    if (ctx->pc == 0x26F5ACu) {
        ctx->pc = 0x26F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5A8u;
        // 0x26f5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5B0u;
        goto label_26f5b0;
    }
    ctx->pc = 0x26F5A8u;
    SET_GPR_U32(ctx, 31, 0x26F5B0u);
    ctx->pc = 0x26F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5A8u;
    // 0x26f5ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB8u, 0x26F5A8u, 0x26F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5B0u;
label_26f5b0:
    // 0x26f5b0: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x26f5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26f5b4:
    // 0x26f5b4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26f5b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26f5b8:
    // 0x26f5b8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26f5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f5bc:
    // 0x26f5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f5c0:
    // 0x26f5c0: 0xc09c3a2  jal         func_270E88
label_26f5c4:
    if (ctx->pc == 0x26F5C4u) {
        ctx->pc = 0x26F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F5C0u;
        // 0x26f5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F5C8u;
        goto label_26f5c8;
    }
    ctx->pc = 0x26F5C0u;
    SET_GPR_U32(ctx, 31, 0x26F5C8u);
    ctx->pc = 0x26F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5C0u;
    // 0x26f5c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E88u, 0x26F5C0u, 0x26F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5C8u;
label_26f5c8:
    // 0x26f5c8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x26f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26f5cc:
    // 0x26f5cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26f5ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26f5d0:
    // 0x26f5d0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x26f5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f5d4:
    // 0x26f5d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26f5d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26f5d8:
    // 0x26f5d8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x26f5d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26f5dc:
    // 0x26f5dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26f5dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26f5e0:
    // 0x26f5e0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26f5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f5e4:
    // 0x26f5e4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f5e8:
    // 0x26f5e8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x26f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f5ec:
    // 0x26f5ec: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x26f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26f5f0:
    // 0x26f5f0: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x26f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26f5f4:
    // 0x26f5f4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26f5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26f5f8:
    // 0x26f5f8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x26f5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26f5fc:
    // 0x26f5fc: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x26f5fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26f600:
    // 0x26f600: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x26f600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_26f604:
    // 0x26f604: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26f604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26f608:
    // 0x26f608: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x26f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f60c:
    // 0x26f60c: 0x10000014  b           . + 4 + (0x14 << 2)
label_26f610:
    if (ctx->pc == 0x26F610u) {
        ctx->pc = 0x26F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F60Cu;
        // 0x26f610: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F614u;
        goto label_26f614;
    }
    ctx->pc = 0x26F60Cu;
    {
        const bool branch_taken_0x26f60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F60Cu;
        // 0x26f610: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f60c) {
            ctx->pc = 0x26F660u;
            goto label_26f660;
        }
    }
    ctx->pc = 0x26F614u;
label_26f614:
    // 0x26f614: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x26f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26f618:
    // 0x26f618: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x26f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26f61c:
    // 0x26f61c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26f61cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26f620:
    // 0x26f620: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x26f620u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26f624:
    // 0x26f624: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26f624u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26f628:
    // 0x26f628: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26f628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f62c:
    // 0x26f62c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x26f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26f630:
    // 0x26f630: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x26f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26f634:
    // 0x26f634: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x26f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f638:
    // 0x26f638: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x26f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f63c:
    // 0x26f63c: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x26f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26f640:
    // 0x26f640: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x26f640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26f644:
    // 0x26f644: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x26f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26f648:
    // 0x26f648: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x26f648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26f64c:
    // 0x26f64c: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x26f64cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_26f650:
    // 0x26f650: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26f650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26f654:
    // 0x26f654: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x26f654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f658:
    // 0x26f658: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x26f658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26f65c:
    // 0x26f65c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26f660:
    // 0x26f660: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26f660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26f664:
    // 0x26f664: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26f664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26f668:
    // 0x26f668: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x26f668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26f66c:
    // 0x26f66c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x26f66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26f670:
    // 0x26f670: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x26f670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26f674:
    // 0x26f674: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x26f674u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_26f678:
    // 0x26f678: 0x4a0003bf  vwaitq
    ctx->pc = 0x26f678u;
    // VWAITQ (Q already resolved in this runtime)
label_26f67c:
    // 0x26f67c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x26f67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26f680:
    // 0x26f680: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x26f680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f684:
    // 0x26f684: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x26f684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_26f688:
    // 0x26f688: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26f688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26f68c:
    // 0x26f68c: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x26f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
label_26f690:
    // 0x26f690: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26f690u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26f694:
    // 0x26f694: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26f694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f698:
    // 0x26f698: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26f698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26f69c:
    // 0x26f69c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26f69cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26f6a0:
    // 0x26f6a0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x26f6a0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_26f6a4:
    // 0x26f6a4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x26f6a4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26f6a8:
    // 0x26f6a8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f6ac:
    // 0x26f6ac: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26f6acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26f6b0:
    // 0x26f6b0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f6b4:
    // 0x26f6b4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x26f6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_26f6b8:
    // 0x26f6b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26f6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f6bc:
    // 0x26f6bc: 0xc076e46  jal         func_1DB918
label_26f6c0:
    if (ctx->pc == 0x26F6C0u) {
        ctx->pc = 0x26F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6BCu;
        // 0x26f6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6C4u;
        goto label_26f6c4;
    }
    ctx->pc = 0x26F6BCu;
    SET_GPR_U32(ctx, 31, 0x26F6C4u);
    ctx->pc = 0x26F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6BCu;
    // 0x26f6c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x26F6BCu, 0x26F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6C4u;
label_26f6c4:
    // 0x26f6c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26f6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f6c8:
    // 0x26f6c8: 0xc08e0fa  jal         func_2383E8
label_26f6cc:
    if (ctx->pc == 0x26F6CCu) {
        ctx->pc = 0x26F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6C8u;
        // 0x26f6cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6D0u;
        goto label_26f6d0;
    }
    ctx->pc = 0x26F6C8u;
    SET_GPR_U32(ctx, 31, 0x26F6D0u);
    ctx->pc = 0x26F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6C8u;
    // 0x26f6cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x26F6C8u, 0x26F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6D0u;
label_26f6d0:
    // 0x26f6d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_26f6d4:
    if (ctx->pc == 0x26F6D4u) {
        ctx->pc = 0x26F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6D0u;
        // 0x26f6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6D8u;
        goto label_26f6d8;
    }
    ctx->pc = 0x26F6D0u;
    {
        const bool branch_taken_0x26f6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6D0u;
        // 0x26f6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6d0) {
            ctx->pc = 0x26F6E8u;
            goto label_26f6e8;
        }
    }
    ctx->pc = 0x26F6D8u;
label_26f6d8:
    // 0x26f6d8: 0xc076e38  jal         func_1DB8E0
label_26f6dc:
    if (ctx->pc == 0x26F6DCu) {
        ctx->pc = 0x26F6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6D8u;
        // 0x26f6dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6E0u;
        goto label_26f6e0;
    }
    ctx->pc = 0x26F6D8u;
    SET_GPR_U32(ctx, 31, 0x26F6E0u);
    ctx->pc = 0x26F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6D8u;
    // 0x26f6dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x26F6D8u, 0x26F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6E0u;
label_26f6e0:
    // 0x26f6e0: 0x1000000d  b           . + 4 + (0xD << 2)
label_26f6e4:
    if (ctx->pc == 0x26F6E4u) {
        ctx->pc = 0x26F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6E0u;
        // 0x26f6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6E8u;
        goto label_26f6e8;
    }
    ctx->pc = 0x26F6E0u;
    {
        const bool branch_taken_0x26f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6E0u;
        // 0x26f6e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6e0) {
            ctx->pc = 0x26F718u;
            goto label_26f718;
        }
    }
    ctx->pc = 0x26F6E8u;
label_26f6e8:
    // 0x26f6e8: 0xc076e38  jal         func_1DB8E0
label_26f6ec:
    if (ctx->pc == 0x26F6ECu) {
        ctx->pc = 0x26F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6E8u;
        // 0x26f6ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6F0u;
        goto label_26f6f0;
    }
    ctx->pc = 0x26F6E8u;
    SET_GPR_U32(ctx, 31, 0x26F6F0u);
    ctx->pc = 0x26F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F6E8u;
    // 0x26f6ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x26F6E8u, 0x26F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F6F0u;
label_26f6f0:
    // 0x26f6f0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_26f6f4:
    if (ctx->pc == 0x26F6F4u) {
        ctx->pc = 0x26F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6F0u;
        // 0x26f6f4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F6F8u;
        goto label_26f6f8;
    }
    ctx->pc = 0x26F6F0u;
    {
        const bool branch_taken_0x26f6f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F6F0u;
        // 0x26f6f4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6f0) {
            ctx->pc = 0x26F714u;
            goto label_26f714;
        }
    }
    ctx->pc = 0x26F6F8u;
label_26f6f8:
    // 0x26f6f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f6fc:
    // 0x26f6fc: 0xc44c96ac  lwc1        $f12, -0x6954($v0)
    ctx->pc = 0x26f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26f700:
    // 0x26f700: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26f700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26f704:
    // 0x26f704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f708:
    // 0x26f708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26f708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f70c:
    // 0x26f70c: 0xc08e23a  jal         func_2388E8
label_26f710:
    if (ctx->pc == 0x26F710u) {
        ctx->pc = 0x26F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F70Cu;
        // 0x26f710: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F714u;
        goto label_26f714;
    }
    ctx->pc = 0x26F70Cu;
    SET_GPR_U32(ctx, 31, 0x26F714u);
    ctx->pc = 0x26F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F70Cu;
    // 0x26f710: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x26F70Cu, 0x26F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F714u;
label_26f714:
    // 0x26f714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f718:
    // 0x26f718: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x26f718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26f71c:
    // 0x26f71c: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x26f71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_26f720:
    // 0x26f720: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x26f720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26f724:
    // 0x26f724: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x26f724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_26f728:
    // 0x26f728: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x26f728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26f72c:
    // 0x26f72c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x26f72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_26f730:
    // 0x26f730: 0x3e00008  jr          $ra
label_26f734:
    if (ctx->pc == 0x26F734u) {
        ctx->pc = 0x26F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F730u;
        // 0x26f734: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F738u;
        goto label_fallthrough_0x26f730;
    }
    ctx->pc = 0x26F730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F730u;
        // 0x26f734: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26f730:
    ctx->pc = 0x26F738u;
}
