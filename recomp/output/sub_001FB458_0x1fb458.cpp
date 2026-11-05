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

// Function: sub_001FB458
// Address: 0x1fb458 - 0x1fb4b8
void sub_001FB458_0x1fb458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB458_0x1fb458");
#endif

    switch (ctx->pc) {
        case 0x1fb478u: goto label_1fb478;
        case 0x1fb480u: goto label_1fb480;
        case 0x1fb4a4u: goto label_1fb4a4;
        default: break;
    }

    ctx->pc = 0x1fb458u;

    // 0x1fb458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb460: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb464: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fb46c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb470: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1fb470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1fb474: 0x0  nop
    ctx->pc = 0x1fb474u;
    // NOP
label_1fb478:
    // 0x1fb478: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1FB478u;
    SET_GPR_U32(ctx, 31, 0x1FB480u);
    ctx->pc = 0x1FB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB478u;
    // 0x1fb47c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1FB478u, 0x1FB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB480u;
label_1fb480:
    // 0x1fb480: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fb480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb484: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fb484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb488: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x1fb488u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fb48c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB48Cu;
    {
        const bool branch_taken_0x1fb48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB48Cu;
        // 0x1fb490: 0x102180  sll         $a0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb48c) {
            ctx->pc = 0x1FB478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb478;
        }
    }
    ctx->pc = 0x1FB494u;
    // 0x1fb494: 0xa2200280  sb          $zero, 0x280($s1)
    ctx->pc = 0x1fb494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fb498: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x1fb498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
    // 0x1fb49c: 0xc07ecb0  jal         func_1FB2C0
    ctx->pc = 0x1FB49Cu;
    SET_GPR_U32(ctx, 31, 0x1FB4A4u);
    ctx->pc = 0x1FB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB49Cu;
    // 0x1fb4a0: 0xa2200281  sb          $zero, 0x281($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 641), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2C0u, 0x1FB49Cu, 0x1FB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB4A4u;
label_1fb4a4:
    // 0x1fb4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb4a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb4a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB4B0u;
        // 0x1fb4b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB4B8u;
}
