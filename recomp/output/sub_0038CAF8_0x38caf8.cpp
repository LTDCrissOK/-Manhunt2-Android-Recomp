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

// Function: sub_0038CAF8
// Address: 0x38caf8 - 0x38cbe0
void sub_0038CAF8_0x38caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CAF8_0x38caf8");
#endif

    switch (ctx->pc) {
        case 0x38cb14u: goto label_38cb14;
        case 0x38cb4cu: goto label_38cb4c;
        case 0x38cbbcu: goto label_38cbbc;
        default: break;
    }

    ctx->pc = 0x38caf8u;

    // 0x38caf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38caf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38cafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cb00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38cb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38cb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cb08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38cb0c: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38CB0Cu;
    SET_GPR_U32(ctx, 31, 0x38CB14u);
    ctx->pc = 0x38CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CB0Cu;
    // 0x38cb10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38CB0Cu, 0x38CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB14u;
label_38cb14:
    // 0x38cb14: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x38cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x38cb18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CB18u;
    {
        const bool branch_taken_0x38cb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB18u;
        // 0x38cb1c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb18) {
            ctx->pc = 0x38CB30u;
            goto label_38cb30;
        }
    }
    ctx->pc = 0x38CB20u;
    // 0x38cb20: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x38cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x38cb24: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x38cb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x38cb28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38CB28u;
    {
        const bool branch_taken_0x38cb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB28u;
        // 0x38cb2c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb28) {
            ctx->pc = 0x38CB58u;
            goto label_38cb58;
        }
    }
    ctx->pc = 0x38CB30u;
label_38cb30:
    // 0x38cb30: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x38cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x38cb34: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38cb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cb3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38cb3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38cb40: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x38cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x38cb44: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38CB44u;
    SET_GPR_U32(ctx, 31, 0x38CB4Cu);
    ctx->pc = 0x38CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CB44u;
    // 0x38cb48: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38CB44u, 0x38CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CB4Cu;
label_38cb4c:
    // 0x38cb4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38cb50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38cb50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38cb54: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x38cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_38cb58:
    // 0x38cb58: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x38cb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38cb5c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x38cb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x38cb60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38cb64: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x38cb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x38cb68: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x38cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x38cb6c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x38cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x38cb70: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x38cb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x38cb74: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x38cb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x38cb78: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x38cb78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x38cb7c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x38cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x38cb80: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x38cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x38cb84: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x38cb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x38cb88: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x38cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x38cb8c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CB8Cu;
    {
        const bool branch_taken_0x38cb8c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x38CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CB8Cu;
        // 0x38cb90: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cb8c) {
            ctx->pc = 0x38CBA8u;
            goto label_38cba8;
        }
    }
    ctx->pc = 0x38CB94u;
    // 0x38cb94: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x38cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x38cb98: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CB98u;
    {
        const bool branch_taken_0x38cb98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x38cb98) {
            ctx->pc = 0x38CB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CB98u;
            // 0x38cb9c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CBB4u;
            goto label_38cbb4;
        }
    }
    ctx->pc = 0x38CBA0u;
    // 0x38cba0: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CBA0u;
    {
        const bool branch_taken_0x38cba0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x38CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBA0u;
        // 0x38cba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cba0) {
            ctx->pc = 0x38CBB0u;
            goto label_38cbb0;
        }
    }
    ctx->pc = 0x38CBA8u;
label_38cba8:
    // 0x38cba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38CBA8u;
    {
        const bool branch_taken_0x38cba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBA8u;
        // 0x38cbac: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cba8) {
            ctx->pc = 0x38CBB4u;
            goto label_38cbb4;
        }
    }
    ctx->pc = 0x38CBB0u;
label_38cbb0:
    // 0x38cbb0: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x38cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_38cbb4:
    // 0x38cbb4: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38CBB4u;
    SET_GPR_U32(ctx, 31, 0x38CBBCu);
    ctx->pc = 0x38CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CBB4u;
    // 0x38cbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38CBB4u, 0x38CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CBBCu;
label_38cbbc:
    // 0x38cbbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38cbc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38cbc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38cbc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38cbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38cbc8: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x38cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x38cbcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38cbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cbd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cbd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38cbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x38CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBD8u;
        // 0x38cbdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CBE0u;
}
