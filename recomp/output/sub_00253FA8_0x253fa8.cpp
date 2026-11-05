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

// Function: sub_00253FA8
// Address: 0x253fa8 - 0x254018
void sub_00253FA8_0x253fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253FA8_0x253fa8");
#endif

    switch (ctx->pc) {
        case 0x253fd8u: goto label_253fd8;
        case 0x253ff8u: goto label_253ff8;
        default: break;
    }

    ctx->pc = 0x253fa8u;

    // 0x253fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x253fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x253fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253fb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x253fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253fb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x253fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x253fbc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253fc0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253fc4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x253FC4u;
    {
        const bool branch_taken_0x253fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x253FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FC4u;
        // 0x253fc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fc4) {
            ctx->pc = 0x254000u;
            goto label_254000;
        }
    }
    ctx->pc = 0x253FCCu;
    // 0x253fcc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x253fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x253fd0: 0xc0944da  jal         func_251368
    ctx->pc = 0x253FD0u;
    SET_GPR_U32(ctx, 31, 0x253FD8u);
    ctx->pc = 0x253FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FD0u;
    // 0x253fd4: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x253FD0u, 0x253FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FD8u;
label_253fd8:
    // 0x253fd8: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x253fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253fe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x253fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253fe8: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x253fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x253fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x253fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ff0: 0xc061dba  jal         func_1876E8
    ctx->pc = 0x253FF0u;
    SET_GPR_U32(ctx, 31, 0x253FF8u);
    ctx->pc = 0x253FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253FF0u;
    // 0x253ff4: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1876E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876E8u, 0x253FF0u, 0x253FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253FF8u;
label_253ff8:
    // 0x253ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x253FF8u;
    {
        const bool branch_taken_0x253ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253FF8u;
        // 0x253ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ff8) {
            ctx->pc = 0x254004u;
            goto label_254004;
        }
    }
    ctx->pc = 0x254000u;
label_254000:
    // 0x254000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254004:
    // 0x254004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x254004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x254008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25400c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25400cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254010: 0x3e00008  jr          $ra
    ctx->pc = 0x254010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254010u;
        // 0x254014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254018u;
}
