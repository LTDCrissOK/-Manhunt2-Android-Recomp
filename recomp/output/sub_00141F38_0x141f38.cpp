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

// Function: sub_00141F38
// Address: 0x141f38 - 0x141fb8
void sub_00141F38_0x141f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141F38_0x141f38");
#endif

    switch (ctx->pc) {
        case 0x141f78u: goto label_141f78;
        case 0x141f8cu: goto label_141f8c;
        default: break;
    }

    ctx->pc = 0x141f38u;

    // 0x141f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141f40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x141f4c: 0x8e020c08  lw          $v0, 0xC08($s0)
    ctx->pc = 0x141f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3080)));
    // 0x141f50: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x141F50u;
    {
        const bool branch_taken_0x141f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F50u;
        // 0x141f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f50) {
            ctx->pc = 0x141FA0u;
            goto label_141fa0;
        }
    }
    ctx->pc = 0x141F58u;
    // 0x141f58: 0x8e020c10  lw          $v0, 0xC10($s0)
    ctx->pc = 0x141f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3088)));
    // 0x141f5c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x141F5Cu;
    {
        const bool branch_taken_0x141f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F5Cu;
        // 0x141f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f5c) {
            ctx->pc = 0x141FA0u;
            goto label_141fa0;
        }
    }
    ctx->pc = 0x141F64u;
    // 0x141f64: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x141f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x141f68: 0x8e050c0c  lw          $a1, 0xC0C($s0)
    ctx->pc = 0x141f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3084)));
    // 0x141f6c: 0x2451b530  addiu       $s1, $v0, -0x4AD0
    ctx->pc = 0x141f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x141f70: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x141F70u;
    SET_GPR_U32(ctx, 31, 0x141F78u);
    ctx->pc = 0x141F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F70u;
    // 0x141f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x141F70u, 0x141F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F78u;
label_141f78:
    // 0x141f78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141F78u;
    {
        const bool branch_taken_0x141f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141F78u;
        // 0x141f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141f78) {
            ctx->pc = 0x141FA0u;
            goto label_141fa0;
        }
    }
    ctx->pc = 0x141F80u;
    // 0x141f80: 0x8e050c0c  lw          $a1, 0xC0C($s0)
    ctx->pc = 0x141f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3084)));
    // 0x141f84: 0xc04b2c0  jal         func_12CB00
    ctx->pc = 0x141F84u;
    SET_GPR_U32(ctx, 31, 0x141F8Cu);
    ctx->pc = 0x141F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141F84u;
    // 0x141f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB00u, 0x141F84u, 0x141F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141F8Cu;
label_141f8c:
    // 0x141f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141f90: 0xae000c0c  sw          $zero, 0xC0C($s0)
    ctx->pc = 0x141f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3084), GPR_U32(ctx, 0));
    // 0x141f94: 0xae020c10  sw          $v0, 0xC10($s0)
    ctx->pc = 0x141f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3088), GPR_U32(ctx, 2));
    // 0x141f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141f9c: 0xae000c08  sw          $zero, 0xC08($s0)
    ctx->pc = 0x141f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3080), GPR_U32(ctx, 0));
label_141fa0:
    // 0x141fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x141fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141fac: 0x3e00008  jr          $ra
    ctx->pc = 0x141FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FACu;
        // 0x141fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141FB4u;
    // 0x141fb4: 0x0  nop
    ctx->pc = 0x141fb4u;
    // NOP
    ctx->pc = 0x141fb8u;
}
