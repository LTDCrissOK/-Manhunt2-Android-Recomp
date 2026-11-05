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

// Function: sub_00392C18
// Address: 0x392c18 - 0x393568
void sub_00392C18_0x392c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392C18_0x392c18");
#endif

    switch (ctx->pc) {
        case 0x392cc8u: goto label_392cc8;
        case 0x392d38u: goto label_392d38;
        case 0x392d58u: goto label_392d58;
        case 0x392db4u: goto label_392db4;
        case 0x392de8u: goto label_392de8;
        case 0x392e30u: goto label_392e30;
        case 0x392e48u: goto label_392e48;
        case 0x392f18u: goto label_392f18;
        case 0x392fbcu: goto label_392fbc;
        case 0x392fe8u: goto label_392fe8;
        case 0x393028u: goto label_393028;
        case 0x393070u: goto label_393070;
        case 0x3930b0u: goto label_3930b0;
        case 0x393138u: goto label_393138;
        case 0x393140u: goto label_393140;
        case 0x39316cu: goto label_39316c;
        case 0x3931fcu: goto label_3931fc;
        case 0x393220u: goto label_393220;
        case 0x393258u: goto label_393258;
        case 0x393280u: goto label_393280;
        case 0x393338u: goto label_393338;
        case 0x393388u: goto label_393388;
        case 0x3933d8u: goto label_3933d8;
        case 0x393428u: goto label_393428;
        case 0x393478u: goto label_393478;
        case 0x3934d0u: goto label_3934d0;
        default: break;
    }

    ctx->pc = 0x392c18u;

    // 0x392c18: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x392c18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x392c1c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x392c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x392c20: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x392c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x392c24: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x392c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x392c28: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x392c28u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x392c2c: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x392c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x392c30: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x392c30u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x392c34: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x392c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x392c38: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x392c38u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x392c3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x392c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x392c40: 0x2463a3c8  addiu       $v1, $v1, -0x5C38
    ctx->pc = 0x392c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943688));
    // 0x392c44: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x392c44u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x392c48: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x392c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x392c4c: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x392c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x392c50: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x392c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x392c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x392c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x392c58: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x392c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x392c5c: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x392c5cu;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x392c60: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x392c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x392c64: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x392c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x392c68: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x392c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x392c6c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x392c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x392c70: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x392c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x392c74: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x392c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x392c78: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x392c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x392c7c: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x392c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x392c80: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x392c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x392c84: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x392c84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392c88: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x392c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x392c8c: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x392c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x392c90: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x392c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x392c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x392c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392c98: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x392c98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x392c9c: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x392c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x392ca0: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x392ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x392ca4: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x392CA4u;
    {
        const bool branch_taken_0x392ca4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x392CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CA4u;
        // 0x392ca8: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ca4) {
            ctx->pc = 0x392D0Cu;
            goto label_392d0c;
        }
    }
    ctx->pc = 0x392CACu;
    // 0x392cac: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x392cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x392cb0: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x392cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x392cb4: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x392cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x392cb8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x392cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x392cbc: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x392cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x392cc0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x392cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x392cc4: 0x0  nop
    ctx->pc = 0x392cc4u;
    // NOP
label_392cc8:
    // 0x392cc8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x392cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x392ccc: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x392CCCu;
    {
        const bool branch_taken_0x392ccc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x392CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CCCu;
        // 0x392cd0: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ccc) {
            ctx->pc = 0x392CF0u;
            goto label_392cf0;
        }
    }
    ctx->pc = 0x392CD4u;
    // 0x392cd4: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x392cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x392cd8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x392cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x392cdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x392cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x392ce0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x392ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x392ce4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x392ce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x392ce8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x392CE8u;
    {
        const bool branch_taken_0x392ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CE8u;
        // 0x392cec: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ce8) {
            ctx->pc = 0x392CF4u;
            goto label_392cf4;
        }
    }
    ctx->pc = 0x392CF0u;
label_392cf0:
    // 0x392cf0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x392cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_392cf4:
    // 0x392cf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x392cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x392cf8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x392cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x392cfc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x392CFCu;
    {
        const bool branch_taken_0x392cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CFCu;
        // 0x392d00: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392cfc) {
            ctx->pc = 0x392CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392cc8;
        }
    }
    ctx->pc = 0x392D04u;
    // 0x392d04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392D04u;
    {
        const bool branch_taken_0x392d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D04u;
        // 0x392d08: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d04) {
            ctx->pc = 0x392D28u;
            goto label_392d28;
        }
    }
    ctx->pc = 0x392D0Cu;
label_392d0c:
    // 0x392d0c: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x392d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x392d10: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x392d10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x392d14: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x392d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x392d18: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x392d18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x392d1c: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x392d1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x392d20: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x392d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x392d24: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x392d24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_392d28:
    // 0x392d28: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x392D28u;
    {
        const bool branch_taken_0x392d28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x392D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D28u;
        // 0x392d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d28) {
            ctx->pc = 0x392DB0u;
            goto label_392db0;
        }
    }
    ctx->pc = 0x392D30u;
    // 0x392d30: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x392d30u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x392d34: 0x0  nop
    ctx->pc = 0x392d34u;
    // NOP
label_392d38:
    // 0x392d38: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x392d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x392d3c: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x392D3Cu;
    {
        const bool branch_taken_0x392d3c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x392D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D3Cu;
        // 0x392d40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d3c) {
            ctx->pc = 0x392D94u;
            goto label_392d94;
        }
    }
    ctx->pc = 0x392D44u;
    // 0x392d44: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x392d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x392d48: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x392d48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x392d4c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x392d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x392d50: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x392d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x392d54: 0x0  nop
    ctx->pc = 0x392d54u;
    // NOP
label_392d58:
    // 0x392d58: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x392d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x392d5c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x392d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x392d60: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x392d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x392d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x392d68: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x392d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x392d6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x392d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x392d70: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x392d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x392d74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x392d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x392d78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x392d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x392d7c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x392d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x392d80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x392d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x392d84: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x392D84u;
    {
        const bool branch_taken_0x392d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D84u;
        // 0x392d88: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d84) {
            ctx->pc = 0x392D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392d58;
        }
    }
    ctx->pc = 0x392D8Cu;
    // 0x392d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x392D8Cu;
    {
        const bool branch_taken_0x392d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D8Cu;
        // 0x392d90: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392d8c) {
            ctx->pc = 0x392DA0u;
            goto label_392da0;
        }
    }
    ctx->pc = 0x392D94u;
label_392d94:
    // 0x392d94: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x392d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x392d98: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x392d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x392d9c: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x392d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_392da0:
    // 0x392da0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x392da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392da4: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x392da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x392da8: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x392DA8u;
    {
        const bool branch_taken_0x392da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DA8u;
        // 0x392dac: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392da8) {
            ctx->pc = 0x392D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392d38;
        }
    }
    ctx->pc = 0x392DB0u;
label_392db0:
    // 0x392db0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x392db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_392db4:
    // 0x392db4: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x392db4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x392db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x392db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392dbc: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x392dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x392dc0: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x392DC0u;
    {
        const bool branch_taken_0x392dc0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x392DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392DC0u;
        // 0x392dc4: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392dc0) {
            ctx->pc = 0x392E24u;
            goto label_392e24;
        }
    }
    ctx->pc = 0x392DC8u;
    // 0x392dc8: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x392dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x392dcc: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x392dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x392dd0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x392dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x392dd4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x392dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x392dd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x392dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392ddc: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x392ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x392de0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x392de0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392de4: 0x0  nop
    ctx->pc = 0x392de4u;
    // NOP
label_392de8:
    // 0x392de8: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x392de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x392dec: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x392decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x392df0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x392df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x392df4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x392df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x392df8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392df8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x392dfc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x392dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x392e00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x392e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x392e04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x392e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x392e08: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x392e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x392e0c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x392e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x392e10: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x392e10u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x392e14: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392e14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392e18: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x392e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x392e1c: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x392E1Cu;
    {
        const bool branch_taken_0x392e1c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x392E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E1Cu;
        // 0x392e20: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e1c) {
            ctx->pc = 0x392DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392de8;
        }
    }
    ctx->pc = 0x392E24u;
label_392e24:
    // 0x392e24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x392e24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x392e28: 0xc0e4eea  jal         func_393BA8
    ctx->pc = 0x392E28u;
    SET_GPR_U32(ctx, 31, 0x392E30u);
    ctx->pc = 0x392E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E28u;
    // 0x392e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393BA8u, 0x392E28u, 0x392E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E30u;
label_392e30:
    // 0x392e30: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x392e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x392e34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x392e38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x392e38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x392e3c: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x392e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x392e40: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x392E40u;
    SET_GPR_U32(ctx, 31, 0x392E48u);
    ctx->pc = 0x392E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392E40u;
    // 0x392e44: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x392E40u, 0x392E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392E48u;
label_392e48:
    // 0x392e48: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x392e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x392e4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x392e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392e50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x392e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x392e54: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x392e54u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x392e58: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x392e5c: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x392e5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x392e60: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x392e60u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392e64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x392e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x392e68: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x392E68u;
    {
        const bool branch_taken_0x392e68 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x392E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392E68u;
        // 0x392e6c: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392e68) {
            ctx->pc = 0x392EB0u;
            goto label_392eb0;
        }
    }
    ctx->pc = 0x392E70u;
    // 0x392e70: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x392e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x392e74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x392e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x392e78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x392e7c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x392e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x392e80: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x392e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x392e84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x392e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x392e88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x392e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x392e8c: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x392e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x392e90: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x392e90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x392e94: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x392e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x392e98: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x392e98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x392e9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x392e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x392ea0: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x392ea0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x392ea4: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x392ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x392ea8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x392EA8u;
    {
        const bool branch_taken_0x392ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EA8u;
        // 0x392eac: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ea8) {
            ctx->pc = 0x392EECu;
            goto label_392eec;
        }
    }
    ctx->pc = 0x392EB0u;
label_392eb0:
    // 0x392eb0: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x392EB0u;
    {
        const bool branch_taken_0x392eb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x392EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EB0u;
        // 0x392eb4: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392eb0) {
            ctx->pc = 0x392ED0u;
            goto label_392ed0;
        }
    }
    ctx->pc = 0x392EB8u;
    // 0x392eb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x392ebc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x392ec0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x392ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x392ec4: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x392ec4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x392ec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392EC8u;
    {
        const bool branch_taken_0x392ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EC8u;
        // 0x392ecc: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ec8) {
            ctx->pc = 0x392EECu;
            goto label_392eec;
        }
    }
    ctx->pc = 0x392ED0u;
label_392ed0:
    // 0x392ed0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x392ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x392ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x392ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392ed8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x392ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392edc: 0x0  nop
    ctx->pc = 0x392edcu;
    // NOP
    // 0x392ee0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x392EE0u;
    {
        const bool branch_taken_0x392ee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x392EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EE0u;
        // 0x392ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ee0) {
            ctx->pc = 0x392EECu;
            goto label_392eec;
        }
    }
    ctx->pc = 0x392EE8u;
    // 0x392ee8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x392ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_392eec:
    // 0x392eec: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x392eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x392ef0: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x392EF0u;
    {
        const bool branch_taken_0x392ef0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x392ef0) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392EF8u;
    // 0x392ef8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x392ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x392efc: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x392EFCu;
    {
        const bool branch_taken_0x392efc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x392F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392EFCu;
        // 0x392f00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392efc) {
            ctx->pc = 0x392F44u;
            goto label_392f44;
        }
    }
    ctx->pc = 0x392F04u;
    // 0x392f04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x392f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x392f08: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x392f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x392f0c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x392f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392f10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x392f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392f14: 0x0  nop
    ctx->pc = 0x392f14u;
    // NOP
label_392f18:
    // 0x392f18: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x392F18u;
    {
        const bool branch_taken_0x392f18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x392F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F18u;
        // 0x392f1c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f18) {
            ctx->pc = 0x392F30u;
            goto label_392f30;
        }
    }
    ctx->pc = 0x392F20u;
    // 0x392f20: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x392F20u;
    {
        const bool branch_taken_0x392f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F20u;
        // 0x392f24: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f20) {
            ctx->pc = 0x392F38u;
            goto label_392f38;
        }
    }
    ctx->pc = 0x392F28u;
    // 0x392f28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x392F28u;
    {
        const bool branch_taken_0x392f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F28u;
        // 0x392f2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f28) {
            ctx->pc = 0x392F34u;
            goto label_392f34;
        }
    }
    ctx->pc = 0x392F30u;
label_392f30:
    // 0x392f30: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x392f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_392f34:
    // 0x392f34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x392f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_392f38:
    // 0x392f38: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x392f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x392f3c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x392F3Cu;
    {
        const bool branch_taken_0x392f3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x392F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F3Cu;
        // 0x392f40: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f3c) {
            ctx->pc = 0x392F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392f18;
        }
    }
    ctx->pc = 0x392F44u;
label_392f44:
    // 0x392f44: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x392F44u;
    {
        const bool branch_taken_0x392f44 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x392F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F44u;
        // 0x392f48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f44) {
            ctx->pc = 0x392F94u;
            goto label_392f94;
        }
    }
    ctx->pc = 0x392F4Cu;
    // 0x392f4c: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x392F4Cu;
    {
        const bool branch_taken_0x392f4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x392F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F4Cu;
        // 0x392f50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f4c) {
            ctx->pc = 0x392F64u;
            goto label_392f64;
        }
    }
    ctx->pc = 0x392F54u;
    // 0x392f54: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x392F54u;
    {
        const bool branch_taken_0x392f54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x392F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F54u;
        // 0x392f58: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f54) {
            ctx->pc = 0x392F7Cu;
            goto label_392f7c;
        }
    }
    ctx->pc = 0x392F5Cu;
    // 0x392f5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x392F5Cu;
    {
        const bool branch_taken_0x392f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392f5c) {
            ctx->pc = 0x392F9Cu;
            goto label_392f9c;
        }
    }
    ctx->pc = 0x392F64u;
label_392f64:
    // 0x392f64: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x392f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x392f68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x392f6c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x392f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x392f70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x392f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x392f74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x392F74u;
    {
        const bool branch_taken_0x392f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392F74u;
        // 0x392f78: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f74) {
            ctx->pc = 0x392F90u;
            goto label_392f90;
        }
    }
    ctx->pc = 0x392F7Cu;
label_392f7c:
    // 0x392f7c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x392f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x392f80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x392f84: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x392f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x392f88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x392f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x392f8c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x392f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_392f90:
    // 0x392f90: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x392f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_392f94:
    // 0x392f94: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x392f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x392f98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x392f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392f9c:
    // 0x392f9c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x392F9Cu;
    {
        const bool branch_taken_0x392f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x392f9c) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392FA4u;
    // 0x392fa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x392fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x392fa8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x392fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x392fac: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x392FACu;
    {
        const bool branch_taken_0x392fac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x392FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FACu;
        // 0x392fb0: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fac) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392FB4u;
    // 0x392fb4: 0xc0e4eea  jal         func_393BA8
    ctx->pc = 0x392FB4u;
    SET_GPR_U32(ctx, 31, 0x392FBCu);
    ctx->pc = 0x392FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392FB4u;
    // 0x392fb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393BA8u, 0x392FB4u, 0x392FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392FBCu;
label_392fbc:
    // 0x392fbc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x392fbcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_392fc0:
    // 0x392fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x392fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392fc4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x392fc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392fc8: 0x0  nop
    ctx->pc = 0x392fc8u;
    // NOP
    // 0x392fcc: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x392FCCu;
    {
        const bool branch_taken_0x392fcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x392FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FCCu;
        // 0x392fd0: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fcc) {
            ctx->pc = 0x39311Cu;
            goto label_39311c;
        }
    }
    ctx->pc = 0x392FD4u;
    // 0x392fd4: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x392fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x392fd8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x392FD8u;
    {
        const bool branch_taken_0x392fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392FD8u;
        // 0x392fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392fd8) {
            ctx->pc = 0x393004u;
            goto label_393004;
        }
    }
    ctx->pc = 0x392FE0u;
    // 0x392fe0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x392fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x392fe4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x392fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_392fe8:
    // 0x392fe8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x392fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x392fec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x392fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x392ff0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x392ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x392ff4: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x392ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x392ff8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x392ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x392ffc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x392FFCu;
    {
        const bool branch_taken_0x392ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392ffc) {
            ctx->pc = 0x392FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392fe8;
        }
    }
    ctx->pc = 0x393004u;
label_393004:
    // 0x393004: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x393004u;
    {
        const bool branch_taken_0x393004 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x393008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393004u;
        // 0x393008: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393004) {
            ctx->pc = 0x393110u;
            goto label_393110;
        }
    }
    ctx->pc = 0x39300Cu;
    // 0x39300c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39300cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x393010: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x393010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x393014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x393014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x393018: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x393018u;
    {
        const bool branch_taken_0x393018 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393018u;
        // 0x39301c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393018) {
            ctx->pc = 0x39304Cu;
            goto label_39304c;
        }
    }
    ctx->pc = 0x393020u;
    // 0x393020: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x393020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x393024: 0x0  nop
    ctx->pc = 0x393024u;
    // NOP
label_393028:
    // 0x393028: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x393028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x39302c: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x39302cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x393030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x393030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x393034: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x393034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x393038: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x393038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39303c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39303Cu;
    {
        const bool branch_taken_0x39303c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39303c) {
            ctx->pc = 0x393028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393028;
        }
    }
    ctx->pc = 0x393044u;
    // 0x393044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x393044u;
    {
        const bool branch_taken_0x393044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393044u;
        // 0x393048: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393044) {
            ctx->pc = 0x393054u;
            goto label_393054;
        }
    }
    ctx->pc = 0x39304Cu;
label_39304c:
    // 0x39304c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x39304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x393050: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x393050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_393054:
    // 0x393054: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x393054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393058: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x393058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x39305c: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x39305Cu;
    {
        const bool branch_taken_0x39305c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39305Cu;
        // 0x393060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39305c) {
            ctx->pc = 0x392DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392db4;
        }
    }
    ctx->pc = 0x393064u;
    // 0x393064: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x393064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x393068: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x393068u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39306c: 0x0  nop
    ctx->pc = 0x39306cu;
    // NOP
label_393070:
    // 0x393070: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x393070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x393074: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x393074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x393078: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x393078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39307c: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x39307cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x393080: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x393080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x393084: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x393084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x393088: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x393088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39308c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39308cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x393090: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x393090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x393094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x393094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393098: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x393098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39309c: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x39309Cu;
    {
        const bool branch_taken_0x39309c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3930A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39309Cu;
        // 0x3930a0: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39309c) {
            ctx->pc = 0x3930ECu;
            goto label_3930ec;
        }
    }
    ctx->pc = 0x3930A4u;
    // 0x3930a4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3930a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3930a8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x3930a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3930ac: 0x0  nop
    ctx->pc = 0x3930acu;
    // NOP
label_3930b0:
    // 0x3930b0: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x3930b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3930b4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x3930b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3930b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3930b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3930bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3930bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3930c0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x3930c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3930c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3930c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3930c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3930c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3930cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3930ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3930d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3930d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3930d4: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x3930d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3930d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3930d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3930dc: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3930DCu;
    {
        const bool branch_taken_0x3930dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3930E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930DCu;
        // 0x3930e0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930dc) {
            ctx->pc = 0x3930B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3930b0;
        }
    }
    ctx->pc = 0x3930E4u;
    // 0x3930e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3930E4u;
    {
        const bool branch_taken_0x3930e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3930E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930E4u;
        // 0x3930e8: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930e4) {
            ctx->pc = 0x3930F8u;
            goto label_3930f8;
        }
    }
    ctx->pc = 0x3930ECu;
label_3930ec:
    // 0x3930ec: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3930ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3930f0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x3930f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3930f4: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x3930f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_3930f8:
    // 0x3930f8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3930f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3930fc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x3930fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x393100: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x393100u;
    {
        const bool branch_taken_0x393100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393100u;
        // 0x393104: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393100) {
            ctx->pc = 0x393070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393070;
        }
    }
    ctx->pc = 0x393108u;
    // 0x393108: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x393108u;
    {
        const bool branch_taken_0x393108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393108u;
        // 0x39310c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393108) {
            ctx->pc = 0x392DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392db4;
        }
    }
    ctx->pc = 0x393110u;
label_393110:
    // 0x393110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x393110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393114: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x393114u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x393118: 0x0  nop
    ctx->pc = 0x393118u;
    // NOP
label_39311c:
    // 0x39311c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x39311Cu;
    {
        const bool branch_taken_0x39311c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x393120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39311Cu;
        // 0x393120: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39311c) {
            ctx->pc = 0x393164u;
            goto label_393164;
        }
    }
    ctx->pc = 0x393124u;
    // 0x393124: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x393124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x393128: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x393128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x39312c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x39312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x393130: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x393130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x393134: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
label_393138:
    if (ctx->pc == 0x393138u) {
        ctx->pc = 0x393138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393134u;
        // 0x393138: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39313Cu;
        goto label_fallthrough_0x393134;
    }
    ctx->pc = 0x393134u;
    {
        const bool branch_taken_0x393134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x393138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393134u;
        // 0x393138: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393134) {
            ctx->pc = 0x3931E8u;
            goto label_3931e8;
        }
    }
label_fallthrough_0x393134:
    ctx->pc = 0x39313Cu;
    // 0x39313c: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x39313cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_393140:
    // 0x393140: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x393140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x393144: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x393144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x393148: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x393148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x39314c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x39314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x393150: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x393150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x393154: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x393154u;
    {
        const bool branch_taken_0x393154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x393154) {
            ctx->pc = 0x393140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393140;
        }
    }
    ctx->pc = 0x39315Cu;
    // 0x39315c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x39315Cu;
    {
        const bool branch_taken_0x39315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39315c) {
            ctx->pc = 0x3931ECu;
            goto label_3931ec;
        }
    }
    ctx->pc = 0x393164u;
label_393164:
    // 0x393164: 0xc0e4eea  jal         func_393BA8
    ctx->pc = 0x393164u;
    SET_GPR_U32(ctx, 31, 0x39316Cu);
    ctx->pc = 0x393168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393164u;
    // 0x393168: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393BA8u, 0x393164u, 0x39316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39316Cu;
label_39316c:
    // 0x39316c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x39316cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x393170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x393170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393174: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x393174u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x393178: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x393178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39317c: 0x0  nop
    ctx->pc = 0x39317cu;
    // NOP
    // 0x393180: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x393180u;
    {
        const bool branch_taken_0x393180 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x393184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393180u;
        // 0x393184: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393180) {
            ctx->pc = 0x3931D4u;
            goto label_3931d4;
        }
    }
    ctx->pc = 0x393188u;
    // 0x393188: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x393188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x39318c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39318cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393190: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x393190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x393194: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x393194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x393198: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x393198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x39319c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x39319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3931a0: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x3931a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x3931a4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3931a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3931a8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3931a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3931ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3931acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3931b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3931b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3931b4: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x3931b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3931b8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3931b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3931bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3931bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3931c0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3931c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3931c4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3931c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3931c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3931c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3931cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3931CCu;
    {
        const bool branch_taken_0x3931cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3931D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931CCu;
        // 0x3931d0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931cc) {
            ctx->pc = 0x3931ECu;
            goto label_3931ec;
        }
    }
    ctx->pc = 0x3931D4u;
label_3931d4:
    // 0x3931d4: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x3931d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x3931d8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3931d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3931dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3931dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3931e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3931E0u;
    {
        const bool branch_taken_0x3931e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931E0u;
        // 0x3931e4: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3931e0) {
            ctx->pc = 0x3931ECu;
            goto label_3931ec;
        }
    }
    ctx->pc = 0x3931E8u;
label_3931e8:
    // 0x3931e8: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x3931e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_3931ec:
    // 0x3931ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3931ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3931f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3931f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3931f4: 0xc0e4eea  jal         func_393BA8
    ctx->pc = 0x3931F4u;
    SET_GPR_U32(ctx, 31, 0x3931FCu);
    ctx->pc = 0x3931F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3931F4u;
    // 0x3931f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393BA8u, 0x3931F4u, 0x3931FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3931FCu;
label_3931fc:
    // 0x3931fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3931fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393200: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x393200u;
    {
        const bool branch_taken_0x393200 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x393204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393200u;
        // 0x393204: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393200) {
            ctx->pc = 0x393248u;
            goto label_393248;
        }
    }
    ctx->pc = 0x393208u;
    // 0x393208: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x393208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x39320c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x39320cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x393210: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x393210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393214: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x393214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x393218: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x393218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x39321c: 0x0  nop
    ctx->pc = 0x39321cu;
    // NOP
label_393220:
    // 0x393220: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x393220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x393224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x393224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x393228: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x393228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x39322c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x39322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x393230: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x393230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x393234: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x393234u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x393238: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x393238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x39323c: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x39323Cu;
    {
        const bool branch_taken_0x39323c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x393240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39323Cu;
        // 0x393240: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39323c) {
            ctx->pc = 0x393220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393220;
        }
    }
    ctx->pc = 0x393244u;
    // 0x393244: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x393244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_393248:
    // 0x393248: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x393248u;
    {
        const bool branch_taken_0x393248 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x393248) {
            ctx->pc = 0x39324Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393248u;
            // 0x39324c: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3932E8u;
            goto label_3932e8;
        }
    }
    ctx->pc = 0x393250u;
    // 0x393250: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x393250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x393254: 0x0  nop
    ctx->pc = 0x393254u;
    // NOP
label_393258:
    // 0x393258: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x393258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x39325c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x39325cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x393260: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x393260u;
    {
        const bool branch_taken_0x393260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393260u;
        // 0x393264: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393260) {
            ctx->pc = 0x3932C8u;
            goto label_3932c8;
        }
    }
    ctx->pc = 0x393268u;
    // 0x393268: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x393268u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x39326c: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x39326Cu;
    {
        const bool branch_taken_0x39326c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x393270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39326Cu;
        // 0x393270: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39326c) {
            ctx->pc = 0x3932CCu;
            goto label_3932cc;
        }
    }
    ctx->pc = 0x393274u;
    // 0x393274: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x393274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x393278: 0x3c0b0048  lui         $t3, 0x48
    ctx->pc = 0x393278u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)72 << 16));
    // 0x39327c: 0x0  nop
    ctx->pc = 0x39327cu;
    // NOP
label_393280:
    // 0x393280: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x393280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x393284: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x393284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x393288: 0x2562a3d8  addiu       $v0, $t3, -0x5C28
    ctx->pc = 0x393288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294943704));
    // 0x39328c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39328cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x393290: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x393290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x393294: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x393294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x393298: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x393298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39329c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x39329cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3932a0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3932a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3932a4: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x3932a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3932a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3932a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3932ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3932ACu;
    {
        const bool branch_taken_0x3932ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3932B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932ACu;
        // 0x3932b0: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932ac) {
            ctx->pc = 0x3932D0u;
            goto label_3932d0;
        }
    }
    ctx->pc = 0x3932B4u;
    // 0x3932b4: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x3932b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x3932b8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3932B8u;
    {
        const bool branch_taken_0x3932b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932B8u;
        // 0x3932bc: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932b8) {
            ctx->pc = 0x393280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393280;
        }
    }
    ctx->pc = 0x3932C0u;
    // 0x3932c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3932C0u;
    {
        const bool branch_taken_0x3932c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932C0u;
        // 0x3932c4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932c0) {
            ctx->pc = 0x3932D8u;
            goto label_3932d8;
        }
    }
    ctx->pc = 0x3932C8u;
label_3932c8:
    // 0x3932c8: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x3932c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3932cc:
    // 0x3932cc: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x3932ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3932d0:
    // 0x3932d0: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x3932d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3932d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3932d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3932d8:
    // 0x3932d8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3932d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3932dc: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3932DCu;
    {
        const bool branch_taken_0x3932dc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x3932E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932DCu;
        // 0x3932e0: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932dc) {
            ctx->pc = 0x393258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393258;
        }
    }
    ctx->pc = 0x3932E4u;
    // 0x3932e4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x3932e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_3932e8:
    // 0x3932e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3932E8u;
    {
        const bool branch_taken_0x3932e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932E8u;
        // 0x3932ec: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932e8) {
            ctx->pc = 0x393308u;
            goto label_393308;
        }
    }
    ctx->pc = 0x3932F0u;
    // 0x3932f0: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3932F0u;
    {
        const bool branch_taken_0x3932f0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x3932f0) {
            ctx->pc = 0x3932F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3932F0u;
            // 0x3932f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393370u;
            goto label_393370;
        }
    }
    ctx->pc = 0x3932F8u;
    // 0x3932f8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3932F8u;
    {
        const bool branch_taken_0x3932f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3932FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932F8u;
        // 0x3932fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3932f8) {
            ctx->pc = 0x393320u;
            goto label_393320;
        }
    }
    ctx->pc = 0x393300u;
    // 0x393300: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x393300u;
    {
        const bool branch_taken_0x393300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393300u;
        // 0x393304: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393300) {
            ctx->pc = 0x393534u;
            goto label_393534;
        }
    }
    ctx->pc = 0x393308u;
label_393308:
    // 0x393308: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x393308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x39330c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x393310: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x393310u;
    {
        const bool branch_taken_0x393310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x393314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393310u;
        // 0x393314: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393310) {
            ctx->pc = 0x393414u;
            goto label_393414;
        }
    }
    ctx->pc = 0x393318u;
    // 0x393318: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x393318u;
    {
        const bool branch_taken_0x393318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393318u;
        // 0x39331c: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393318) {
            ctx->pc = 0x393534u;
            goto label_393534;
        }
    }
    ctx->pc = 0x393320u;
label_393320:
    // 0x393320: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x393320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393324: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x393324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x393328: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x393328u;
    {
        const bool branch_taken_0x393328 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x393328) {
            ctx->pc = 0x39332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393328u;
            // 0x39332c: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x393358u;
            goto label_393358;
        }
    }
    ctx->pc = 0x393330u;
    // 0x393330: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x393330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x393334: 0x0  nop
    ctx->pc = 0x393334u;
    // NOP
label_393338:
    // 0x393338: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x393338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x39333c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x39333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x393340: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x393340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x393344: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x393344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x393348: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x393348u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x39334c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39334Cu;
    {
        const bool branch_taken_0x39334c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x39334c) {
            ctx->pc = 0x393338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393338;
        }
    }
    ctx->pc = 0x393354u;
    // 0x393354: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x393354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_393358:
    // 0x393358: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x393358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x39335c: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x39335Cu;
    {
        const bool branch_taken_0x39335c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x393360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39335Cu;
        // 0x393360: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39335c) {
            ctx->pc = 0x393530u;
            goto label_393530;
        }
    }
    ctx->pc = 0x393364u;
    // 0x393364: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x393364u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x393368: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x393368u;
    {
        const bool branch_taken_0x393368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393368u;
        // 0x39336c: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393368) {
            ctx->pc = 0x393530u;
            goto label_393530;
        }
    }
    ctx->pc = 0x393370u;
label_393370:
    // 0x393370: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x393370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x393374: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x393374u;
    {
        const bool branch_taken_0x393374 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x393378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393374u;
        // 0x393378: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393374) {
            ctx->pc = 0x3933ACu;
            goto label_3933ac;
        }
    }
    ctx->pc = 0x39337Cu;
    // 0x39337c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x39337cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x393380: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x393380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x393384: 0x0  nop
    ctx->pc = 0x393384u;
    // NOP
label_393388:
    // 0x393388: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x393388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x39338c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x39338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x393390: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x393390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x393394: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x393394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x393398: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x393398u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x39339c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39339Cu;
    {
        const bool branch_taken_0x39339c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x39339c) {
            ctx->pc = 0x393388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393388;
        }
    }
    ctx->pc = 0x3933A4u;
    // 0x3933a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3933A4u;
    {
        const bool branch_taken_0x3933a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3933A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933A4u;
        // 0x3933a8: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933a4) {
            ctx->pc = 0x3933B4u;
            goto label_3933b4;
        }
    }
    ctx->pc = 0x3933ACu;
label_3933ac:
    // 0x3933ac: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x3933acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3933b0: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x3933b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_3933b4:
    // 0x3933b4: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x3933b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3933b8: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3933B8u;
    {
        const bool branch_taken_0x3933b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3933b8) {
            ctx->pc = 0x3933BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3933B8u;
            // 0x3933bc: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3933CCu;
            goto label_3933cc;
        }
    }
    ctx->pc = 0x3933C0u;
    // 0x3933c0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x3933c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x3933c4: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x3933c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x3933c8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3933c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3933cc:
    // 0x3933cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3933CCu;
    {
        const bool branch_taken_0x3933cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3933D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933CCu;
        // 0x3933d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933cc) {
            ctx->pc = 0x3933F8u;
            goto label_3933f8;
        }
    }
    ctx->pc = 0x3933D4u;
    // 0x3933d4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3933d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3933d8:
    // 0x3933d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3933d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3933dc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3933dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3933e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3933e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3933e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3933e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3933e8: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x3933e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3933ec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3933ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3933f0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3933F0u;
    {
        const bool branch_taken_0x3933f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3933f0) {
            ctx->pc = 0x3933D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3933d8;
        }
    }
    ctx->pc = 0x3933F8u;
label_3933f8:
    // 0x3933f8: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x3933f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x3933fc: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x3933fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x393400: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x393400u;
    {
        const bool branch_taken_0x393400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393400u;
        // 0x393404: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393400) {
            ctx->pc = 0x393530u;
            goto label_393530;
        }
    }
    ctx->pc = 0x393408u;
    // 0x393408: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x393408u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x39340c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x39340Cu;
    {
        const bool branch_taken_0x39340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39340Cu;
        // 0x393410: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39340c) {
            ctx->pc = 0x393530u;
            goto label_393530;
        }
    }
    ctx->pc = 0x393414u;
label_393414:
    // 0x393414: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x393414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393418: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x393418u;
    {
        const bool branch_taken_0x393418 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x39341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393418u;
        // 0x39341c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393418) {
            ctx->pc = 0x393468u;
            goto label_393468;
        }
    }
    ctx->pc = 0x393420u;
    // 0x393420: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x393420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x393424: 0x0  nop
    ctx->pc = 0x393424u;
    // NOP
label_393428:
    // 0x393428: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x393428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x39342c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x39342cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x393430: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x393430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x393434: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x393434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x393438: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x393438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x39343c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x39343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x393440: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x393440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x393444: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x393444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393448: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x393448u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x39344c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x39344cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x393450: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x393450u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x393454: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x393454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x393458: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x393458u;
    {
        const bool branch_taken_0x393458 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x39345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393458u;
        // 0x39345c: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393458) {
            ctx->pc = 0x393428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393428;
        }
    }
    ctx->pc = 0x393460u;
    // 0x393460: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x393460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393464: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x393464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_393468:
    // 0x393468: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x393468u;
    {
        const bool branch_taken_0x393468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x393468) {
            ctx->pc = 0x39346Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393468u;
            // 0x39346c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3934B8u;
            goto label_3934b8;
        }
    }
    ctx->pc = 0x393470u;
    // 0x393470: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x393470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x393474: 0x0  nop
    ctx->pc = 0x393474u;
    // NOP
label_393478:
    // 0x393478: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x393478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x39347c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x39347cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x393480: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x393480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x393484: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x393484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x393488: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x393488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x39348c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x39348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x393490: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x393490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x393494: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x393494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393498: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x393498u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x39349c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x39349cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3934a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3934a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3934a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3934a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3934a8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3934a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3934ac: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3934ACu;
    {
        const bool branch_taken_0x3934ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3934B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934ACu;
        // 0x3934b0: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934ac) {
            ctx->pc = 0x393478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393478;
        }
    }
    ctx->pc = 0x3934B4u;
    // 0x3934b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3934b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3934b8:
    // 0x3934b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3934b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3934bc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3934bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3934c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3934C0u;
    {
        const bool branch_taken_0x3934c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3934C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934C0u;
        // 0x3934c4: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934c0) {
            ctx->pc = 0x3934F8u;
            goto label_3934f8;
        }
    }
    ctx->pc = 0x3934C8u;
    // 0x3934c8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x3934c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3934cc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3934ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3934d0:
    // 0x3934d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3934d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3934d4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3934d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3934d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3934d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3934dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3934dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3934e0: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x3934e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3934e4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3934e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3934e8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3934E8u;
    {
        const bool branch_taken_0x3934e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3934e8) {
            ctx->pc = 0x3934D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3934d0;
        }
    }
    ctx->pc = 0x3934F0u;
    // 0x3934f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3934F0u;
    {
        const bool branch_taken_0x3934f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3934F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3934F0u;
        // 0x3934f4: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3934f0) {
            ctx->pc = 0x393500u;
            goto label_393500;
        }
    }
    ctx->pc = 0x3934F8u;
label_3934f8:
    // 0x3934f8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3934f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3934fc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x3934fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_393500:
    // 0x393500: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x393500u;
    {
        const bool branch_taken_0x393500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x393500) {
            ctx->pc = 0x393504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393500u;
            // 0x393504: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x393518u;
            goto label_393518;
        }
    }
    ctx->pc = 0x393508u;
    // 0x393508: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x393508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x39350c: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x39350cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x393510: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x393510u;
    {
        const bool branch_taken_0x393510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393510u;
        // 0x393514: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x393510) {
            ctx->pc = 0x39352Cu;
            goto label_39352c;
        }
    }
    ctx->pc = 0x393518u;
label_393518:
    // 0x393518: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x393518u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x39351c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x39351cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x393520: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x393520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x393524: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x393524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x393528: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x393528u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_39352c:
    // 0x39352c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39352cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_393530:
    // 0x393530: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x393530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_393534:
    // 0x393534: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x393534u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x393538: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x393538u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x39353c: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x39353cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x393540: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x393540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x393544: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x393544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x393548: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x393548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x39354c: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x39354cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x393550: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x393550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x393554: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x393554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x393558: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x393558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39355c: 0x3e00008  jr          $ra
    ctx->pc = 0x39355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39355Cu;
        // 0x393560: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393564u;
    // 0x393564: 0x0  nop
    ctx->pc = 0x393564u;
    // NOP
    ctx->pc = 0x393568u;
}
