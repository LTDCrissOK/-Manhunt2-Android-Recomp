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

// Function: sub_001286C0
// Address: 0x1286c0 - 0x128730
void sub_001286C0_0x1286c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001286C0_0x1286c0");
#endif

    switch (ctx->pc) {
        case 0x1286e8u: goto label_1286e8;
        case 0x1286f0u: goto label_1286f0;
        default: break;
    }

    ctx->pc = 0x1286c0u;

    // 0x1286c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1286c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1286c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1286c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1286c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1286c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1286cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1286ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1286d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1286d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1286d4: 0x26300f94  addiu       $s0, $s1, 0xF94
    ctx->pc = 0x1286d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3988));
    // 0x1286d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1286d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1286dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1286DCu;
    {
        const bool branch_taken_0x1286dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1286E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286DCu;
        // 0x1286e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1286dc) {
            ctx->pc = 0x128700u;
            goto label_128700;
        }
    }
    ctx->pc = 0x1286E4u;
    // 0x1286e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1286e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1286e8:
    // 0x1286e8: 0xc0f6ec0  jal         func_3DBB00
    ctx->pc = 0x1286E8u;
    SET_GPR_U32(ctx, 31, 0x1286F0u);
    ctx->pc = 0x1286ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1286E8u;
    // 0x1286ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x1286E8u, 0x1286F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286F0u;
label_1286f0:
    // 0x1286f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1286f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1286f4: 0x0  nop
    ctx->pc = 0x1286f4u;
    // NOP
    // 0x1286f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1286F8u;
    {
        const bool branch_taken_0x1286f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1286f8) {
            ctx->pc = 0x1286FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1286F8u;
            // 0x1286fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1286E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1286e8;
        }
    }
    ctx->pc = 0x128700u;
label_128700:
    // 0x128700: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x128700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x128704: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x128704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x128708: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x128708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12870c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12870cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x128710: 0xae200fac  sw          $zero, 0xFAC($s1)
    ctx->pc = 0x128710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4012), GPR_U32(ctx, 0));
    // 0x128714: 0xae200fa4  sw          $zero, 0xFA4($s1)
    ctx->pc = 0x128714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4004), GPR_U32(ctx, 0));
    // 0x128718: 0xae200fa8  sw          $zero, 0xFA8($s1)
    ctx->pc = 0x128718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4008), GPR_U32(ctx, 0));
    // 0x12871c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12871cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128728: 0x3e00008  jr          $ra
    ctx->pc = 0x128728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128728u;
        // 0x12872c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128730u;
}
