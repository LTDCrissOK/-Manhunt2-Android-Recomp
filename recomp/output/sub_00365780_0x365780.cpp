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

// Function: sub_00365780
// Address: 0x365780 - 0x365810
void sub_00365780_0x365780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365780_0x365780");
#endif

    switch (ctx->pc) {
        case 0x3657b0u: goto label_3657b0;
        case 0x3657b8u: goto label_3657b8;
        default: break;
    }

    ctx->pc = 0x365780u;

    // 0x365780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365784: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x365784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x365788: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x365788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36578c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36578cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365790: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x365790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x365798: 0x2444dc00  addiu       $a0, $v0, -0x2400
    ctx->pc = 0x365798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958080));
    // 0x36579c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36579cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3657a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3657a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BDC04u));
    // 0x3657a4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3657a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5BDC0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BDC0Cu, _value); } while (0);
    // 0x3657a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3657A8u;
    {
        const bool branch_taken_0x3657a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3657ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657A8u;
        // 0x3657ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3657a8) {
            ctx->pc = 0x3657C4u;
            goto label_3657c4;
        }
    }
    ctx->pc = 0x3657B0u;
label_3657b0:
    // 0x3657b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3657B0u;
    SET_GPR_U32(ctx, 31, 0x3657B8u);
    ctx->pc = 0x3657B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3657B0u;
    // 0x3657b4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3657B0u, 0x3657B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657B8u;
label_3657b8:
    // 0x3657b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3657b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3657bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3657BCu;
    {
        const bool branch_taken_0x3657bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3657C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657BCu;
        // 0x3657c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3657bc) {
            ctx->pc = 0x3657F4u;
            goto label_3657f4;
        }
    }
    ctx->pc = 0x3657C4u;
label_3657c4:
    // 0x3657c4: 0x2623dc00  addiu       $v1, $s1, -0x2400
    ctx->pc = 0x3657c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958080));
    // 0x3657c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3657c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3657cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3657CCu;
    {
        const bool branch_taken_0x3657cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3657D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3657CCu;
        // 0x3657d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3657cc) {
            ctx->pc = 0x3657D8u;
            goto label_3657d8;
        }
    }
    ctx->pc = 0x3657D4u;
    // 0x3657d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3657d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3657d8:
    // 0x3657d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3657D8u;
    {
        const bool branch_taken_0x3657d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3657d8) {
            ctx->pc = 0x3657E8u;
            goto label_3657e8;
        }
    }
    ctx->pc = 0x3657E0u;
    // 0x3657e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3657e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3657e4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3657e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_3657e8:
    // 0x3657e8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x3657E8u;
    {
        const bool branch_taken_0x3657e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3657e8) {
            ctx->pc = 0x3657ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3657E8u;
            // 0x3657ec: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3657B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3657b0;
        }
    }
    ctx->pc = 0x3657F0u;
    // 0x3657f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3657f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3657f4:
    // 0x3657f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3657f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3657f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3657f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3657fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3657fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365800: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x365800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x365804: 0x3e00008  jr          $ra
    ctx->pc = 0x365804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365804u;
        // 0x365808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36580Cu;
    // 0x36580c: 0x0  nop
    ctx->pc = 0x36580cu;
    // NOP
    ctx->pc = 0x365810u;
}
