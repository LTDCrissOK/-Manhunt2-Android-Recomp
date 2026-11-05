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

// Function: sub_002C1568
// Address: 0x2c1568 - 0x2c15e0
void sub_002C1568_0x2c1568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1568_0x2c1568");
#endif

    switch (ctx->pc) {
        case 0x2c1590u: goto label_2c1590;
        default: break;
    }

    ctx->pc = 0x2c1568u;

    // 0x2c1568: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2c1568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c156c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2c156cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2c1570: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x2c1570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c1574: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2c1574u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2c1578: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C1578u;
    {
        const bool branch_taken_0x2c1578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1578u;
        // 0x2c157c: 0x91240000  lbu         $a0, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1578) {
            ctx->pc = 0x2C15D8u;
            goto label_2c15d8;
        }
    }
    ctx->pc = 0x2C1580u;
    // 0x2c1580: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2c1580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2c1584: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2c1584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2c1588: 0x244b0c11  addiu       $t3, $v0, 0xC11
    ctx->pc = 0x2c1588u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
    // 0x2c158c: 0x246aafe0  addiu       $t2, $v1, -0x5020
    ctx->pc = 0x2c158cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
label_2c1590:
    // 0x2c1590: 0x42e00  sll         $a1, $a0, 24
    ctx->pc = 0x2c1590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x2c1594: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2c1594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2c1598: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x2c1598u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x2c159c: 0x83a02  srl         $a3, $t0, 8
    ctx->pc = 0x2c159cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x2c15a0: 0xab2021  addu        $a0, $a1, $t3
    ctx->pc = 0x2c15a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2c15a4: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x2c15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x2c15a8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2c15a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c15ac: 0x81260000  lb          $a2, 0x0($t1)
    ctx->pc = 0x2c15acu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c15b0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2c15b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c15b4: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x2c15b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c15b8: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x2c15b8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2c15bc: 0x1021026  xor         $v0, $t0, $v0
    ctx->pc = 0x2c15bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
    // 0x2c15c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c15c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c15c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c15c8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c15cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c15d0: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C15D0u;
    {
        const bool branch_taken_0x2c15d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15D0u;
        // 0x2c15d4: 0xe34026  xor         $t0, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c15d0) {
            ctx->pc = 0x2C1590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1590;
        }
    }
    ctx->pc = 0x2C15D8u;
label_2c15d8:
    // 0x2c15d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C15D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C15D8u;
        // 0x2c15dc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C15D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C15E0u;
}
