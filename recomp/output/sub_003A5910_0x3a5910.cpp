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

// Function: sub_003A5910
// Address: 0x3a5910 - 0x3a59a0
void sub_003A5910_0x3a5910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5910_0x3a5910");
#endif

    switch (ctx->pc) {
        case 0x3a5934u: goto label_3a5934;
        case 0x3a593cu: goto label_3a593c;
        default: break;
    }

    ctx->pc = 0x3a5910u;

    // 0x3a5910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a5914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a5914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a5918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a591c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a5920: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3a5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3a5924: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A5924u;
    {
        const bool branch_taken_0x3a5924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5924) {
            ctx->pc = 0x3A5928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5924u;
            // 0x3a5928: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A59C8u;
            return;
        }
    }
    ctx->pc = 0x3A592Cu;
    // 0x3a592c: 0xc0eb27a  jal         func_3AC9E8
    ctx->pc = 0x3A592Cu;
    SET_GPR_U32(ctx, 31, 0x3A5934u);
    ctx->pc = 0x3AC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9E8u, 0x3A592Cu, 0x3A5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5934u;
label_3a5934:
    // 0x3a5934: 0xc0e8aa2  jal         func_3A2A88
    ctx->pc = 0x3A5934u;
    SET_GPR_U32(ctx, 31, 0x3A593Cu);
    ctx->pc = 0x3A5938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5934u;
    // 0x3a5938: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2A88u, 0x3A5934u, 0x3A593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A593Cu;
label_3a593c:
    // 0x3a593c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a593cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5940: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3a5940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a5944: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A5944u;
    {
        const bool branch_taken_0x3a5944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5944) {
            ctx->pc = 0x3A5948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5944u;
            // 0x3a5948: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A59B8u;
            return;
        }
    }
    ctx->pc = 0x3A594Cu;
    // 0x3a594c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3a594cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5950: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3a5950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3a5954: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a5954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a5958: 0x8c63db50  lw          $v1, -0x24B0($v1)
    ctx->pc = 0x3a5958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957904)));
    // 0x3a595c: 0x600008  jr          $v1
    ctx->pc = 0x3A595Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A5968u: goto label_3a5968;
            case 0x3A5978u: goto label_3a5978;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A595Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A5964u;
    // 0x3a5964: 0x0  nop
    ctx->pc = 0x3a5964u;
    // NOP
label_3a5968:
    // 0x3a5968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a596c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3a596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3a5970: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A5970u;
    {
        const bool branch_taken_0x3a5970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5970u;
        // 0x3a5974: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5970) {
            ctx->pc = 0x3A59A8u;
            return;
        }
    }
    ctx->pc = 0x3A5978u;
label_3a5978:
    // 0x3a5978: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x3a5978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3a597c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5980: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3a5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3a5984: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x3a5984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x3a5988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a5988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a598c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x3a598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3a5990: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a5990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a5994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5994u;
    {
        const bool branch_taken_0x3a5994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5994u;
        // 0x3a5998: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5994) {
            ctx->pc = 0x3A59A8u;
            return;
        }
    }
    ctx->pc = 0x3A599Cu;
    // 0x3a599c: 0x0  nop
    ctx->pc = 0x3a599cu;
    // NOP
    ctx->pc = 0x3a59a0u;
}
