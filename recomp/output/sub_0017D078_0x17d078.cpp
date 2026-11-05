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

// Function: sub_0017D078
// Address: 0x17d078 - 0x17d118
void sub_0017D078_0x17d078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D078_0x17d078");
#endif

    switch (ctx->pc) {
        case 0x17d094u: goto label_17d094;
        case 0x17d104u: goto label_17d104;
        default: break;
    }

    ctx->pc = 0x17d078u;

    // 0x17d078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d07c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d084: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17d088: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x17d088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x17d08c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17D08Cu;
    SET_GPR_U32(ctx, 31, 0x17D094u);
    ctx->pc = 0x17D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D08Cu;
    // 0x17d090: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17D08Cu, 0x17D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D094u;
label_17d094:
    // 0x17d094: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17d094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17d098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d09c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17d0a0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17d0a4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x17d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x17d0a8: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x17d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x17d0ac: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x17d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x17d0b0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x17d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x17d0b4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x17d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x17d0b8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x17d0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x17d0bc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x17d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x17d0c0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x17d0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x17d0c4: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x17d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x17d0c8: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x17d0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x17d0cc: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x17d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x17d0d0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x17d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x17d0d4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x17d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x17d0d8: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x17d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x17d0dc: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x17d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x17d0e0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x17d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x17d0e4: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x17d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x17d0e8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x17d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x17d0ec: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x17d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x17d0f0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x17d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x17d0f4: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x17d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x17d0f8: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x17d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x17d0fc: 0xc05f5a8  jal         func_17D6A0
    ctx->pc = 0x17D0FCu;
    SET_GPR_U32(ctx, 31, 0x17D104u);
    ctx->pc = 0x17D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D0FCu;
    // 0x17d100: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D6A0u, 0x17D0FCu, 0x17D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D104u;
label_17d104:
    // 0x17d104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d108: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17d108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d110: 0x3e00008  jr          $ra
    ctx->pc = 0x17D110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D110u;
        // 0x17d114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D118u;
}
