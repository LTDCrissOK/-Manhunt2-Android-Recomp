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

// Function: sub_00219F40
// Address: 0x219f40 - 0x219fd0
void sub_00219F40_0x219f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219F40_0x219f40");
#endif

    switch (ctx->pc) {
        case 0x219f70u: goto label_219f70;
        case 0x219f78u: goto label_219f78;
        default: break;
    }

    ctx->pc = 0x219f40u;

    // 0x219f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219f44: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x219f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x219f48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219f50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219f50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219f58: 0x24443540  addiu       $a0, $v0, 0x3540
    ctx->pc = 0x219f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
    // 0x219f5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219f60: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3544u));
    // 0x219f64: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x219f64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A354Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A354Cu, _value); } while (0);
    // 0x219f68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x219F84u;
            goto label_219f84;
        }
    }
    ctx->pc = 0x219F70u;
label_219f70:
    // 0x219f70: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x219F70u;
    SET_GPR_U32(ctx, 31, 0x219F78u);
    ctx->pc = 0x219F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219F70u;
    // 0x219f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x219F70u, 0x219F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F78u;
label_219f78:
    // 0x219f78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x219f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x219f7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x219F7Cu;
    {
        const bool branch_taken_0x219f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F7Cu;
        // 0x219f80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f7c) {
            ctx->pc = 0x219FB4u;
            goto label_219fb4;
        }
    }
    ctx->pc = 0x219F84u;
label_219f84:
    // 0x219f84: 0x26233540  addiu       $v1, $s1, 0x3540
    ctx->pc = 0x219f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 13632));
    // 0x219f88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x219f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x219f8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x219F8Cu;
    {
        const bool branch_taken_0x219f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F8Cu;
        // 0x219f90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f8c) {
            ctx->pc = 0x219F98u;
            goto label_219f98;
        }
    }
    ctx->pc = 0x219F94u;
    // 0x219f94: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x219f94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219f98:
    // 0x219f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219F98u;
    {
        const bool branch_taken_0x219f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219f98) {
            ctx->pc = 0x219FA8u;
            goto label_219fa8;
        }
    }
    ctx->pc = 0x219FA0u;
    // 0x219fa0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x219fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x219fa4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x219fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_219fa8:
    // 0x219fa8: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x219FA8u;
    {
        const bool branch_taken_0x219fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x219FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FA8u;
        // 0x219fac: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fa8) {
            ctx->pc = 0x219F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219f70;
        }
    }
    ctx->pc = 0x219FB0u;
    // 0x219fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219fb4:
    // 0x219fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219fbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219fc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x219fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x219FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FC4u;
        // 0x219fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219FCCu;
    // 0x219fcc: 0x0  nop
    ctx->pc = 0x219fccu;
    // NOP
    ctx->pc = 0x219fd0u;
}
