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

// Function: sub_003EABD0
// Address: 0x3eabd0 - 0x3ead08
void sub_003EABD0_0x3eabd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EABD0_0x3eabd0");
#endif

    switch (ctx->pc) {
        case 0x3eabd0u: goto label_3eabd0;
        case 0x3eabd4u: goto label_3eabd4;
        case 0x3eabd8u: goto label_3eabd8;
        case 0x3eabdcu: goto label_3eabdc;
        case 0x3eabe0u: goto label_3eabe0;
        case 0x3eabe4u: goto label_3eabe4;
        case 0x3eabe8u: goto label_3eabe8;
        case 0x3eabecu: goto label_3eabec;
        case 0x3eabf0u: goto label_3eabf0;
        case 0x3eabf4u: goto label_3eabf4;
        case 0x3eabf8u: goto label_3eabf8;
        case 0x3eabfcu: goto label_3eabfc;
        case 0x3eac00u: goto label_3eac00;
        case 0x3eac04u: goto label_3eac04;
        case 0x3eac08u: goto label_3eac08;
        case 0x3eac0cu: goto label_3eac0c;
        case 0x3eac10u: goto label_3eac10;
        case 0x3eac14u: goto label_3eac14;
        case 0x3eac18u: goto label_3eac18;
        case 0x3eac1cu: goto label_3eac1c;
        case 0x3eac20u: goto label_3eac20;
        case 0x3eac24u: goto label_3eac24;
        case 0x3eac28u: goto label_3eac28;
        case 0x3eac2cu: goto label_3eac2c;
        case 0x3eac30u: goto label_3eac30;
        case 0x3eac34u: goto label_3eac34;
        case 0x3eac38u: goto label_3eac38;
        case 0x3eac3cu: goto label_3eac3c;
        case 0x3eac40u: goto label_3eac40;
        case 0x3eac44u: goto label_3eac44;
        case 0x3eac48u: goto label_3eac48;
        case 0x3eac4cu: goto label_3eac4c;
        case 0x3eac50u: goto label_3eac50;
        case 0x3eac54u: goto label_3eac54;
        case 0x3eac58u: goto label_3eac58;
        case 0x3eac5cu: goto label_3eac5c;
        case 0x3eac60u: goto label_3eac60;
        case 0x3eac64u: goto label_3eac64;
        case 0x3eac68u: goto label_3eac68;
        case 0x3eac6cu: goto label_3eac6c;
        case 0x3eac70u: goto label_3eac70;
        case 0x3eac74u: goto label_3eac74;
        case 0x3eac78u: goto label_3eac78;
        case 0x3eac7cu: goto label_3eac7c;
        case 0x3eac80u: goto label_3eac80;
        case 0x3eac84u: goto label_3eac84;
        case 0x3eac88u: goto label_3eac88;
        case 0x3eac8cu: goto label_3eac8c;
        case 0x3eac90u: goto label_3eac90;
        case 0x3eac94u: goto label_3eac94;
        case 0x3eac98u: goto label_3eac98;
        case 0x3eac9cu: goto label_3eac9c;
        case 0x3eaca0u: goto label_3eaca0;
        case 0x3eaca4u: goto label_3eaca4;
        case 0x3eaca8u: goto label_3eaca8;
        case 0x3eacacu: goto label_3eacac;
        case 0x3eacb0u: goto label_3eacb0;
        case 0x3eacb4u: goto label_3eacb4;
        case 0x3eacb8u: goto label_3eacb8;
        case 0x3eacbcu: goto label_3eacbc;
        case 0x3eacc0u: goto label_3eacc0;
        case 0x3eacc4u: goto label_3eacc4;
        case 0x3eacc8u: goto label_3eacc8;
        case 0x3eacccu: goto label_3eaccc;
        case 0x3eacd0u: goto label_3eacd0;
        case 0x3eacd4u: goto label_3eacd4;
        case 0x3eacd8u: goto label_3eacd8;
        case 0x3eacdcu: goto label_3eacdc;
        case 0x3eace0u: goto label_3eace0;
        case 0x3eace4u: goto label_3eace4;
        case 0x3eace8u: goto label_3eace8;
        case 0x3eacecu: goto label_3eacec;
        case 0x3eacf0u: goto label_3eacf0;
        case 0x3eacf4u: goto label_3eacf4;
        case 0x3eacf8u: goto label_3eacf8;
        case 0x3eacfcu: goto label_3eacfc;
        case 0x3ead00u: goto label_3ead00;
        case 0x3ead04u: goto label_3ead04;
        default: break;
    }

    ctx->pc = 0x3eabd0u;

label_3eabd0:
    // 0x3eabd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eabd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eabd4:
    // 0x3eabd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eabd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eabd8:
    // 0x3eabd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eabd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eabdc:
    // 0x3eabdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eabdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eabe0:
    // 0x3eabe0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eabe4:
    // 0x3eabe4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eabe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eabe8:
    // 0x3eabe8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eabec:
    // 0x3eabec: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eabf0:
    if (ctx->pc == 0x3EABF0u) {
        ctx->pc = 0x3EABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABECu;
        // 0x3eabf0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EABF4u;
        goto label_3eabf4;
    }
    ctx->pc = 0x3EABECu;
    {
        const bool branch_taken_0x3eabec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABECu;
        // 0x3eabf0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eabec) {
            ctx->pc = 0x3EAC6Cu;
            goto label_3eac6c;
        }
    }
    ctx->pc = 0x3EABF4u;
label_3eabf4:
    // 0x3eabf4: 0x0  nop
    ctx->pc = 0x3eabf4u;
    // NOP
label_3eabf8:
    // 0x3eabf8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eabfc:
    // 0x3eabfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eac00:
    // 0x3eac00: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eac04:
    if (ctx->pc == 0x3EAC04u) {
        ctx->pc = 0x3EAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC00u;
        // 0x3eac04: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC08u;
        goto label_3eac08;
    }
    ctx->pc = 0x3EAC00u;
    {
        const bool branch_taken_0x3eac00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eac00) {
            ctx->pc = 0x3EAC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAC00u;
            // 0x3eac04: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAC5Cu;
            goto label_3eac5c;
        }
    }
    ctx->pc = 0x3EAC08u;
label_3eac08:
    // 0x3eac08: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eac0c:
    // 0x3eac0c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eac0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eac10:
    // 0x3eac10: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eac14:
    // 0x3eac14: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eac18:
    if (ctx->pc == 0x3EAC18u) {
        ctx->pc = 0x3EAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC14u;
        // 0x3eac18: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC1Cu;
        goto label_3eac1c;
    }
    ctx->pc = 0x3EAC14u;
    {
        const bool branch_taken_0x3eac14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eac14) {
            ctx->pc = 0x3EAC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAC14u;
            // 0x3eac18: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAC48u;
            goto label_3eac48;
        }
    }
    ctx->pc = 0x3EAC1Cu;
label_3eac1c:
    // 0x3eac1c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eac20:
    // 0x3eac20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eac20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eac24:
    // 0x3eac24: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eac28:
    // 0x3eac28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eac2c:
    // 0x3eac2c: 0x40f809  jalr        $v0
label_3eac30:
    if (ctx->pc == 0x3EAC30u) {
        ctx->pc = 0x3EAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC2Cu;
        // 0x3eac30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC34u;
        goto label_3eac34;
    }
    ctx->pc = 0x3EAC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAC34u);
        ctx->pc = 0x3EAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC2Cu;
        // 0x3eac30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAC2Cu, 0x3EAC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAC34u;
label_3eac34:
    // 0x3eac34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eac38:
    // 0x3eac38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eac3c:
    // 0x3eac3c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eac40:
    if (ctx->pc == 0x3EAC40u) {
        ctx->pc = 0x3EAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC3Cu;
        // 0x3eac40: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC44u;
        goto label_3eac44;
    }
    ctx->pc = 0x3EAC3Cu;
    {
        const bool branch_taken_0x3eac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC3Cu;
        // 0x3eac40: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac3c) {
            ctx->pc = 0x3EAC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eac20;
        }
    }
    ctx->pc = 0x3EAC44u;
label_3eac44:
    // 0x3eac44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eac48:
    // 0x3eac48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eac4c:
    // 0x3eac4c: 0xc0f528a  jal         func_3D4A28
label_3eac50:
    if (ctx->pc == 0x3EAC50u) {
        ctx->pc = 0x3EAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC4Cu;
        // 0x3eac50: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC54u;
        goto label_3eac54;
    }
    ctx->pc = 0x3EAC4Cu;
    SET_GPR_U32(ctx, 31, 0x3EAC54u);
    ctx->pc = 0x3EAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC4Cu;
    // 0x3eac50: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAC4Cu, 0x3EAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC54u;
label_3eac54:
    // 0x3eac54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eac58:
    // 0x3eac58: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eac58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eac5c:
    // 0x3eac5c: 0xc0f5222  jal         func_3D4888
label_3eac60:
    if (ctx->pc == 0x3EAC60u) {
        ctx->pc = 0x3EAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC5Cu;
        // 0x3eac60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC64u;
        goto label_3eac64;
    }
    ctx->pc = 0x3EAC5Cu;
    SET_GPR_U32(ctx, 31, 0x3EAC64u);
    ctx->pc = 0x3EAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC5Cu;
    // 0x3eac60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EAC5Cu, 0x3EAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC64u;
label_3eac64:
    // 0x3eac64: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eac68:
    if (ctx->pc == 0x3EAC68u) {
        ctx->pc = 0x3EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC64u;
        // 0x3eac68: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC6Cu;
        goto label_3eac6c;
    }
    ctx->pc = 0x3EAC64u;
    {
        const bool branch_taken_0x3eac64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC64u;
        // 0x3eac68: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac64) {
            ctx->pc = 0x3EABF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eabf8;
        }
    }
    ctx->pc = 0x3EAC6Cu;
label_3eac6c:
    // 0x3eac6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eac70:
    // 0x3eac70: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eac74:
    if (ctx->pc == 0x3EAC74u) {
        ctx->pc = 0x3EAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC70u;
        // 0x3eac74: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC78u;
        goto label_3eac78;
    }
    ctx->pc = 0x3EAC70u;
    {
        const bool branch_taken_0x3eac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC70u;
        // 0x3eac74: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac70) {
            ctx->pc = 0x3EACECu;
            goto label_3eacec;
        }
    }
    ctx->pc = 0x3EAC78u;
label_3eac78:
    // 0x3eac78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eac7c:
    // 0x3eac7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eac80:
    // 0x3eac80: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eac84:
    if (ctx->pc == 0x3EAC84u) {
        ctx->pc = 0x3EAC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC80u;
        // 0x3eac84: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC88u;
        goto label_3eac88;
    }
    ctx->pc = 0x3EAC80u;
    {
        const bool branch_taken_0x3eac80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eac80) {
            ctx->pc = 0x3EAC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAC80u;
            // 0x3eac84: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EACDCu;
            goto label_3eacdc;
        }
    }
    ctx->pc = 0x3EAC88u;
label_3eac88:
    // 0x3eac88: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eac8c:
    // 0x3eac8c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eac8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eac90:
    // 0x3eac90: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eac90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eac94:
    // 0x3eac94: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eac98:
    if (ctx->pc == 0x3EAC98u) {
        ctx->pc = 0x3EAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC94u;
        // 0x3eac98: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC9Cu;
        goto label_3eac9c;
    }
    ctx->pc = 0x3EAC94u;
    {
        const bool branch_taken_0x3eac94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eac94) {
            ctx->pc = 0x3EAC98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAC94u;
            // 0x3eac98: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EACC8u;
            goto label_3eacc8;
        }
    }
    ctx->pc = 0x3EAC9Cu;
label_3eac9c:
    // 0x3eac9c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eaca0:
    // 0x3eaca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eaca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eaca4:
    // 0x3eaca4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eaca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eaca8:
    // 0x3eaca8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eaca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eacac:
    // 0x3eacac: 0x40f809  jalr        $v0
label_3eacb0:
    if (ctx->pc == 0x3EACB0u) {
        ctx->pc = 0x3EACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACACu;
        // 0x3eacb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EACB4u;
        goto label_3eacb4;
    }
    ctx->pc = 0x3EACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EACB4u);
        ctx->pc = 0x3EACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACACu;
        // 0x3eacb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EACACu, 0x3EACB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EACB4u;
label_3eacb4:
    // 0x3eacb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eacb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eacb8:
    // 0x3eacb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eacbc:
    // 0x3eacbc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eacc0:
    if (ctx->pc == 0x3EACC0u) {
        ctx->pc = 0x3EACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACBCu;
        // 0x3eacc0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EACC4u;
        goto label_3eacc4;
    }
    ctx->pc = 0x3EACBCu;
    {
        const bool branch_taken_0x3eacbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACBCu;
        // 0x3eacc0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eacbc) {
            ctx->pc = 0x3EACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaca0;
        }
    }
    ctx->pc = 0x3EACC4u;
label_3eacc4:
    // 0x3eacc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eacc8:
    // 0x3eacc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eacc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaccc:
    // 0x3eaccc: 0xc0f528a  jal         func_3D4A28
label_3eacd0:
    if (ctx->pc == 0x3EACD0u) {
        ctx->pc = 0x3EACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACCCu;
        // 0x3eacd0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EACD4u;
        goto label_3eacd4;
    }
    ctx->pc = 0x3EACCCu;
    SET_GPR_U32(ctx, 31, 0x3EACD4u);
    ctx->pc = 0x3EACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EACCCu;
    // 0x3eacd0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EACCCu, 0x3EACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EACD4u;
label_3eacd4:
    // 0x3eacd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eacd8:
    // 0x3eacd8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eacd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eacdc:
    // 0x3eacdc: 0xc0f5222  jal         func_3D4888
label_3eace0:
    if (ctx->pc == 0x3EACE0u) {
        ctx->pc = 0x3EACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACDCu;
        // 0x3eace0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EACE4u;
        goto label_3eace4;
    }
    ctx->pc = 0x3EACDCu;
    SET_GPR_U32(ctx, 31, 0x3EACE4u);
    ctx->pc = 0x3EACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EACDCu;
    // 0x3eace0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EACDCu, 0x3EACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EACE4u;
label_3eace4:
    // 0x3eace4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eace8:
    if (ctx->pc == 0x3EACE8u) {
        ctx->pc = 0x3EACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACE4u;
        // 0x3eace8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EACECu;
        goto label_3eacec;
    }
    ctx->pc = 0x3EACE4u;
    {
        const bool branch_taken_0x3eace4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EACE4u;
        // 0x3eace8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eace4) {
            ctx->pc = 0x3EAC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eac78;
        }
    }
    ctx->pc = 0x3EACECu;
label_3eacec:
    // 0x3eacec: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eacecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eacf0:
    // 0x3eacf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eacf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eacf4:
    // 0x3eacf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eacf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eacf8:
    // 0x3eacf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eacf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eacfc:
    // 0x3eacfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eacfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ead00:
    // 0x3ead00: 0x3e00008  jr          $ra
label_3ead04:
    if (ctx->pc == 0x3EAD04u) {
        ctx->pc = 0x3EAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD00u;
        // 0x3ead04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAD08u;
        goto label_fallthrough_0x3ead00;
    }
    ctx->pc = 0x3EAD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD00u;
        // 0x3ead04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ead00:
    ctx->pc = 0x3EAD08u;
}
