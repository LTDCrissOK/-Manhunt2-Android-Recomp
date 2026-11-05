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

// Function: sub_0012FDF0
// Address: 0x12fdf0 - 0x12feb0
void sub_0012FDF0_0x12fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FDF0_0x12fdf0");
#endif

    switch (ctx->pc) {
        case 0x12fe18u: goto label_12fe18;
        case 0x12fe30u: goto label_12fe30;
        case 0x12fe48u: goto label_12fe48;
        case 0x12fe68u: goto label_12fe68;
        case 0x12fe94u: goto label_12fe94;
        default: break;
    }

    ctx->pc = 0x12fdf0u;

    // 0x12fdf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fdf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fdf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12fdfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12fdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12fe00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12fe00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12fe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12fe08: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12fe0c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x12fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x12fe10: 0xc047866  jal         func_11E198
    ctx->pc = 0x12FE10u;
    SET_GPR_U32(ctx, 31, 0x12FE18u);
    ctx->pc = 0x12FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE10u;
    // 0x12fe14: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12FE10u, 0x12FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE18u;
label_12fe18:
    // 0x12fe18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12fe18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe1c: 0x8e040ff4  lw          $a0, 0xFF4($s0)
    ctx->pc = 0x12fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    // 0x12fe20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE20u;
    {
        const bool branch_taken_0x12fe20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE20u;
        // 0x12fe24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe20) {
            ctx->pc = 0x12FE30u;
            goto label_12fe30;
        }
    }
    ctx->pc = 0x12FE28u;
    // 0x12fe28: 0xc0619d2  jal         func_186748
    ctx->pc = 0x12FE28u;
    SET_GPR_U32(ctx, 31, 0x12FE30u);
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x12FE28u, 0x12FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE30u;
label_12fe30:
    // 0x12fe30: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12FE30u;
    {
        const bool branch_taken_0x12fe30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE30u;
        // 0x12fe34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe30) {
            ctx->pc = 0x12FE94u;
            goto label_12fe94;
        }
    }
    ctx->pc = 0x12FE38u;
    // 0x12fe38: 0x8e100ff0  lw          $s0, 0xFF0($s0)
    ctx->pc = 0x12fe38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
    // 0x12fe3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12fe3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe40: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x12FE40u;
    SET_GPR_U32(ctx, 31, 0x12FE48u);
    ctx->pc = 0x12FE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE40u;
    // 0x12fe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x12FE40u, 0x12FE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE48u;
label_12fe48:
    // 0x12fe48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE48u;
    {
        const bool branch_taken_0x12fe48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fe48) {
            ctx->pc = 0x12FE58u;
            goto label_12fe58;
        }
    }
    ctx->pc = 0x12FE50u;
    // 0x12fe50: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x12fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x12fe54: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x12fe54u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12fe58:
    // 0x12fe58: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x12FE58u;
    {
        const bool branch_taken_0x12fe58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE58u;
        // 0x12fe5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe58) {
            ctx->pc = 0x12FE94u;
            goto label_12fe94;
        }
    }
    ctx->pc = 0x12FE60u;
    // 0x12fe60: 0xc04bfc4  jal         func_12FF10
    ctx->pc = 0x12FE60u;
    SET_GPR_U32(ctx, 31, 0x12FE68u);
    ctx->pc = 0x12FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE60u;
    // 0x12fe64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF10u, 0x12FE60u, 0x12FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE68u;
label_12fe68:
    // 0x12fe68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FE68u;
    {
        const bool branch_taken_0x12fe68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE68u;
        // 0x12fe6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe68) {
            ctx->pc = 0x12FE80u;
            goto label_12fe80;
        }
    }
    ctx->pc = 0x12FE70u;
    // 0x12fe70: 0x240501a3  addiu       $a1, $zero, 0x1A3
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 419));
    // 0x12fe74: 0x8c87002c  lw          $a3, 0x2C($a0)
    ctx->pc = 0x12fe74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x12fe78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12FE78u;
    {
        const bool branch_taken_0x12fe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE78u;
        // 0x12fe7c: 0x240601a6  addiu       $a2, $zero, 0x1A6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe78) {
            ctx->pc = 0x12FE8Cu;
            goto label_12fe8c;
        }
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x240501a7  addiu       $a1, $zero, 0x1A7
    ctx->pc = 0x12fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
    // 0x12fe84: 0x8c87002c  lw          $a3, 0x2C($a0)
    ctx->pc = 0x12fe84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x12fe88: 0x240601a9  addiu       $a2, $zero, 0x1A9
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
label_12fe8c:
    // 0x12fe8c: 0xc04bf24  jal         func_12FC90
    ctx->pc = 0x12FE8Cu;
    SET_GPR_U32(ctx, 31, 0x12FE94u);
    ctx->pc = 0x12FC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FC90u, 0x12FE8Cu, 0x12FE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE94u;
label_12fe94:
    // 0x12fe94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fe94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fe98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12fe98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fe9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12fe9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fea0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12fea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fea4: 0x3e00008  jr          $ra
    ctx->pc = 0x12FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEA4u;
        // 0x12fea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FEACu;
    // 0x12feac: 0x0  nop
    ctx->pc = 0x12feacu;
    // NOP
    ctx->pc = 0x12feb0u;
}
