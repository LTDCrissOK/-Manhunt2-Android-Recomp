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

// Function: sub_003ACA48
// Address: 0x3aca48 - 0x3acaf0
void sub_003ACA48_0x3aca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACA48_0x3aca48");
#endif

    switch (ctx->pc) {
        case 0x3aca48u: goto label_3aca48;
        case 0x3aca4cu: goto label_3aca4c;
        case 0x3aca50u: goto label_3aca50;
        case 0x3aca54u: goto label_3aca54;
        case 0x3aca58u: goto label_3aca58;
        case 0x3aca5cu: goto label_3aca5c;
        case 0x3aca60u: goto label_3aca60;
        case 0x3aca64u: goto label_3aca64;
        case 0x3aca68u: goto label_3aca68;
        case 0x3aca6cu: goto label_3aca6c;
        case 0x3aca70u: goto label_3aca70;
        case 0x3aca74u: goto label_3aca74;
        case 0x3aca78u: goto label_3aca78;
        case 0x3aca7cu: goto label_3aca7c;
        case 0x3aca80u: goto label_3aca80;
        case 0x3aca84u: goto label_3aca84;
        case 0x3aca88u: goto label_3aca88;
        case 0x3aca8cu: goto label_3aca8c;
        case 0x3aca90u: goto label_3aca90;
        case 0x3aca94u: goto label_3aca94;
        case 0x3aca98u: goto label_3aca98;
        case 0x3aca9cu: goto label_3aca9c;
        case 0x3acaa0u: goto label_3acaa0;
        case 0x3acaa4u: goto label_3acaa4;
        case 0x3acaa8u: goto label_3acaa8;
        case 0x3acaacu: goto label_3acaac;
        case 0x3acab0u: goto label_3acab0;
        case 0x3acab4u: goto label_3acab4;
        case 0x3acab8u: goto label_3acab8;
        case 0x3acabcu: goto label_3acabc;
        case 0x3acac0u: goto label_3acac0;
        case 0x3acac4u: goto label_3acac4;
        case 0x3acac8u: goto label_3acac8;
        case 0x3acaccu: goto label_3acacc;
        case 0x3acad0u: goto label_3acad0;
        case 0x3acad4u: goto label_3acad4;
        case 0x3acad8u: goto label_3acad8;
        case 0x3acadcu: goto label_3acadc;
        case 0x3acae0u: goto label_3acae0;
        case 0x3acae4u: goto label_3acae4;
        case 0x3acae8u: goto label_3acae8;
        case 0x3acaecu: goto label_3acaec;
        default: break;
    }

    ctx->pc = 0x3aca48u;

label_3aca48:
    // 0x3aca48: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3aca48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3aca4c:
    // 0x3aca4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3aca50:
    // 0x3aca50: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3aca50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
label_3aca54:
    // 0x3aca54: 0x26103350  addiu       $s0, $s0, 0x3350
    ctx->pc = 0x3aca54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13136));
label_3aca58:
    // 0x3aca58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3aca5c:
    // 0x3aca5c: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x3aca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_3aca60:
    // 0x3aca60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3aca60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aca64:
    // 0x3aca64: 0xffa60050  sd          $a2, 0x50($sp)
    ctx->pc = 0x3aca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 6));
label_3aca68:
    // 0x3aca68: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3aca68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3aca6c:
    // 0x3aca6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3aca6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aca70:
    // 0x3aca70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aca74:
    // 0x3aca74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3aca78:
    // 0x3aca78: 0xffa70058  sd          $a3, 0x58($sp)
    ctx->pc = 0x3aca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 7));
label_3aca7c:
    // 0x3aca7c: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x3aca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
label_3aca80:
    // 0x3aca80: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x3aca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
label_3aca84:
    // 0x3aca84: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x3aca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
label_3aca88:
    // 0x3aca88: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x3aca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
label_3aca8c:
    // 0x3aca8c: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x3aca8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3aca90:
    // 0x3aca90: 0xe7ad002c  swc1        $f13, 0x2C($sp)
    ctx->pc = 0x3aca90u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3aca94:
    // 0x3aca94: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x3aca94u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3aca98:
    // 0x3aca98: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x3aca98u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3aca9c:
    // 0x3aca9c: 0xe7b00038  swc1        $f16, 0x38($sp)
    ctx->pc = 0x3aca9cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3acaa0:
    // 0x3acaa0: 0xe7b1003c  swc1        $f17, 0x3C($sp)
    ctx->pc = 0x3acaa0u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3acaa4:
    // 0x3acaa4: 0xe7b20040  swc1        $f18, 0x40($sp)
    ctx->pc = 0x3acaa4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3acaa8:
    // 0x3acaa8: 0xc0efab3  jal         func_3BEACC
label_3acaac:
    if (ctx->pc == 0x3ACAACu) {
        ctx->pc = 0x3ACAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAA8u;
        // 0x3acaac: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAB0u;
        goto label_3acab0;
    }
    ctx->pc = 0x3ACAA8u;
    SET_GPR_U32(ctx, 31, 0x3ACAB0u);
    ctx->pc = 0x3ACAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAA8u;
    // 0x3acaac: 0xe7b30044  swc1        $f19, 0x44($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3ACAA8u, 0x3ACAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAB0u;
label_3acab0:
    // 0x3acab0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x3acab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_3acab4:
    // 0x3acab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3acab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3acab8:
    // 0x3acab8: 0xc0f0242  jal         func_3C0908
label_3acabc:
    if (ctx->pc == 0x3ACABCu) {
        ctx->pc = 0x3ACABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAB8u;
        // 0x3acabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAC0u;
        goto label_3acac0;
    }
    ctx->pc = 0x3ACAB8u;
    SET_GPR_U32(ctx, 31, 0x3ACAC0u);
    ctx->pc = 0x3ACABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAB8u;
    // 0x3acabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0908u, 0x3ACAB8u, 0x3ACAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAC0u;
label_3acac0:
    // 0x3acac0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3acac4:
    // 0x3acac4: 0x244291b0  addiu       $v0, $v0, -0x6E50
    ctx->pc = 0x3acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939056));
label_3acac8:
    // 0x3acac8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3acac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3acacc:
    // 0x3acacc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3acad0:
    if (ctx->pc == 0x3ACAD0u) {
        ctx->pc = 0x3ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACACCu;
        // 0x3acad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAD4u;
        goto label_3acad4;
    }
    ctx->pc = 0x3ACACCu;
    {
        const bool branch_taken_0x3acacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACACCu;
        // 0x3acad0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acacc) {
            ctx->pc = 0x3ACADCu;
            goto label_3acadc;
        }
    }
    ctx->pc = 0x3ACAD4u;
label_3acad4:
    // 0x3acad4: 0x60f809  jalr        $v1
label_3acad8:
    if (ctx->pc == 0x3ACAD8u) {
        ctx->pc = 0x3ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAD4u;
        // 0x3acad8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACADCu;
        goto label_3acadc;
    }
    ctx->pc = 0x3ACAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3ACADCu);
        ctx->pc = 0x3ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAD4u;
        // 0x3acad8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACAD4u, 0x3ACADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACADCu;
label_3acadc:
    // 0x3acadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3acadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3acae0:
    // 0x3acae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3acae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3acae4:
    // 0x3acae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3acae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3acae8:
    // 0x3acae8: 0x3e00008  jr          $ra
label_3acaec:
    if (ctx->pc == 0x3ACAECu) {
        ctx->pc = 0x3ACAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAE8u;
        // 0x3acaec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAF0u;
        goto label_fallthrough_0x3acae8;
    }
    ctx->pc = 0x3ACAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAE8u;
        // 0x3acaec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3acae8:
    ctx->pc = 0x3ACAF0u;
}
