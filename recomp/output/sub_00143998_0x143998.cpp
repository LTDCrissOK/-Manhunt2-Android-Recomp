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

// Function: sub_00143998
// Address: 0x143998 - 0x143a10
void sub_00143998_0x143998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143998_0x143998");
#endif

    switch (ctx->pc) {
        case 0x1439bcu: goto label_1439bc;
        case 0x1439c8u: goto label_1439c8;
        case 0x1439d4u: goto label_1439d4;
        case 0x1439e0u: goto label_1439e0;
        case 0x1439ecu: goto label_1439ec;
        case 0x1439fcu: goto label_1439fc;
        default: break;
    }

    ctx->pc = 0x143998u;

    // 0x143998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14399c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1439a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1439a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1439a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1439a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1439a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1439acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1439b0: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x1439b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x1439b4: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x1439B4u;
    SET_GPR_U32(ctx, 31, 0x1439BCu);
    ctx->pc = 0x1439B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439B4u;
    // 0x1439b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x1439B4u, 0x1439BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439BCu;
label_1439bc:
    // 0x1439bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1439bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439c0: 0xc04623e  jal         func_1188F8
    ctx->pc = 0x1439C0u;
    SET_GPR_U32(ctx, 31, 0x1439C8u);
    ctx->pc = 0x1439C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439C0u;
    // 0x1439c4: 0xae020ab0  sw          $v0, 0xAB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1188F8u, 0x1439C0u, 0x1439C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439C8u;
label_1439c8:
    // 0x1439c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1439c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439cc: 0xc0460e4  jal         func_118390
    ctx->pc = 0x1439CCu;
    SET_GPR_U32(ctx, 31, 0x1439D4u);
    ctx->pc = 0x1439D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439CCu;
    // 0x1439d0: 0xa2020b10  sb          $v0, 0xB10($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2832), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x1439CCu, 0x1439D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439D4u;
label_1439d4:
    // 0x1439d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1439d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439d8: 0xc046272  jal         func_1189C8
    ctx->pc = 0x1439D8u;
    SET_GPR_U32(ctx, 31, 0x1439E0u);
    ctx->pc = 0x1439DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439D8u;
    // 0x1439dc: 0xae020b14  sw          $v0, 0xB14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x1439D8u, 0x1439E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439E0u;
label_1439e0:
    // 0x1439e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1439e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439e4: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x1439E4u;
    SET_GPR_U32(ctx, 31, 0x1439ECu);
    ctx->pc = 0x1439E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439E4u;
    // 0x1439e8: 0xae020ab8  sw          $v0, 0xAB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x1439E4u, 0x1439ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439ECu;
label_1439ec:
    // 0x1439ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1439ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1439f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1439f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439f4: 0xc042136  jal         func_1084D8
    ctx->pc = 0x1439F4u;
    SET_GPR_U32(ctx, 31, 0x1439FCu);
    ctx->pc = 0x1439F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439F4u;
    // 0x1439f8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x1439F4u, 0x1439FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439FCu;
label_1439fc:
    // 0x1439fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1439fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143a00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143a08: 0x3e00008  jr          $ra
    ctx->pc = 0x143A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A08u;
        // 0x143a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143A10u;
}
