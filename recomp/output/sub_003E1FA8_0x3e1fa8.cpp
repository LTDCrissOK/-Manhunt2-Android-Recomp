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

// Function: sub_003E1FA8
// Address: 0x3e1fa8 - 0x3e2018
void sub_003E1FA8_0x3e1fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1FA8_0x3e1fa8");
#endif

    switch (ctx->pc) {
        case 0x3e1fd8u: goto label_3e1fd8;
        case 0x3e1fe4u: goto label_3e1fe4;
        case 0x3e1ff0u: goto label_3e1ff0;
        case 0x3e2004u: goto label_3e2004;
        default: break;
    }

    ctx->pc = 0x3e1fa8u;

    // 0x3e1fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1fac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e1facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1fb4: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e1fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e1fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1fbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1fc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1fc8: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e1fcc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e1fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e1fd0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1FD0u;
    SET_GPR_U32(ctx, 31, 0x3E1FD8u);
    ctx->pc = 0x3E1FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1FD0u;
    // 0x3e1fd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1FD0u, 0x3E1FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1FD8u;
label_3e1fd8:
    // 0x3e1fd8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e1fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e1fdc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1FDCu;
    SET_GPR_U32(ctx, 31, 0x3E1FE4u);
    ctx->pc = 0x3E1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1FDCu;
    // 0x3e1fe0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1FDCu, 0x3E1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1FE4u;
label_3e1fe4:
    // 0x3e1fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1fe8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1FE8u;
    SET_GPR_U32(ctx, 31, 0x3E1FF0u);
    ctx->pc = 0x3E1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1FE8u;
    // 0x3e1fec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1FE8u, 0x3E1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1FF0u;
label_3e1ff0:
    // 0x3e1ff0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e1ff0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e1ff4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1FF4u;
    {
        const bool branch_taken_0x3e1ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FF4u;
        // 0x3e1ff8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ff4) {
            ctx->pc = 0x3E2008u;
            goto label_3e2008;
        }
    }
    ctx->pc = 0x3E1FFCu;
    // 0x3e1ffc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1FFCu;
    SET_GPR_U32(ctx, 31, 0x3E2004u);
    ctx->pc = 0x3E2000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1FFCu;
    // 0x3e2000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1FFCu, 0x3E2004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2004u;
label_3e2004:
    // 0x3e2004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2008:
    // 0x3e2008: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e200c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e200cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2010: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2010u;
        // 0x3e2014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2018u;
}
