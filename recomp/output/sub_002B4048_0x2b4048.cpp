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

// Function: sub_002B4048
// Address: 0x2b4048 - 0x2b40e0
void sub_002B4048_0x2b4048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4048_0x2b4048");
#endif

    switch (ctx->pc) {
        case 0x2b4070u: goto label_2b4070;
        case 0x2b40c0u: goto label_2b40c0;
        default: break;
    }

    ctx->pc = 0x2b4048u;

    // 0x2b4048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b404c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b4050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b4050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b4054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4058: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b4058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b405c: 0x249108e0  addiu       $s1, $a0, 0x8E0
    ctx->pc = 0x2b405cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 2272));
    // 0x2b4060: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b4060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b4064: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x2b4064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b4068: 0xae0008d0  sw          $zero, 0x8D0($s0)
    ctx->pc = 0x2b4068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2256), GPR_U32(ctx, 0));
    // 0x2b406c: 0x0  nop
    ctx->pc = 0x2b406cu;
    // NOP
label_2b4070:
    // 0x2b4070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4074: 0xa60008d4  sh          $zero, 0x8D4($s0)
    ctx->pc = 0x2b4074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2260), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b407c: 0xa20008c1  sb          $zero, 0x8C1($s0)
    ctx->pc = 0x2b407cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2241), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4080: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b4080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4084: 0xa20008c2  sb          $zero, 0x8C2($s0)
    ctx->pc = 0x2b4084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2242), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4088: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2b4088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2b408c: 0xa20008c3  sb          $zero, 0x8C3($s0)
    ctx->pc = 0x2b408cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2243), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4090: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2b4090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2b4094: 0xa20008c4  sb          $zero, 0x8C4($s0)
    ctx->pc = 0x2b4094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4098: 0xa20008c5  sb          $zero, 0x8C5($s0)
    ctx->pc = 0x2b4098u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2245), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b409c: 0xa60008c6  sh          $zero, 0x8C6($s0)
    ctx->pc = 0x2b409cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2246), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b40a0: 0xa20008c9  sb          $zero, 0x8C9($s0)
    ctx->pc = 0x2b40a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2249), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40a4: 0xa20008ca  sb          $zero, 0x8CA($s0)
    ctx->pc = 0x2b40a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2250), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40a8: 0xa20008cb  sb          $zero, 0x8CB($s0)
    ctx->pc = 0x2b40a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2251), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40ac: 0xa20008cc  sb          $zero, 0x8CC($s0)
    ctx->pc = 0x2b40acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2252), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40b0: 0xa20008cd  sb          $zero, 0x8CD($s0)
    ctx->pc = 0x2b40b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2253), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b40b4: 0xa60008ce  sh          $zero, 0x8CE($s0)
    ctx->pc = 0x2b40b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2254), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b40b8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B40B8u;
    SET_GPR_U32(ctx, 31, 0x2B40C0u);
    ctx->pc = 0x2B40BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B40B8u;
    // 0x2b40bc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B40B8u, 0x2B40C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B40C0u;
label_2b40c0:
    // 0x2b40c0: 0x643ffeb  bgezl       $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2B40C0u;
    {
        const bool branch_taken_0x2b40c0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2b40c0) {
            ctx->pc = 0x2B40C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B40C0u;
            // 0x2b40c4: 0xae0008d0  sw          $zero, 0x8D0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4070;
        }
    }
    ctx->pc = 0x2B40C8u;
    // 0x2b40c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b40c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b40cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b40ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b40d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b40d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b40d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b40d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b40d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B40D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D8u;
        // 0x2b40dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B40D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B40E0u;
}
