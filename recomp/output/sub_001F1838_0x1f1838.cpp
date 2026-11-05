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

// Function: sub_001F1838
// Address: 0x1f1838 - 0x1f18e0
void sub_001F1838_0x1f1838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1838_0x1f1838");
#endif

    switch (ctx->pc) {
        case 0x1f188cu: goto label_1f188c;
        case 0x1f18c8u: goto label_1f18c8;
        default: break;
    }

    ctx->pc = 0x1f1838u;

    // 0x1f1838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f183c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f183cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1840: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1f1840u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1f1844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1848: 0x92029282  lbu         $v0, -0x6D7E($s0)
    ctx->pc = 0x1f1848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F9282u));
    // 0x1f184c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f184cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1850: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f1858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f185c: 0x2c630029  sltiu       $v1, $v1, 0x29
    ctx->pc = 0x1f185cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x1f1860: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1860u;
    {
        const bool branch_taken_0x1f1860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1860u;
        // 0x1f1864: 0xa2029282  sb          $v0, -0x6D7E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294939266), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1860) {
            ctx->pc = 0x1F1870u;
            goto label_1f1870;
        }
    }
    ctx->pc = 0x1F1868u;
    // 0x1f1868: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1f1868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f186c: 0xa2029282  sb          $v0, -0x6D7E($s0)
    ctx->pc = 0x1f186cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294939266), (uint8_t)GPR_U32(ctx, 2));
label_1f1870:
    // 0x1f1870: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1f1874: 0x92059282  lbu         $a1, -0x6D7E($s0)
    ctx->pc = 0x1f1874u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294939266)));
    // 0x1f1878: 0x24e7edd8  addiu       $a3, $a3, -0x1228
    ctx->pc = 0x1f1878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962648));
    // 0x1f187c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f187cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1880: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f1880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1884: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F1884u;
    SET_GPR_U32(ctx, 31, 0x1F188Cu);
    ctx->pc = 0x1F1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1884u;
    // 0x1f1888: 0x2408010e  addiu       $t0, $zero, 0x10E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F18E0u, 0x1F1884u, 0x1F188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F188Cu;
label_1f188c:
    // 0x1f188c: 0x92029282  lbu         $v0, -0x6D7E($s0)
    ctx->pc = 0x1f188cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294939266)));
    // 0x1f1890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1894: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f1894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f1898: 0x2c630029  sltiu       $v1, $v1, 0x29
    ctx->pc = 0x1f1898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x1f189c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F189Cu;
    {
        const bool branch_taken_0x1f189c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F189Cu;
        // 0x1f18a0: 0xa2029282  sb          $v0, -0x6D7E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4294939266), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f189c) {
            ctx->pc = 0x1F18ACu;
            goto label_1f18ac;
        }
    }
    ctx->pc = 0x1F18A4u;
    // 0x1f18a4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1f18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1f18a8: 0xa2029282  sb          $v0, -0x6D7E($s0)
    ctx->pc = 0x1f18a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294939266), (uint8_t)GPR_U32(ctx, 2));
label_1f18ac:
    // 0x1f18ac: 0x92059282  lbu         $a1, -0x6D7E($s0)
    ctx->pc = 0x1f18acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294939266)));
    // 0x1f18b0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1f18b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1f18b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f18b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18b8: 0x24e7ede8  addiu       $a3, $a3, -0x1218
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962664));
    // 0x1f18bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f18bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f18c0: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F18C0u;
    SET_GPR_U32(ctx, 31, 0x1F18C8u);
    ctx->pc = 0x1F18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18C0u;
    // 0x1f18c4: 0x2408005a  addiu       $t0, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F18E0u, 0x1F18C0u, 0x1F18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18C8u;
label_1f18c8:
    // 0x1f18c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f18c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f18cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f18ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f18d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f18d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f18d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F18D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18D4u;
        // 0x1f18d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F18D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F18DCu;
    // 0x1f18dc: 0x0  nop
    ctx->pc = 0x1f18dcu;
    // NOP
    ctx->pc = 0x1f18e0u;
}
