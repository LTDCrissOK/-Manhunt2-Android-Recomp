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

// Function: sub_001DB230
// Address: 0x1db230 - 0x1db740
void sub_001DB230_0x1db230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB230_0x1db230");
#endif

    switch (ctx->pc) {
        case 0x1db2a4u: goto label_1db2a4;
        case 0x1db2ccu: goto label_1db2cc;
        case 0x1db2f8u: goto label_1db2f8;
        case 0x1db334u: goto label_1db334;
        case 0x1db33cu: goto label_1db33c;
        case 0x1db358u: goto label_1db358;
        case 0x1db364u: goto label_1db364;
        case 0x1db378u: goto label_1db378;
        case 0x1db394u: goto label_1db394;
        case 0x1db3c0u: goto label_1db3c0;
        case 0x1db3d0u: goto label_1db3d0;
        case 0x1db3fcu: goto label_1db3fc;
        case 0x1db410u: goto label_1db410;
        case 0x1db48cu: goto label_1db48c;
        case 0x1db494u: goto label_1db494;
        case 0x1db504u: goto label_1db504;
        case 0x1db5a4u: goto label_1db5a4;
        case 0x1db5b4u: goto label_1db5b4;
        case 0x1db5bcu: goto label_1db5bc;
        case 0x1db5ccu: goto label_1db5cc;
        case 0x1db60cu: goto label_1db60c;
        case 0x1db620u: goto label_1db620;
        case 0x1db628u: goto label_1db628;
        case 0x1db638u: goto label_1db638;
        case 0x1db64cu: goto label_1db64c;
        case 0x1db654u: goto label_1db654;
        case 0x1db664u: goto label_1db664;
        case 0x1db690u: goto label_1db690;
        case 0x1db698u: goto label_1db698;
        case 0x1db6a8u: goto label_1db6a8;
        case 0x1db6bcu: goto label_1db6bc;
        case 0x1db6c4u: goto label_1db6c4;
        case 0x1db6d4u: goto label_1db6d4;
        case 0x1db6dcu: goto label_1db6dc;
        default: break;
    }

    ctx->pc = 0x1db230u;

    // 0x1db230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1db230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1db234: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1db234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1db238: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1db238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1db23c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db240: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1db240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1db244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db248: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1db248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1db24c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db24cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db250: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1db250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1db254: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1db254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db258: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1db258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1db25c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1db25cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db260: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1db260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1db264: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1db264u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db268: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1db268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1db26c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1db26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db270: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1db270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1db274: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1db274u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db278: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1db278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1db27c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1db27cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db280: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1db280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1db284: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB284u;
    {
        const bool branch_taken_0x1db284 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB284u;
        // 0x1db288: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db284) {
            ctx->pc = 0x1DB29Cu;
            goto label_1db29c;
        }
    }
    ctx->pc = 0x1DB28Cu;
    // 0x1db28c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1db28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db290: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1db290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db294: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1db294u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db298: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1db298u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db29c:
    // 0x1db29c: 0xc076424  jal         func_1D9090
    ctx->pc = 0x1DB29Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2A4u);
    ctx->pc = 0x1D9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9090u, 0x1DB29Cu, 0x1DB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A4u;
label_1db2a4:
    // 0x1db2a4: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x1db2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1db2a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1db2ac: 0x14400116  bnez        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x1DB2ACu;
    {
        const bool branch_taken_0x1db2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2ACu;
        // 0x1db2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2ac) {
            ctx->pc = 0x1DB708u;
            goto label_1db708;
        }
    }
    ctx->pc = 0x1DB2B4u;
    // 0x1db2b4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db2b8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1db2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1db2bc: 0x10800112  beqz        $a0, . + 4 + (0x112 << 2)
    ctx->pc = 0x1DB2BCu;
    {
        const bool branch_taken_0x1db2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2BCu;
        // 0x1db2c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2bc) {
            ctx->pc = 0x1DB708u;
            goto label_1db708;
        }
    }
    ctx->pc = 0x1DB2C4u;
    // 0x1db2c4: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1DB2C4u;
    SET_GPR_U32(ctx, 31, 0x1DB2CCu);
    ctx->pc = 0x1DB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C4u;
    // 0x1db2c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1DB2C4u, 0x1DB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2CCu;
label_1db2cc:
    // 0x1db2cc: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1db2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db2d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1db2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db2d8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1db2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1db2dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1db2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1db2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1db2e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1db2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db2e8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1db2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1db2ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1db2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2f0: 0xc0b5cee  jal         func_2D73B8
    ctx->pc = 0x1DB2F0u;
    SET_GPR_U32(ctx, 31, 0x1DB2F8u);
    ctx->pc = 0x1DB2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2F0u;
    // 0x1db2f4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73B8u, 0x1DB2F0u, 0x1DB2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2F8u;
label_1db2f8:
    // 0x1db2f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB2F8u;
    {
        const bool branch_taken_0x1db2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db2f8) {
            ctx->pc = 0x1DB320u;
            goto label_1db320;
        }
    }
    ctx->pc = 0x1DB300u;
    // 0x1db300: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1db300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1db304: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1db304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1db308: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1db308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1db30c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB30Cu;
    {
        const bool branch_taken_0x1db30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db30c) {
            ctx->pc = 0x1DB320u;
            goto label_1db320;
        }
    }
    ctx->pc = 0x1DB314u;
    // 0x1db314: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db318: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1db318u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db31c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1db31cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db320:
    // 0x1db320: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DB320u;
    {
        const bool branch_taken_0x1db320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB320u;
        // 0x1db324: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db320) {
            ctx->pc = 0x1DB380u;
            goto label_1db380;
        }
    }
    ctx->pc = 0x1DB328u;
    // 0x1db328: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1db328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db32c: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DB32Cu;
    SET_GPR_U32(ctx, 31, 0x1DB334u);
    ctx->pc = 0x1DB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB32Cu;
    // 0x1db330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DB32Cu, 0x1DB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB334u;
label_1db334:
    // 0x1db334: 0xc0769d4  jal         func_1DA750
    ctx->pc = 0x1DB334u;
    SET_GPR_U32(ctx, 31, 0x1DB33Cu);
    ctx->pc = 0x1DB338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB334u;
    // 0x1db338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA750u, 0x1DB334u, 0x1DB33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB33Cu;
label_1db33c:
    // 0x1db33c: 0x92230032  lbu         $v1, 0x32($s1)
    ctx->pc = 0x1db33cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1db340: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1db340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1db344: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1db344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1db348: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB348u;
    {
        const bool branch_taken_0x1db348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB348u;
        // 0x1db34c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db348) {
            ctx->pc = 0x1DB36Cu;
            goto label_1db36c;
        }
    }
    ctx->pc = 0x1DB350u;
    // 0x1db350: 0xc07641a  jal         func_1D9068
    ctx->pc = 0x1DB350u;
    SET_GPR_U32(ctx, 31, 0x1DB358u);
    ctx->pc = 0x1D9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9068u, 0x1DB350u, 0x1DB358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB358u;
label_1db358:
    // 0x1db358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db35c: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DB35Cu;
    SET_GPR_U32(ctx, 31, 0x1DB364u);
    ctx->pc = 0x1DB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB35Cu;
    // 0x1db360: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DB35Cu, 0x1DB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB364u;
label_1db364:
    // 0x1db364: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x1DB364u;
    {
        const bool branch_taken_0x1db364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB364u;
        // 0x1db368: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db364) {
            ctx->pc = 0x1DB708u;
            goto label_1db708;
        }
    }
    ctx->pc = 0x1DB36Cu;
label_1db36c:
    // 0x1db36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db370: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DB370u;
    SET_GPR_U32(ctx, 31, 0x1DB378u);
    ctx->pc = 0x1DB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB370u;
    // 0x1db374: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DB370u, 0x1DB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB378u;
label_1db378:
    // 0x1db378: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DB378u;
    {
        const bool branch_taken_0x1db378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db378) {
            ctx->pc = 0x1DB3E4u;
            goto label_1db3e4;
        }
    }
    ctx->pc = 0x1DB380u;
label_1db380:
    // 0x1db380: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DB380u;
    {
        const bool branch_taken_0x1db380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB380u;
        // 0x1db384: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db380) {
            ctx->pc = 0x1DB3E4u;
            goto label_1db3e4;
        }
    }
    ctx->pc = 0x1DB388u;
    // 0x1db388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1db388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db38c: 0xc0b5cfe  jal         func_2D73F8
    ctx->pc = 0x1DB38Cu;
    SET_GPR_U32(ctx, 31, 0x1DB394u);
    ctx->pc = 0x1DB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB38Cu;
    // 0x1db390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73F8u, 0x1DB38Cu, 0x1DB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB394u;
label_1db394:
    // 0x1db394: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1db394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db398: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db39c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1db39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1db3a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1db3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db3a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3a8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1db3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1db3ac: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1db3acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1db3b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1db3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db3b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1db3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1db3b8: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x1DB3B8u;
    SET_GPR_U32(ctx, 31, 0x1DB3C0u);
    ctx->pc = 0x1DB3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3B8u;
    // 0x1db3bc: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x1DB3B8u, 0x1DB3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3C0u;
label_1db3c0:
    // 0x1db3c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1db3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1db3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3c8: 0xc0793ec  jal         func_1E4FB0
    ctx->pc = 0x1DB3C8u;
    SET_GPR_U32(ctx, 31, 0x1DB3D0u);
    ctx->pc = 0x1DB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3C8u;
    // 0x1db3cc: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4FB0u, 0x1DB3C8u, 0x1DB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3D0u;
label_1db3d0:
    // 0x1db3d0: 0x92220032  lbu         $v0, 0x32($s1)
    ctx->pc = 0x1db3d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1db3d4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x1db3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1db3d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1db3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1db3dc: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x1DB3DCu;
    {
        const bool branch_taken_0x1db3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3DCu;
        // 0x1db3e0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3dc) {
            ctx->pc = 0x1DB708u;
            goto label_1db708;
        }
    }
    ctx->pc = 0x1DB3E4u;
label_1db3e4:
    // 0x1db3e4: 0x12c0009f  beqz        $s6, . + 4 + (0x9F << 2)
    ctx->pc = 0x1DB3E4u;
    {
        const bool branch_taken_0x1db3e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db3e4) {
            ctx->pc = 0x1DB664u;
            goto label_1db664;
        }
    }
    ctx->pc = 0x1DB3ECu;
    // 0x1db3ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db3f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3f4: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1DB3F4u;
    SET_GPR_U32(ctx, 31, 0x1DB3FCu);
    ctx->pc = 0x1DB3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3F4u;
    // 0x1db3f8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1DB3F4u, 0x1DB3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3FCu;
label_1db3fc:
    // 0x1db3fc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1db3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db400: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1db400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db408: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1DB408u;
    SET_GPR_U32(ctx, 31, 0x1DB410u);
    ctx->pc = 0x1DB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB408u;
    // 0x1db40c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1DB408u, 0x1DB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB410u;
label_1db410:
    // 0x1db410: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1db410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db414: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1db414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db418: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1db418u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db41c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1db41cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1db420: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1db420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db424: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1db424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db428: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1db428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1db42c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1db42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db430: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1db430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1db434: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1db434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db438: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x1db438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1db43c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1db43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1db440: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1db440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1db444: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1db444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1db448: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x1db448u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1db44c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1db44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db450: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1db450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1db454: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1db454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1db458: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1db458u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1db45c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1db45cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1db460: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1db460u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1db464: 0x46010044  c1          0x10044
    ctx->pc = 0x1db464u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1db468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1db468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db46c: 0x0  nop
    ctx->pc = 0x1db46cu;
    // NOP
    // 0x1db470: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1db470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db474: 0x0  nop
    ctx->pc = 0x1db474u;
    // NOP
    // 0x1db478: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB478u;
    {
        const bool branch_taken_0x1db478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB478u;
        // 0x1db47c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db478) {
            ctx->pc = 0x1DB49Cu;
            goto label_1db49c;
        }
    }
    ctx->pc = 0x1DB480u;
    // 0x1db480: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1db480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1db484: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DB484u;
    SET_GPR_U32(ctx, 31, 0x1DB48Cu);
    ctx->pc = 0x1DB488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB484u;
    // 0x1db488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DB484u, 0x1DB48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB48Cu;
label_1db48c:
    // 0x1db48c: 0xc076aaa  jal         func_1DAAA8
    ctx->pc = 0x1DB48Cu;
    SET_GPR_U32(ctx, 31, 0x1DB494u);
    ctx->pc = 0x1DB490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB48Cu;
    // 0x1db490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAAA8u, 0x1DB48Cu, 0x1DB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB494u;
label_1db494:
    // 0x1db494: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1DB494u;
    {
        const bool branch_taken_0x1db494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB494u;
        // 0x1db498: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db494) {
            ctx->pc = 0x1DB62Cu;
            goto label_1db62c;
        }
    }
    ctx->pc = 0x1DB49Cu;
label_1db49c:
    // 0x1db49c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1db49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1db4a0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1db4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1db4a4: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1db4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1db4a8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1db4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1db4ac: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x1DB4ACu;
    {
        const bool branch_taken_0x1db4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db4ac) {
            ctx->pc = 0x1DB4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB4ACu;
            // 0x1db4b0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB640u;
            goto label_1db640;
        }
    }
    ctx->pc = 0x1DB4B4u;
    // 0x1db4b4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1db4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1db4b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1db4b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1db4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1db4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db4c0: 0x0  nop
    ctx->pc = 0x1db4c0u;
    // NOP
    // 0x1db4c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1db4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db4c8: 0x0  nop
    ctx->pc = 0x1db4c8u;
    // NOP
    // 0x1db4cc: 0x45020051  bc1fl       . + 4 + (0x51 << 2)
    ctx->pc = 0x1DB4CCu;
    {
        const bool branch_taken_0x1db4cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db4cc) {
            ctx->pc = 0x1DB4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB4CCu;
            // 0x1db4d0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB614u;
            goto label_1db614;
        }
    }
    ctx->pc = 0x1DB4D4u;
    // 0x1db4d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1db4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1db4d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1db4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db4dc: 0x0  nop
    ctx->pc = 0x1db4dcu;
    // NOP
    // 0x1db4e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1db4e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1db4e4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1db4e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db4e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1db4e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1db4ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1db4ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1db4f0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1db4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db4f4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db4f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db4fc: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1DB4FCu;
    SET_GPR_U32(ctx, 31, 0x1DB504u);
    ctx->pc = 0x1DB500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB4FCu;
    // 0x1db500: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1DB4FCu, 0x1DB504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB504u;
label_1db504:
    // 0x1db504: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1db504u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1db508: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1db508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db50c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1db50cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db510: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1db510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db514: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1db514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1db518: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1db518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db51c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1db51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db520: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1db520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db524: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1db524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1db528: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1db528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1db52c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1db52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1db530: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1db530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1db534: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1db534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1db538: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x1db538u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1db53c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1db53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1db540: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x1db540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db544: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1db544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1db548: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1db548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1db54c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1db54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db550: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1db550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1db554: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1db554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db558: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1db558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1db55c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1db55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db560: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1db560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1db564: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1db564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1db568: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1db568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db56c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1db56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1db570: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1db570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db574: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x1db574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1db578: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db57c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1db57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1db580: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1db580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1db584: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db588: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1db588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1db58c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB58Cu;
    {
        const bool branch_taken_0x1db58c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB58Cu;
        // 0x1db590: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db58c) {
            ctx->pc = 0x1DB5A8u;
            goto label_1db5a8;
        }
    }
    ctx->pc = 0x1DB594u;
    // 0x1db594: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1db594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1db598: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1db598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1db59c: 0xc0797ca  jal         func_1E5F28
    ctx->pc = 0x1DB59Cu;
    SET_GPR_U32(ctx, 31, 0x1DB5A4u);
    ctx->pc = 0x1DB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB59Cu;
    // 0x1db5a0: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F28u, 0x1DB59Cu, 0x1DB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5A4u;
label_1db5a4:
    // 0x1db5a4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1db5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1db5a8:
    // 0x1db5a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1db5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5ac: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DB5ACu;
    SET_GPR_U32(ctx, 31, 0x1DB5B4u);
    ctx->pc = 0x1DB5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5ACu;
    // 0x1db5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DB5ACu, 0x1DB5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5B4u;
label_1db5b4:
    // 0x1db5b4: 0xc076afa  jal         func_1DABE8
    ctx->pc = 0x1DB5B4u;
    SET_GPR_U32(ctx, 31, 0x1DB5BCu);
    ctx->pc = 0x1DB5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5B4u;
    // 0x1db5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DABE8u, 0x1DB5B4u, 0x1DB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5BCu;
label_1db5bc:
    // 0x1db5bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1db5bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db5c4: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DB5C4u;
    SET_GPR_U32(ctx, 31, 0x1DB5CCu);
    ctx->pc = 0x1DB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB5C4u;
    // 0x1db5c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DB5C4u, 0x1DB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB5CCu;
label_1db5cc:
    // 0x1db5cc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1db5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1db5d0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1db5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1db5d4: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1db5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db5d8: 0x16600022  bnez        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DB5D8u;
    {
        const bool branch_taken_0x1db5d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db5d8) {
            ctx->pc = 0x1DB664u;
            goto label_1db664;
        }
    }
    ctx->pc = 0x1DB5E0u;
    // 0x1db5e0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db5e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1db5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1db5e8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1db5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1db5ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1db5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1db5f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1db5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1db5f4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB5F4u;
    {
        const bool branch_taken_0x1db5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db5f4) {
            ctx->pc = 0x1DB5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB5F4u;
            // 0x1db5f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB618u;
            goto label_1db618;
        }
    }
    ctx->pc = 0x1DB5FCu;
    // 0x1db5fc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1db5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1db600: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1db600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1db604: 0xc0797ca  jal         func_1E5F28
    ctx->pc = 0x1DB604u;
    SET_GPR_U32(ctx, 31, 0x1DB60Cu);
    ctx->pc = 0x1DB608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB604u;
    // 0x1db608: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F28u, 0x1DB604u, 0x1DB60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB60Cu;
label_1db60c:
    // 0x1db60c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB60Cu;
    {
        const bool branch_taken_0x1db60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB60Cu;
        // 0x1db610: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db60c) {
            ctx->pc = 0x1DB618u;
            goto label_1db618;
        }
    }
    ctx->pc = 0x1DB614u;
label_1db614:
    // 0x1db614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1db614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1db618:
    // 0x1db618: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DB618u;
    SET_GPR_U32(ctx, 31, 0x1DB620u);
    ctx->pc = 0x1DB61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB618u;
    // 0x1db61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DB618u, 0x1DB620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB620u;
label_1db620:
    // 0x1db620: 0xc076afa  jal         func_1DABE8
    ctx->pc = 0x1DB620u;
    SET_GPR_U32(ctx, 31, 0x1DB628u);
    ctx->pc = 0x1DB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB620u;
    // 0x1db624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DABE8u, 0x1DB620u, 0x1DB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB628u;
label_1db628:
    // 0x1db628: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1db628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1db62c:
    // 0x1db62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db630: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DB630u;
    SET_GPR_U32(ctx, 31, 0x1DB638u);
    ctx->pc = 0x1DB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB630u;
    // 0x1db634: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DB630u, 0x1DB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB638u;
label_1db638:
    // 0x1db638: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DB638u;
    {
        const bool branch_taken_0x1db638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db638) {
            ctx->pc = 0x1DB664u;
            goto label_1db664;
        }
    }
    ctx->pc = 0x1DB640u;
label_1db640:
    // 0x1db640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1db640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db644: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DB644u;
    SET_GPR_U32(ctx, 31, 0x1DB64Cu);
    ctx->pc = 0x1DB648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB644u;
    // 0x1db648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DB644u, 0x1DB64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB64Cu;
label_1db64c:
    // 0x1db64c: 0xc076afa  jal         func_1DABE8
    ctx->pc = 0x1DB64Cu;
    SET_GPR_U32(ctx, 31, 0x1DB654u);
    ctx->pc = 0x1DB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB64Cu;
    // 0x1db650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DABE8u, 0x1DB64Cu, 0x1DB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB654u;
label_1db654:
    // 0x1db654: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1db654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db65c: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DB65Cu;
    SET_GPR_U32(ctx, 31, 0x1DB664u);
    ctx->pc = 0x1DB660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB65Cu;
    // 0x1db660: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DB65Cu, 0x1DB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB664u;
label_1db664:
    // 0x1db664: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB664u;
    {
        const bool branch_taken_0x1db664 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db664) {
            ctx->pc = 0x1DB6A8u;
            goto label_1db6a8;
        }
    }
    ctx->pc = 0x1DB66Cu;
    // 0x1db66c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1db66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1db670: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1db670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1db674: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1db674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1db678: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1db678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1db67c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB67Cu;
    {
        const bool branch_taken_0x1db67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB67Cu;
        // 0x1db680: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db67c) {
            ctx->pc = 0x1DB6A8u;
            goto label_1db6a8;
        }
    }
    ctx->pc = 0x1DB684u;
    // 0x1db684: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1db684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db688: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DB688u;
    SET_GPR_U32(ctx, 31, 0x1DB690u);
    ctx->pc = 0x1DB68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB688u;
    // 0x1db68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DB688u, 0x1DB690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB690u;
label_1db690:
    // 0x1db690: 0xc076bce  jal         func_1DAF38
    ctx->pc = 0x1DB690u;
    SET_GPR_U32(ctx, 31, 0x1DB698u);
    ctx->pc = 0x1DB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB690u;
    // 0x1db694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAF38u, 0x1DB690u, 0x1DB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB698u;
label_1db698:
    // 0x1db698: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1db698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1db69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6a0: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DB6A0u;
    SET_GPR_U32(ctx, 31, 0x1DB6A8u);
    ctx->pc = 0x1DB6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6A0u;
    // 0x1db6a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DB6A0u, 0x1DB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6A8u;
label_1db6a8:
    // 0x1db6a8: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x1DB6A8u;
    {
        const bool branch_taken_0x1db6a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6A8u;
        // 0x1db6ac: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6a8) {
            ctx->pc = 0x1DB6D4u;
            goto label_1db6d4;
        }
    }
    ctx->pc = 0x1DB6B0u;
    // 0x1db6b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1db6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6b4: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x1DB6B4u;
    SET_GPR_U32(ctx, 31, 0x1DB6BCu);
    ctx->pc = 0x1DB6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6B4u;
    // 0x1db6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x1DB6B4u, 0x1DB6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6BCu;
label_1db6bc:
    // 0x1db6bc: 0xc076b4c  jal         func_1DAD30
    ctx->pc = 0x1DB6BCu;
    SET_GPR_U32(ctx, 31, 0x1DB6C4u);
    ctx->pc = 0x1DB6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6BCu;
    // 0x1db6c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAD30u, 0x1DB6BCu, 0x1DB6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6C4u;
label_1db6c4:
    // 0x1db6c4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1db6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1db6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6cc: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x1DB6CCu;
    SET_GPR_U32(ctx, 31, 0x1DB6D4u);
    ctx->pc = 0x1DB6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB6CCu;
    // 0x1db6d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x1DB6CCu, 0x1DB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6D4u;
label_1db6d4:
    // 0x1db6d4: 0xc07641a  jal         func_1D9068
    ctx->pc = 0x1DB6D4u;
    SET_GPR_U32(ctx, 31, 0x1DB6DCu);
    ctx->pc = 0x1D9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9068u, 0x1DB6D4u, 0x1DB6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB6DCu;
label_1db6dc:
    // 0x1db6dc: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB6DCu;
    {
        const bool branch_taken_0x1db6dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6DCu;
        // 0x1db6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6dc) {
            ctx->pc = 0x1DB704u;
            goto label_1db704;
        }
    }
    ctx->pc = 0x1DB6E4u;
    // 0x1db6e4: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB6E4u;
    {
        const bool branch_taken_0x1db6e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db6e4) {
            ctx->pc = 0x1DB6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB6E4u;
            // 0x1db6e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB708u;
            goto label_1db708;
        }
    }
    ctx->pc = 0x1DB6ECu;
    // 0x1db6ec: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1db6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db6f0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB6F0u;
    {
        const bool branch_taken_0x1db6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db6f0) {
            ctx->pc = 0x1DB6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB6F0u;
            // 0x1db6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB708u;
            goto label_1db708;
        }
    }
    ctx->pc = 0x1DB6F8u;
    // 0x1db6f8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1db6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1db6fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB6FCu;
    {
        const bool branch_taken_0x1db6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6FCu;
        // 0x1db700: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6fc) {
            ctx->pc = 0x1DB70Cu;
            goto label_1db70c;
        }
    }
    ctx->pc = 0x1DB704u;
label_1db704:
    // 0x1db704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db708:
    // 0x1db708: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1db708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1db70c:
    // 0x1db70c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1db70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1db710: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1db710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db714: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1db714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1db718: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1db718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1db71c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1db71cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1db720: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1db720u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1db724: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1db724u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1db728: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1db728u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db72c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1db72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1db730: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB730u;
        // 0x1db734: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB738u;
    // 0x1db738: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x1db738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x1db73c: 0x0  nop
    ctx->pc = 0x1db73cu;
    // NOP
    ctx->pc = 0x1db740u;
}
