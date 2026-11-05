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

// Function: sub_00166FA0
// Address: 0x166fa0 - 0x1672f8
void sub_00166FA0_0x166fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166FA0_0x166fa0");
#endif

    switch (ctx->pc) {
        case 0x167038u: goto label_167038;
        case 0x1670c8u: goto label_1670c8;
        case 0x167150u: goto label_167150;
        case 0x16719cu: goto label_16719c;
        case 0x1671b0u: goto label_1671b0;
        case 0x1671bcu: goto label_1671bc;
        case 0x1671d4u: goto label_1671d4;
        case 0x1671ecu: goto label_1671ec;
        case 0x167200u: goto label_167200;
        case 0x167210u: goto label_167210;
        case 0x167218u: goto label_167218;
        case 0x167248u: goto label_167248;
        case 0x167258u: goto label_167258;
        case 0x167260u: goto label_167260;
        case 0x167294u: goto label_167294;
        case 0x1672bcu: goto label_1672bc;
        default: break;
    }

    ctx->pc = 0x166fa0u;

    // 0x166fa0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x166fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x166fa4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x166fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x166fa8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x166fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x166fac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x166facu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166fb0: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x166fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x166fb4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x166fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x166fb8: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x166fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x166fbc: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x166fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x166fc0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x166fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x166fc4: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x166fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x166fc8: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x166fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x166fcc: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x166fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x166fd0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x166fd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x166fd4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x166fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x166fd8: 0x8e8203c0  lw          $v0, 0x3C0($s4)
    ctx->pc = 0x166fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 960)));
    // 0x166fdc: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x166FDCu;
    {
        const bool branch_taken_0x166fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FDCu;
        // 0x166fe0: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166fdc) {
            ctx->pc = 0x1672C4u;
            goto label_1672c4;
        }
    }
    ctx->pc = 0x166FE4u;
    // 0x166fe4: 0x8e8202e0  lw          $v0, 0x2E0($s4)
    ctx->pc = 0x166fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x166fe8: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x166fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x166fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166ff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x166ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166ff4: 0x8c57020c  lw          $s7, 0x20C($v0)
    ctx->pc = 0x166ff4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x166ff8: 0x12e000b3  beqz        $s7, . + 4 + (0xB3 << 2)
    ctx->pc = 0x166FF8u;
    {
        const bool branch_taken_0x166ff8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x166FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166FF8u;
        // 0x166ffc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ff8) {
            ctx->pc = 0x1672C8u;
            goto label_1672c8;
        }
    }
    ctx->pc = 0x167000u;
    // 0x167000: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x167000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x167004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167008: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16700c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x167010: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x167010u;
    {
        const bool branch_taken_0x167010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167010) {
            ctx->pc = 0x167014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167010u;
            // 0x167014: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167020u;
            goto label_167020;
        }
    }
    ctx->pc = 0x167018u;
    // 0x167018: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x167018u;
    {
        const bool branch_taken_0x167018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167018u;
        // 0x16701c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167018) {
            ctx->pc = 0x167028u;
            goto label_167028;
        }
    }
    ctx->pc = 0x167020u;
label_167020:
    // 0x167020: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x167020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167024: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x167024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_167028:
    // 0x167028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x167028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16702c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16702cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167030: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x167030u;
    SET_GPR_U32(ctx, 31, 0x167038u);
    ctx->pc = 0x167034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167030u;
    // 0x167034: 0x268602f0  addiu       $a2, $s4, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x167030u, 0x167038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167038u;
label_167038:
    // 0x167038: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x167038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16703c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x16703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167040: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x167040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167044: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167044u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x167048: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x167048u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x16704c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x16704cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x167050: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x167054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167058: 0x0  nop
    ctx->pc = 0x167058u;
    // NOP
    // 0x16705c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16705cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167060: 0x0  nop
    ctx->pc = 0x167060u;
    // NOP
    // 0x167064: 0x45030098  bc1tl       . + 4 + (0x98 << 2)
    ctx->pc = 0x167064u;
    {
        const bool branch_taken_0x167064 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167064) {
            ctx->pc = 0x167068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167064u;
            // 0x167068: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1672C8u;
            goto label_1672c8;
        }
    }
    ctx->pc = 0x16706Cu;
    // 0x16706c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x16706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167070: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x167070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x167074: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x167074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167078: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x167078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x16707c: 0x24839a08  addiu       $v1, $a0, -0x65F8
    ctx->pc = 0x16707cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x167080: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167084: 0x8c55020c  lw          $s5, 0x20C($v0)
    ctx->pc = 0x167084u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x167088: 0x52a0008f  beql        $s5, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x167088u;
    {
        const bool branch_taken_0x167088 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x167088) {
            ctx->pc = 0x16708Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167088u;
            // 0x16708c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1672C8u;
            goto label_1672c8;
        }
    }
    ctx->pc = 0x167090u;
    // 0x167090: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x167090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x167094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167098: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x167098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16709c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1670a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1670A0u;
    {
        const bool branch_taken_0x1670a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1670a0) {
            ctx->pc = 0x1670A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1670A0u;
            // 0x1670a4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1670B0u;
            goto label_1670b0;
        }
    }
    ctx->pc = 0x1670A8u;
    // 0x1670a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1670A8u;
    {
        const bool branch_taken_0x1670a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1670ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670A8u;
        // 0x1670ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670a8) {
            ctx->pc = 0x1670B8u;
            goto label_1670b8;
        }
    }
    ctx->pc = 0x1670B0u;
label_1670b0:
    // 0x1670b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1670b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1670b4: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x1670b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1670b8:
    // 0x1670b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1670b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1670bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670c0: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1670C0u;
    SET_GPR_U32(ctx, 31, 0x1670C8u);
    ctx->pc = 0x1670C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670C0u;
    // 0x1670c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1670C0u, 0x1670C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670C8u;
label_1670c8:
    // 0x1670c8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1670c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1670cc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1670ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1670d0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1670d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1670d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1670d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1670d8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1670d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1670dc: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1670dcu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1670e0: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x1670e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x1670e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1670e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1670e8: 0x0  nop
    ctx->pc = 0x1670e8u;
    // NOP
    // 0x1670ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1670ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1670f0: 0x0  nop
    ctx->pc = 0x1670f0u;
    // NOP
    // 0x1670f4: 0x45010074  bc1t        . + 4 + (0x74 << 2)
    ctx->pc = 0x1670F4u;
    {
        const bool branch_taken_0x1670f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1670F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1670F4u;
        // 0x1670f8: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1670f4) {
            ctx->pc = 0x1672C8u;
            goto label_1672c8;
        }
    }
    ctx->pc = 0x1670FCu;
    // 0x1670fc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1670fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167100: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x167104: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x167108: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x167108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16710c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x16710cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167110: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x167110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x167114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x167114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167118: 0x8e3091c0  lw          $s0, -0x6E40($s1)
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3F91C0u));
    // 0x16711c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16711cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167120: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x167120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167124: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x167124u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x167128: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x167128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x16712c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x16712cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x167130: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x167130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167134: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x167134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x167138: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x167138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16713c: 0xae3e91c0  sw          $fp, -0x6E40($s1)
    ctx->pc = 0x16713cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939072), GPR_U32(ctx, 30));
    // 0x167140: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x167140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x167144: 0x8e8502e4  lw          $a1, 0x2E4($s4)
    ctx->pc = 0x167144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
    // 0x167148: 0xc041032  jal         func_1040C8
    ctx->pc = 0x167148u;
    SET_GPR_U32(ctx, 31, 0x167150u);
    ctx->pc = 0x16714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167148u;
    // 0x16714c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x167148u, 0x167150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167150u;
label_167150:
    // 0x167150: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x167150u;
    {
        const bool branch_taken_0x167150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167150u;
        // 0x167154: 0xae3091c0  sw          $s0, -0x6E40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294939072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167150) {
            ctx->pc = 0x167280u;
            goto label_167280;
        }
    }
    ctx->pc = 0x167158u;
    // 0x167158: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x167158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x16715c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16715cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167160: 0x0  nop
    ctx->pc = 0x167160u;
    // NOP
    // 0x167164: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x167164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167168: 0x0  nop
    ctx->pc = 0x167168u;
    // NOP
    // 0x16716c: 0x45010056  bc1t        . + 4 + (0x56 << 2)
    ctx->pc = 0x16716Cu;
    {
        const bool branch_taken_0x16716c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16716Cu;
        // 0x167170: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16716c) {
            ctx->pc = 0x1672C8u;
            goto label_1672c8;
        }
    }
    ctx->pc = 0x167174u;
    // 0x167174: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x167174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x167178: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x167178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16717c: 0x245602d8  addiu       $s6, $v0, 0x2D8
    ctx->pc = 0x16717cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x167180: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x167180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x167184: 0xafb60034  sw          $s6, 0x34($sp)
    ctx->pc = 0x167184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 22));
    // 0x167188: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x167188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x16718c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16718cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x167190: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x167190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x167194: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x167194u;
    SET_GPR_U32(ctx, 31, 0x16719Cu);
    ctx->pc = 0x167198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167194u;
    // 0x167198: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x167194u, 0x16719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16719Cu;
label_16719c:
    // 0x16719c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x16719cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1671a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1671a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671a4: 0xae7e0010  sw          $fp, 0x10($s3)
    ctx->pc = 0x1671a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 30));
    // 0x1671a8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1671A8u;
    SET_GPR_U32(ctx, 31, 0x1671B0u);
    ctx->pc = 0x1671ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671A8u;
    // 0x1671ac: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1671A8u, 0x1671B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671B0u;
label_1671b0:
    // 0x1671b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1671b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671b4: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x1671B4u;
    SET_GPR_U32(ctx, 31, 0x1671BCu);
    ctx->pc = 0x1671B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671B4u;
    // 0x1671b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x1671B4u, 0x1671BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671BCu;
label_1671bc:
    // 0x1671bc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1671bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1671c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1671c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1671c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1671c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1671cc: 0xc0406d4  jal         func_101B50
    ctx->pc = 0x1671CCu;
    SET_GPR_U32(ctx, 31, 0x1671D4u);
    ctx->pc = 0x1671D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671CCu;
    // 0x1671d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B50u, 0x1671CCu, 0x1671D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671D4u;
label_1671d4:
    // 0x1671d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1671d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1671d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1671dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671e0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1671e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1671e4: 0xc0411ac  jal         func_1046B0
    ctx->pc = 0x1671E4u;
    SET_GPR_U32(ctx, 31, 0x1671ECu);
    ctx->pc = 0x1671E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671E4u;
    // 0x1671e8: 0x24070023  addiu       $a3, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046B0u, 0x1671E4u, 0x1671ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671ECu;
label_1671ec:
    // 0x1671ec: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1671ECu;
    {
        const bool branch_taken_0x1671ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1671F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671ECu;
        // 0x1671f0: 0xafb60034  sw          $s6, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671ec) {
            ctx->pc = 0x16723Cu;
            goto label_16723c;
        }
    }
    ctx->pc = 0x1671F4u;
    // 0x1671f4: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1671f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1671f8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1671F8u;
    SET_GPR_U32(ctx, 31, 0x167200u);
    ctx->pc = 0x1671FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671F8u;
    // 0x1671fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1671F8u, 0x167200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167200u;
label_167200:
    // 0x167200: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x167200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x167204: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167204u;
    {
        const bool branch_taken_0x167204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167204u;
        // 0x167208: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167204) {
            ctx->pc = 0x167228u;
            goto label_167228;
        }
    }
    ctx->pc = 0x16720Cu;
    // 0x16720c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x16720cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_167210:
    // 0x167210: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x167210u;
    SET_GPR_U32(ctx, 31, 0x167218u);
    ctx->pc = 0x167214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167210u;
    // 0x167214: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x167210u, 0x167218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167218u;
label_167218:
    // 0x167218: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x167218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16721c: 0x0  nop
    ctx->pc = 0x16721cu;
    // NOP
    // 0x167220: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x167220u;
    {
        const bool branch_taken_0x167220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167220u;
        // 0x167224: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167220) {
            ctx->pc = 0x167210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167210;
        }
    }
    ctx->pc = 0x167228u;
label_167228:
    // 0x167228: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x167228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x16722c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x16722cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x167230: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x167230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x167234: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x167234u;
    {
        const bool branch_taken_0x167234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167234u;
        // 0x167238: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167234) {
            ctx->pc = 0x1672C4u;
            goto label_1672c4;
        }
    }
    ctx->pc = 0x16723Cu;
label_16723c:
    // 0x16723c: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x16723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x167240: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x167240u;
    SET_GPR_U32(ctx, 31, 0x167248u);
    ctx->pc = 0x167244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167240u;
    // 0x167244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x167240u, 0x167248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167248u;
label_167248:
    // 0x167248: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x167248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16724c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16724Cu;
    {
        const bool branch_taken_0x16724c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16724Cu;
        // 0x167250: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16724c) {
            ctx->pc = 0x167270u;
            goto label_167270;
        }
    }
    ctx->pc = 0x167254u;
    // 0x167254: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x167254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_167258:
    // 0x167258: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x167258u;
    SET_GPR_U32(ctx, 31, 0x167260u);
    ctx->pc = 0x16725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167258u;
    // 0x16725c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x167258u, 0x167260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167260u;
label_167260:
    // 0x167260: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x167264: 0x0  nop
    ctx->pc = 0x167264u;
    // NOP
    // 0x167268: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x167268u;
    {
        const bool branch_taken_0x167268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167268u;
        // 0x16726c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167268) {
            ctx->pc = 0x167258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167258;
        }
    }
    ctx->pc = 0x167270u;
label_167270:
    // 0x167270: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x167270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x167274: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x167274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x167278: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x167278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x16727c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x16727cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_167280:
    // 0x167280: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x167280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167284: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x167284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167288: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x167288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16728c: 0xc04f50e  jal         func_13D438
    ctx->pc = 0x16728Cu;
    SET_GPR_U32(ctx, 31, 0x167294u);
    ctx->pc = 0x167290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16728Cu;
    // 0x167290: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D438u, 0x16728Cu, 0x167294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167294u;
label_167294:
    // 0x167294: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x167294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x167298: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x167298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16729c: 0x24629a08  addiu       $v0, $v1, -0x65F8
    ctx->pc = 0x16729cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1672a0: 0x8e8702e0  lw          $a3, 0x2E0($s4)
    ctx->pc = 0x1672a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x1672a4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1672a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1672a8: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1672a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x1672ac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1672acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1672b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1672b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1672b4: 0xc04668a  jal         func_119A28
    ctx->pc = 0x1672B4u;
    SET_GPR_U32(ctx, 31, 0x1672BCu);
    ctx->pc = 0x1672B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1672B4u;
    // 0x1672b8: 0x8c460108  lw          $a2, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x1672B4u, 0x1672BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1672BCu;
label_1672bc:
    // 0x1672bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1672c0: 0xae8203b8  sw          $v0, 0x3B8($s4)
    ctx->pc = 0x1672c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 952), GPR_U32(ctx, 2));
label_1672c4:
    // 0x1672c4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1672c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1672c8:
    // 0x1672c8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1672c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1672cc: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1672ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1672d0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1672d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1672d4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1672d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1672d8: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1672d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1672dc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1672dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1672e0: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x1672e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1672e4: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1672e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1672e8: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1672e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1672ec: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1672ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1672f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1672F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672F0u;
        // 0x1672f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1672F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1672F8u;
}
