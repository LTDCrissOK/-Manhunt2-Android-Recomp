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

// Function: sub_00386DE8
// Address: 0x386de8 - 0x386e78
void sub_00386DE8_0x386de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386DE8_0x386de8");
#endif

    switch (ctx->pc) {
        case 0x386e28u: goto label_386e28;
        case 0x386e54u: goto label_386e54;
        default: break;
    }

    ctx->pc = 0x386de8u;

    // 0x386de8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x386de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x386dec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x386decu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x386df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x386df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x386df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x386df8: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x386DF8u;
    {
        const bool branch_taken_0x386df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x386DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386DF8u;
        // 0x386dfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386df8) {
            ctx->pc = 0x386E54u;
            goto label_386e54;
        }
    }
    ctx->pc = 0x386E00u;
    // 0x386e00: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x386e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x386e04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x386e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x386e08: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x386E08u;
    {
        const bool branch_taken_0x386e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x386E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E08u;
        // 0x386e0c: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e08) {
            ctx->pc = 0x386E30u;
            goto label_386e30;
        }
    }
    ctx->pc = 0x386E10u;
    // 0x386e10: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x386E10u;
    {
        const bool branch_taken_0x386e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x386e10) {
            ctx->pc = 0x386E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386E10u;
            // 0x386e14: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386E1Cu;
            goto label_386e1c;
        }
    }
    ctx->pc = 0x386E18u;
    // 0x386e18: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x386e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_386e1c:
    // 0x386e1c: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x386e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x386e20: 0xc0e1992  jal         func_386648
    ctx->pc = 0x386E20u;
    SET_GPR_U32(ctx, 31, 0x386E28u);
    ctx->pc = 0x386E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E20u;
    // 0x386e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386648u, 0x386E20u, 0x386E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E28u;
label_386e28:
    // 0x386e28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386E28u;
    {
        const bool branch_taken_0x386e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E28u;
        // 0x386e2c: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e28) {
            ctx->pc = 0x386E58u;
            goto label_386e58;
        }
    }
    ctx->pc = 0x386E30u;
label_386e30:
    // 0x386e30: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x386E30u;
    {
        const bool branch_taken_0x386e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x386e30) {
            ctx->pc = 0x386E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386E30u;
            // 0x386e34: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386E44u;
            goto label_386e44;
        }
    }
    ctx->pc = 0x386E38u;
    // 0x386e38: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x386e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x386e3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x386E3Cu;
    {
        const bool branch_taken_0x386e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E3Cu;
        // 0x386e40: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e3c) {
            ctx->pc = 0x386E48u;
            goto label_386e48;
        }
    }
    ctx->pc = 0x386E44u;
label_386e44:
    // 0x386e44: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x386e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_386e48:
    // 0x386e48: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x386e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x386e4c: 0xc0e1a42  jal         func_386908
    ctx->pc = 0x386E4Cu;
    SET_GPR_U32(ctx, 31, 0x386E54u);
    ctx->pc = 0x386E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386E4Cu;
    // 0x386e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386908u, 0x386E4Cu, 0x386E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386E54u;
label_386e54:
    // 0x386e54: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x386e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_386e58:
    // 0x386e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386e5c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x386E5Cu;
    {
        const bool branch_taken_0x386e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E5Cu;
        // 0x386e60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e5c) {
            ctx->pc = 0x386E6Cu;
            goto label_386e6c;
        }
    }
    ctx->pc = 0x386E64u;
    // 0x386e64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386e68: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x386e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_386e6c:
    // 0x386e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x386e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386e70: 0x3e00008  jr          $ra
    ctx->pc = 0x386E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386E70u;
        // 0x386e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386E78u;
}
