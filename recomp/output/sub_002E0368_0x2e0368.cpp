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

// Function: sub_002E0368
// Address: 0x2e0368 - 0x2e0408
void sub_002E0368_0x2e0368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0368_0x2e0368");
#endif

    switch (ctx->pc) {
        case 0x2e037cu: goto label_2e037c;
        case 0x2e039cu: goto label_2e039c;
        case 0x2e03c0u: goto label_2e03c0;
        case 0x2e03d0u: goto label_2e03d0;
        case 0x2e03f4u: goto label_2e03f4;
        default: break;
    }

    ctx->pc = 0x2e0368u;

    // 0x2e0368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e036c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e0370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e0374: 0xc0b7188  jal         func_2DC620
    ctx->pc = 0x2E0374u;
    SET_GPR_U32(ctx, 31, 0x2E037Cu);
    ctx->pc = 0x2E0378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0374u;
    // 0x2e0378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC620u, 0x2E0374u, 0x2E037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E037Cu;
label_2e037c:
    // 0x2e037c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2e037cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2e0380: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x2e0380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0384: 0x24633f08  addiu       $v1, $v1, 0x3F08
    ctx->pc = 0x2e0384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16136));
    // 0x2e0388: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2e0388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x2e038c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2e038cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2e0390: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x2e0390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2e0394: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E0394u;
    SET_GPR_U32(ctx, 31, 0x2E039Cu);
    ctx->pc = 0x2E0398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0394u;
    // 0x2e0398: 0xae030070  sw          $v1, 0x70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E0394u, 0x2E039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E039Cu;
label_2e039c:
    // 0x2e039c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2e03a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e03a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e03a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e03a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e03a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e03ac: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x2e03acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x2e03b0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x2e03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2e03b4: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x2e03b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x2e03b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E03B8u;
    SET_GPR_U32(ctx, 31, 0x2E03C0u);
    ctx->pc = 0x2E03BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03B8u;
    // 0x2e03bc: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E03B8u, 0x2E03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03C0u;
label_2e03c0:
    // 0x2e03c0: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x2e03c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x2e03c4: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x2e03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2e03c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e03c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03cc: 0x0  nop
    ctx->pc = 0x2e03ccu;
    // NOP
label_2e03d0:
    // 0x2e03d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e03d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e03d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2e03d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2e03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e03dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2e03dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e03e0: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2e03e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e03e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E03E4u;
    {
        const bool branch_taken_0x2e03e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03E4u;
        // 0x2e03e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03e4) {
            ctx->pc = 0x2E03D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e03d0;
        }
    }
    ctx->pc = 0x2E03ECu;
    // 0x2e03ec: 0xc0b815a  jal         func_2E0568
    ctx->pc = 0x2E03ECu;
    SET_GPR_U32(ctx, 31, 0x2E03F4u);
    ctx->pc = 0x2E03F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E03ECu;
    // 0x2e03f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0568u, 0x2E03ECu, 0x2E03F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03F4u;
label_2e03f4:
    // 0x2e03f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e03f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e03f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e03fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e03fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0400: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0400u;
        // 0x2e0404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0408u;
}
