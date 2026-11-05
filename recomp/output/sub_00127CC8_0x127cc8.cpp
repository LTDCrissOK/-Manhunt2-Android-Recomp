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

// Function: sub_00127CC8
// Address: 0x127cc8 - 0x127da8
void sub_00127CC8_0x127cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127CC8_0x127cc8");
#endif

    switch (ctx->pc) {
        case 0x127ce8u: goto label_127ce8;
        case 0x127d8cu: goto label_127d8c;
        default: break;
    }

    ctx->pc = 0x127cc8u;

    // 0x127cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x127ccc: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x127cccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x127cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127cd4: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x127cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x127cd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x127cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x127cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x127cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ce0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x127CE0u;
    {
        const bool branch_taken_0x127ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CE0u;
        // 0x127ce4: 0x306800ff  andi        $t0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ce0) {
            ctx->pc = 0x127D68u;
            goto label_127d68;
        }
    }
    ctx->pc = 0x127CE8u;
label_127ce8:
    // 0x127ce8: 0x92980  sll         $a1, $t1, 6
    ctx->pc = 0x127ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x127cec: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x127cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x127cf0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x127cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x127cf4: 0x24840870  addiu       $a0, $a0, 0x870
    ctx->pc = 0x127cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2160));
    // 0x127cf8: 0x24a50870  addiu       $a1, $a1, 0x870
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2160));
    // 0x127cfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x127cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127d00: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x127d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x127d04: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x127d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x127d08: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x127d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x127d0c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x127d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x127d10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x127d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x127d14: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x127d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x127d18: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x127d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x127d1c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x127d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x127d20: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x127d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x127d24: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x127d24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x127d28: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x127d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x127d2c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x127d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x127d30: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x127d30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127d34: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x127d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x127d38: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x127d38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x127d3c: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x127d3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x127d40: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x127d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x127d44: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x127d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x127d48: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x127d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x127d4c: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x127d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x127d50: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x127d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x127d54: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x127d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x127d58: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x127d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127d5c: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x127d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x127d60: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x127d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x127d64: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x127d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_127d68:
    // 0x127d68: 0x92020a70  lbu         $v0, 0xA70($s0)
    ctx->pc = 0x127d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x127d6c: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x127d6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127d70: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x127D70u;
    {
        const bool branch_taken_0x127d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D70u;
        // 0x127d74: 0x82180  sll         $a0, $t0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d70) {
            ctx->pc = 0x127CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127ce8;
        }
    }
    ctx->pc = 0x127D78u;
    // 0x127d78: 0x92980  sll         $a1, $t1, 6
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x127d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127d80: 0x24a50870  addiu       $a1, $a1, 0x870
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2160));
    // 0x127d84: 0xc049ef6  jal         func_127BD8
    ctx->pc = 0x127D84u;
    SET_GPR_U32(ctx, 31, 0x127D8Cu);
    ctx->pc = 0x127D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127D84u;
    // 0x127d88: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BD8u, 0x127D84u, 0x127D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D8Cu;
label_127d8c:
    // 0x127d8c: 0x92020a70  lbu         $v0, 0xA70($s0)
    ctx->pc = 0x127d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2672)));
    // 0x127d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x127d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127d94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x127d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x127d98: 0xa2020a70  sb          $v0, 0xA70($s0)
    ctx->pc = 0x127d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2672), (uint8_t)GPR_U32(ctx, 2));
    // 0x127d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127da0: 0x3e00008  jr          $ra
    ctx->pc = 0x127DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DA0u;
        // 0x127da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127DA8u;
}
