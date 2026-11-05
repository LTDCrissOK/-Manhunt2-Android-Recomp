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

// Function: sub_00393EE0
// Address: 0x393ee0 - 0x393f98
void sub_00393EE0_0x393ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393EE0_0x393ee0");
#endif

    switch (ctx->pc) {
        case 0x393f70u: goto label_393f70;
        default: break;
    }

    ctx->pc = 0x393ee0u;

    // 0x393ee0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x393ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x393ee4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x393ee4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393ee8: 0x244cea70  addiu       $t4, $v0, -0x1590
    ctx->pc = 0x393ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961776));
    // 0x393eec: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x393eecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393ef0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x393ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FEA70u));
    // 0x393ef4: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x393ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x393ef8: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x393ef8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x393efc: 0x256bea50  addiu       $t3, $t3, -0x15B0
    ctx->pc = 0x393efcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961744));
    // 0x393f00: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x393f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x393f04: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x393f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x393f08: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x393f08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x393f0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x393f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f10: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x393f10u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x393f14: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x393f14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x393f18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x393f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x393f1c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x393f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x393f20: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x393f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x393f24: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x393f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x393f28: 0x24a5e950  addiu       $a1, $a1, -0x16B0
    ctx->pc = 0x393f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
    // 0x393f2c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x393f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x393f30: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x393F30u;
    {
        const bool branch_taken_0x393f30 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x393F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F30u;
        // 0x393f34: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f30) {
            ctx->pc = 0x393F50u;
            goto label_393f50;
        }
    }
    ctx->pc = 0x393F38u;
    // 0x393f38: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x393f38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x393f3c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393f40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x393f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x393f44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x393F44u;
    {
        const bool branch_taken_0x393f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F44u;
        // 0x393f48: 0xa5620000  sh          $v0, 0x0($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f44) {
            ctx->pc = 0x393F58u;
            goto label_393f58;
        }
    }
    ctx->pc = 0x393F4Cu;
    // 0x393f4c: 0x0  nop
    ctx->pc = 0x393f4cu;
    // NOP
label_393f50:
    // 0x393f50: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x393f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x393f54: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x393f54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_393f58:
    // 0x393f58: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x393f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x393f5c: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x393f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x393f60: 0xa0aa0000  sb          $t2, 0x0($a1)
    ctx->pc = 0x393f60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x393f64: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x393f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x393f68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x393f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x393f6c: 0xa0ad0001  sb          $t5, 0x1($a1)
    ctx->pc = 0x393f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 13));
label_393f70:
    // 0x393f70: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x393f70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x393f74: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x393f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x393f78: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x393f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x393f7c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x393f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x393f80: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x393f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x393f84: 0x3e00008  jr          $ra
    ctx->pc = 0x393F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F84u;
        // 0x393f88: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393F8Cu;
    // 0x393f8c: 0x0  nop
    ctx->pc = 0x393f8cu;
    // NOP
    // 0x393f90: 0x0  nop
    ctx->pc = 0x393f90u;
    // NOP
    // 0x393f94: 0x0  nop
    ctx->pc = 0x393f94u;
    // NOP
    ctx->pc = 0x393f98u;
}
