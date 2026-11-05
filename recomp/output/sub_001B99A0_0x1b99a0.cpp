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

// Function: sub_001B99A0
// Address: 0x1b99a0 - 0x1b9aa0
void sub_001B99A0_0x1b99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B99A0_0x1b99a0");
#endif

    switch (ctx->pc) {
        case 0x1b99d8u: goto label_1b99d8;
        case 0x1b9a28u: goto label_1b9a28;
        default: break;
    }

    ctx->pc = 0x1b99a0u;

    // 0x1b99a0: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x1b99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x1b99a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1b99a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b99a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1b99a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b99ac: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x1b99acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x1b99b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b99b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b99b4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1b99b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b99b8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1B99B8u;
    {
        const bool branch_taken_0x1b99b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99B8u;
        // 0x1b99bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99b8) {
            ctx->pc = 0x1B9A8Cu;
            goto label_1b9a8c;
        }
    }
    ctx->pc = 0x1B99C0u;
    // 0x1b99c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b99c4: 0x10a20031  beq         $a1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B99C4u;
    {
        const bool branch_taken_0x1b99c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99C4u;
        // 0x1b99c8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99c4) {
            ctx->pc = 0x1B9A8Cu;
            goto label_1b9a8c;
        }
    }
    ctx->pc = 0x1B99CCu;
    // 0x1b99cc: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x1b99ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b99d0: 0xa24018  mult        $t0, $a1, $v0
    ctx->pc = 0x1b99d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b99d4: 0x8c8303ec  lw          $v1, 0x3EC($a0)
    ctx->pc = 0x1b99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1004)));
label_1b99d8:
    // 0x1b99d8: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1b99dc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b99dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b99e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B99E0u;
    {
        const bool branch_taken_0x1b99e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99E0u;
        // 0x1b99e4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99e0) {
            ctx->pc = 0x1B9A00u;
            goto label_1b9a00;
        }
    }
    ctx->pc = 0x1B99E8u;
    // 0x1b99e8: 0x24c3fff8  addiu       $v1, $a2, -0x8
    ctx->pc = 0x1b99e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1b99ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b99ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b99f0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1b99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1b99f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b99f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B99F8u;
    {
        const bool branch_taken_0x1b99f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B99F8u;
        // 0x1b99fc: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b99f8) {
            ctx->pc = 0x1B9A04u;
            goto label_1b9a04;
        }
    }
    ctx->pc = 0x1B9A00u;
label_1b9a00:
    // 0x1b9a00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b9a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9a04:
    // 0x1b9a04: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b9a04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a08: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1b9a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b9a0c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B9A0Cu;
    {
        const bool branch_taken_0x1b9a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A0Cu;
        // 0x1b9a10: 0x252a0001  addiu       $t2, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a0c) {
            ctx->pc = 0x1B9A70u;
            goto label_1b9a70;
        }
    }
    ctx->pc = 0x1B9A14u;
    // 0x1b9a14: 0x50ac0017  beql        $a1, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B9A14u;
    {
        const bool branch_taken_0x1b9a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 12));
        if (branch_taken_0x1b9a14) {
            ctx->pc = 0x1B9A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9A14u;
            // 0x1b9a18: 0x8c820400  lw          $v0, 0x400($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9A74u;
            goto label_1b9a74;
        }
    }
    ctx->pc = 0x1B9A1Cu;
    // 0x1b9a1c: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1b9a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b9a20: 0x1043021  addu        $a2, $t0, $a0
    ctx->pc = 0x1b9a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1b9a24: 0xacc70184  sw          $a3, 0x184($a2)
    ctx->pc = 0x1b9a24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 388), GPR_U32(ctx, 7));
label_1b9a28:
    // 0x1b9a28: 0x25080050  addiu       $t0, $t0, 0x50
    ctx->pc = 0x1b9a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
    // 0x1b9a2c: 0xacc90180  sw          $t1, 0x180($a2)
    ctx->pc = 0x1b9a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 384), GPR_U32(ctx, 9));
    // 0x1b9a30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b9a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b9a34: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x1b9a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x1b9a38: 0xacc0018c  sw          $zero, 0x18C($a2)
    ctx->pc = 0x1b9a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 396), GPR_U32(ctx, 0));
    // 0x1b9a3c: 0x8c8203ec  lw          $v0, 0x3EC($a0)
    ctx->pc = 0x1b9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1004)));
    // 0x1b9a40: 0xacc001a0  sw          $zero, 0x1A0($a2)
    ctx->pc = 0x1b9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 416), GPR_U32(ctx, 0));
    // 0x1b9a44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9a48: 0xacc0019c  sw          $zero, 0x19C($a2)
    ctx->pc = 0x1b9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 412), GPR_U32(ctx, 0));
    // 0x1b9a4c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1b9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b9a50: 0xacc20190  sw          $v0, 0x190($a2)
    ctx->pc = 0x1b9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 400), GPR_U32(ctx, 2));
    // 0x1b9a54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b9a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b9a58: 0x8c8203ec  lw          $v0, 0x3EC($a0)
    ctx->pc = 0x1b9a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1004)));
    // 0x1b9a5c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1b9a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b9a60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9A60u;
    {
        const bool branch_taken_0x1b9a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A60u;
        // 0x1b9a64: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a60) {
            ctx->pc = 0x1B9A70u;
            goto label_1b9a70;
        }
    }
    ctx->pc = 0x1B9A68u;
    // 0x1b9a68: 0x54abffef  bnel        $a1, $t3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B9A68u;
    {
        const bool branch_taken_0x1b9a68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 11));
        if (branch_taken_0x1b9a68) {
            ctx->pc = 0x1B9A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9A68u;
            // 0x1b9a6c: 0xacc70184  sw          $a3, 0x184($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 388), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9a28;
        }
    }
    ctx->pc = 0x1B9A70u;
label_1b9a70:
    // 0x1b9a70: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x1b9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
label_1b9a74:
    // 0x1b9a74: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1b9a74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a78: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1b9a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b9a7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9A7Cu;
    {
        const bool branch_taken_0x1b9a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9a7c) {
            ctx->pc = 0x1B9A8Cu;
            goto label_1b9a8c;
        }
    }
    ctx->pc = 0x1B9A84u;
    // 0x1b9a84: 0x54acffd4  bnel        $a1, $t4, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1B9A84u;
    {
        const bool branch_taken_0x1b9a84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 12));
        if (branch_taken_0x1b9a84) {
            ctx->pc = 0x1B9A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9A84u;
            // 0x1b9a88: 0x8c8303ec  lw          $v1, 0x3EC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B99D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b99d8;
        }
    }
    ctx->pc = 0x1B9A8Cu;
label_1b9a8c:
    // 0x1b9a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9A94u;
    // 0x1b9a94: 0x0  nop
    ctx->pc = 0x1b9a94u;
    // NOP
    // 0x1b9a98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b9a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b9a9c: 0x0  nop
    ctx->pc = 0x1b9a9cu;
    // NOP
    ctx->pc = 0x1b9aa0u;
}
