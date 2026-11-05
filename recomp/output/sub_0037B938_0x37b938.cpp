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

// Function: sub_0037B938
// Address: 0x37b938 - 0x37ba20
void sub_0037B938_0x37b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B938_0x37b938");
#endif

    switch (ctx->pc) {
        case 0x37b9c4u: goto label_37b9c4;
        case 0x37b9f8u: goto label_37b9f8;
        case 0x37ba10u: goto label_37ba10;
        default: break;
    }

    ctx->pc = 0x37b938u;

    // 0x37b938: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37b938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37b93c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x37b940: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x37b940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x37b944: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37b944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37b948: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37b948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37b94c: 0x2463ba20  addiu       $v1, $v1, -0x45E0
    ctx->pc = 0x37b94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949408));
    // 0x37b950: 0x24e7bc58  addiu       $a3, $a3, -0x43A8
    ctx->pc = 0x37b950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949976));
    // 0x37b954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37b958: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x37b958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b95c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x37b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x37b960: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x37b960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x37b964: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x37b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x37b968: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x37b968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x37b96c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37b970: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x37b970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x37b974: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x37b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x37b978: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x37B978u;
    {
        const bool branch_taken_0x37b978 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B978u;
        // 0x37b97c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b978) {
            ctx->pc = 0x37B9CCu;
            goto label_37b9cc;
        }
    }
    ctx->pc = 0x37B980u;
    // 0x37b980: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37b980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x37b984: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37b984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37b988: 0x2442bc90  addiu       $v0, $v0, -0x4370
    ctx->pc = 0x37b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950032));
    // 0x37b98c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37b990: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x37b990u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x37b994: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x37b994u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x37b998: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x37b998u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x37b99c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x37b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37b9a4: 0x24a5bc90  addiu       $a1, $a1, -0x4370
    ctx->pc = 0x37b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950032));
    // 0x37b9a8: 0x24c6c010  addiu       $a2, $a2, -0x3FF0
    ctx->pc = 0x37b9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950928));
    // 0x37b9ac: 0x24e76560  addiu       $a3, $a3, 0x6560
    ctx->pc = 0x37b9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25952));
    // 0x37b9b0: 0x250865e0  addiu       $t0, $t0, 0x65E0
    ctx->pc = 0x37b9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26080));
    // 0x37b9b4: 0x2529cdc0  addiu       $t1, $t1, -0x3240
    ctx->pc = 0x37b9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954432));
    // 0x37b9b8: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x37b9b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9bc: 0xc0dfe98  jal         func_37FA60
    ctx->pc = 0x37B9BCu;
    SET_GPR_U32(ctx, 31, 0x37B9C4u);
    ctx->pc = 0x37B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9BCu;
    // 0x37b9c0: 0x27ab0010  addiu       $t3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA60u, 0x37B9BCu, 0x37B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9C4u;
label_37b9c4:
    // 0x37b9c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37B9C4u;
    {
        const bool branch_taken_0x37b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B9C4u;
        // 0x37b9c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b9c4) {
            ctx->pc = 0x37BA14u;
            goto label_37ba14;
        }
    }
    ctx->pc = 0x37B9CCu;
label_37b9cc:
    // 0x37b9cc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x37b9d0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37b9d4: 0x2442c010  addiu       $v0, $v0, -0x3FF0
    ctx->pc = 0x37b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950928));
    // 0x37b9d8: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37b9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37b9dc: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x37b9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x37b9e0: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x37b9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x37b9e4: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x37b9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x37b9e8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x37b9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37b9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37b9f0: 0x24a5c010  addiu       $a1, $a1, -0x3FF0
    ctx->pc = 0x37b9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950928));
    // 0x37b9f4: 0x24c6c380  addiu       $a2, $a2, -0x3C80
    ctx->pc = 0x37b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951808));
label_37b9f8:
    // 0x37b9f8: 0x24e76560  addiu       $a3, $a3, 0x6560
    ctx->pc = 0x37b9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25952));
    // 0x37b9fc: 0x250865e0  addiu       $t0, $t0, 0x65E0
    ctx->pc = 0x37b9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26080));
    // 0x37ba00: 0x2529cdd8  addiu       $t1, $t1, -0x3228
    ctx->pc = 0x37ba00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954456));
    // 0x37ba04: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x37ba04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba08: 0xc0dfe98  jal         func_37FA60
    ctx->pc = 0x37BA08u;
    SET_GPR_U32(ctx, 31, 0x37BA10u);
    ctx->pc = 0x37BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA08u;
    // 0x37ba0c: 0x27ab0010  addiu       $t3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA60u, 0x37BA08u, 0x37BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA10u;
label_37ba10:
    // 0x37ba10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37ba10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_37ba14:
    // 0x37ba14: 0x3e00008  jr          $ra
    ctx->pc = 0x37BA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA14u;
        // 0x37ba18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BA1Cu;
    // 0x37ba1c: 0x0  nop
    ctx->pc = 0x37ba1cu;
    // NOP
    ctx->pc = 0x37ba20u;
}
