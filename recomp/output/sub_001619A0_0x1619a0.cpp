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

// Function: sub_001619A0
// Address: 0x1619a0 - 0x161a50
void sub_001619A0_0x1619a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001619A0_0x1619a0");
#endif

    switch (ctx->pc) {
        case 0x1619c4u: goto label_1619c4;
        default: break;
    }

    ctx->pc = 0x1619a0u;

    // 0x1619a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1619a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1619a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1619a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1619a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1619a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1619ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1619acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619b0: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1619b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1619b4: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1619B4u;
    {
        const bool branch_taken_0x1619b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1619b4) {
            ctx->pc = 0x1619B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1619B4u;
            // 0x1619b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A44u;
            goto label_161a44;
        }
    }
    ctx->pc = 0x1619BCu;
    // 0x1619bc: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x1619BCu;
    SET_GPR_U32(ctx, 31, 0x1619C4u);
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x1619BCu, 0x1619C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619C4u;
label_1619c4:
    // 0x1619c4: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x1619c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x1619c8: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x1619c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x1619cc: 0x7e0002f0  sq          $zero, 0x2F0($s0)
    ctx->pc = 0x1619ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), GPR_VEC(ctx, 0));
    // 0x1619d0: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x1619d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x1619d4: 0x7e000310  sq          $zero, 0x310($s0)
    ctx->pc = 0x1619d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), GPR_VEC(ctx, 0));
    // 0x1619d8: 0x7e000320  sq          $zero, 0x320($s0)
    ctx->pc = 0x1619d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 800), GPR_VEC(ctx, 0));
    // 0x1619dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1619e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1619e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1619e4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1619e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1619e8: 0xae020358  sw          $v0, 0x358($s0)
    ctx->pc = 0x1619e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 856), GPR_U32(ctx, 2));
    // 0x1619ec: 0xa2030340  sb          $v1, 0x340($s0)
    ctx->pc = 0x1619ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 832), (uint8_t)GPR_U32(ctx, 3));
    // 0x1619f0: 0xa2040341  sb          $a0, 0x341($s0)
    ctx->pc = 0x1619f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 833), (uint8_t)GPR_U32(ctx, 4));
    // 0x1619f4: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x1619f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x1619f8: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x1619f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x1619fc: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x1619fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x161a00: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x161a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x161a04: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x161a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x161a08: 0xae020354  sw          $v0, 0x354($s0)
    ctx->pc = 0x161a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 2));
    // 0x161a0c: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x161a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
    // 0x161a10: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x161a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x161a14: 0xae00034c  sw          $zero, 0x34C($s0)
    ctx->pc = 0x161a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 0));
    // 0x161a18: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x161a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x161a1c: 0xae000344  sw          $zero, 0x344($s0)
    ctx->pc = 0x161a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 0));
    // 0x161a20: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x161a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
    // 0x161a24: 0xae000370  sw          $zero, 0x370($s0)
    ctx->pc = 0x161a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x161a28: 0xae000374  sw          $zero, 0x374($s0)
    ctx->pc = 0x161a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 0));
    // 0x161a2c: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x161a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x161a30: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x161a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x161a34: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x161a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x161a38: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x161a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x161a3c: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x161a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x161a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161a44:
    // 0x161a44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161a48: 0x3e00008  jr          $ra
    ctx->pc = 0x161A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A48u;
        // 0x161a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161A50u;
}
