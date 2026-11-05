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

// Function: sub_00253F38
// Address: 0x253f38 - 0x253fa8
void sub_00253F38_0x253f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253F38_0x253f38");
#endif

    switch (ctx->pc) {
        case 0x253f68u: goto label_253f68;
        case 0x253f88u: goto label_253f88;
        default: break;
    }

    ctx->pc = 0x253f38u;

    // 0x253f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253f40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253f4c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253f50: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253f54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x253F54u;
    {
        const bool branch_taken_0x253f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F54u;
        // 0x253f58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f54) {
            ctx->pc = 0x253F90u;
            goto label_253f90;
        }
    }
    ctx->pc = 0x253F5Cu;
    // 0x253f5c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x253f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x253f60: 0xc0944da  jal         func_251368
    ctx->pc = 0x253F60u;
    SET_GPR_U32(ctx, 31, 0x253F68u);
    ctx->pc = 0x253F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F60u;
    // 0x253f64: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x253F60u, 0x253F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F68u;
label_253f68:
    // 0x253f68: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x253f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253f70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x253f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f78: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x253f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x253f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x253f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253f80: 0xc061dba  jal         func_1876E8
    ctx->pc = 0x253F80u;
    SET_GPR_U32(ctx, 31, 0x253F88u);
    ctx->pc = 0x253F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F80u;
    // 0x253f84: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876E8u, 0x253F80u, 0x253F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253F88u;
label_253f88:
    // 0x253f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253F88u;
    {
        const bool branch_taken_0x253f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F88u;
        // 0x253f8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f88) {
            ctx->pc = 0x253F94u;
            goto label_253f94;
        }
    }
    ctx->pc = 0x253F90u;
label_253f90:
    // 0x253f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x253f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253f94:
    // 0x253f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x253f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x253FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FA0u;
        // 0x253fa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253FA8u;
}
