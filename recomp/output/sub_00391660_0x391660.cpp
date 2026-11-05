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

// Function: sub_00391660
// Address: 0x391660 - 0x3918b0
void sub_00391660_0x391660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391660_0x391660");
#endif

    switch (ctx->pc) {
        case 0x3916ecu: goto label_3916ec;
        case 0x391728u: goto label_391728;
        case 0x391778u: goto label_391778;
        case 0x391808u: goto label_391808;
        case 0x391858u: goto label_391858;
        default: break;
    }

    ctx->pc = 0x391660u;

    // 0x391660: 0x44076800  mfc1        $a3, $f13
    ctx->pc = 0x391660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x391664: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x391664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x391668: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x391668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39166c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x39166cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391670: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x391670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x391674: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x391674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x391678: 0xa34824  and         $t1, $a1, $v1
    ctx->pc = 0x391678u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x39167c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39167cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391680: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x391680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x391684: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x391684u;
    {
        const bool branch_taken_0x391684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x391688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391684u;
        // 0x391688: 0xa92826  xor         $a1, $a1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391684) {
            ctx->pc = 0x3916B0u;
            goto label_3916b0;
        }
    }
    ctx->pc = 0x39168Cu;
    // 0x39168c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x39168cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x391690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391694: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x391694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x391698: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x391698u;
    {
        const bool branch_taken_0x391698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391698u;
        // 0x39169c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391698) {
            ctx->pc = 0x3916B0u;
            goto label_3916b0;
        }
    }
    ctx->pc = 0x3916A0u;
    // 0x3916a0: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x3916a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3916a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3916A4u;
    {
        const bool branch_taken_0x3916a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3916A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916A4u;
        // 0x3916a8: 0xa6102a  slt         $v0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916a4) {
            ctx->pc = 0x3916D0u;
            goto label_3916d0;
        }
    }
    ctx->pc = 0x3916ACu;
    // 0x3916ac: 0x0  nop
    ctx->pc = 0x3916acu;
    // NOP
label_3916b0:
    // 0x3916b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3916b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3916b4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x3916b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3916b8: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x3916b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3916bc: 0x0  nop
    ctx->pc = 0x3916bcu;
    // NOP
    // 0x3916c0: 0x0  nop
    ctx->pc = 0x3916c0u;
    // NOP
    // 0x3916c4: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x3916c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x3916c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3916C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3916C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3916D0u;
label_3916d0:
    // 0x3916d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3916D0u;
    {
        const bool branch_taken_0x3916d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3916d0) {
            ctx->pc = 0x3916E4u;
            goto label_3916e4;
        }
    }
    ctx->pc = 0x3916D8u;
    // 0x3916d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3916d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3916dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3916DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3916DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3916E4u;
label_3916e4:
    // 0x3916e4: 0x14a60008  bne         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3916E4u;
    {
        const bool branch_taken_0x3916e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x3916E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3916E4u;
        // 0x3916e8: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3916e4) {
            ctx->pc = 0x391708u;
            goto label_391708;
        }
    }
    ctx->pc = 0x3916ECu;
label_3916ec:
    // 0x3916ec: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x3916ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x3916f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3916f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3916f4: 0x24429de8  addiu       $v0, $v0, -0x6218
    ctx->pc = 0x3916f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942184));
    // 0x3916f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3916f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3916fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3916fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x391700: 0x3e00008  jr          $ra
    ctx->pc = 0x391700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391700u;
        // 0x391704: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391708u;
label_391708:
    // 0x391708: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39170c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x39170cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x391710: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x391710u;
    {
        const bool branch_taken_0x391710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391710u;
        // 0x391714: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391710) {
            ctx->pc = 0x39174Cu;
            goto label_39174c;
        }
    }
    ctx->pc = 0x391718u;
    // 0x391718: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x391718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x39171c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39171Cu;
    {
        const bool branch_taken_0x39171c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x391720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39171Cu;
        // 0x391720: 0x2408ff82  addiu       $t0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39171c) {
            ctx->pc = 0x391750u;
            goto label_391750;
        }
    }
    ctx->pc = 0x391724u;
    // 0x391724: 0x0  nop
    ctx->pc = 0x391724u;
    // NOP
label_391728:
    // 0x391728: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x391728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x39172c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x391730: 0x0  nop
    ctx->pc = 0x391730u;
    // NOP
    // 0x391734: 0x0  nop
    ctx->pc = 0x391734u;
    // NOP
    // 0x391738: 0x0  nop
    ctx->pc = 0x391738u;
    // NOP
    // 0x39173c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39173Cu;
    {
        const bool branch_taken_0x39173c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x39173c) {
            ctx->pc = 0x391728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391728;
        }
    }
    ctx->pc = 0x391744u;
    // 0x391744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x391744u;
    {
        const bool branch_taken_0x391744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391744u;
        // 0x391748: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391744) {
            ctx->pc = 0x391754u;
            goto label_391754;
        }
    }
    ctx->pc = 0x39174Cu;
label_39174c:
    // 0x39174c: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x39174cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
label_391750:
    // 0x391750: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x391750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_391754:
    // 0x391754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391758: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x391758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x39175c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39175Cu;
    {
        const bool branch_taken_0x39175c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39175Cu;
        // 0x391760: 0x615c3  sra         $v0, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39175c) {
            ctx->pc = 0x39179Cu;
            goto label_39179c;
        }
    }
    ctx->pc = 0x391764u;
    // 0x391764: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x391764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x391768: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x391768u;
    {
        const bool branch_taken_0x391768 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x39176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391768u;
        // 0x39176c: 0x2407ff82  addiu       $a3, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391768) {
            ctx->pc = 0x3917A8u;
            goto label_3917a8;
        }
    }
    ctx->pc = 0x391770u;
    // 0x391770: 0x2904ff82  slti        $a0, $t0, -0x7E
    ctx->pc = 0x391770u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x391774: 0x0  nop
    ctx->pc = 0x391774u;
    // NOP
label_391778:
    // 0x391778: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x391778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x39177c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39177cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x391780: 0x0  nop
    ctx->pc = 0x391780u;
    // NOP
    // 0x391784: 0x0  nop
    ctx->pc = 0x391784u;
    // NOP
    // 0x391788: 0x0  nop
    ctx->pc = 0x391788u;
    // NOP
    // 0x39178c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39178Cu;
    {
        const bool branch_taken_0x39178c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x39178c) {
            ctx->pc = 0x391778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391778;
        }
    }
    ctx->pc = 0x391794u;
    // 0x391794: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x391794u;
    {
        const bool branch_taken_0x391794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x391794) {
            ctx->pc = 0x3917ACu;
            goto label_3917ac;
        }
    }
    ctx->pc = 0x39179Cu;
label_39179c:
    // 0x39179c: 0x2904ff82  slti        $a0, $t0, -0x7E
    ctx->pc = 0x39179cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x3917a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3917A0u;
    {
        const bool branch_taken_0x3917a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917A0u;
        // 0x3917a4: 0x2447ff81  addiu       $a3, $v0, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917a0) {
            ctx->pc = 0x3917ACu;
            goto label_3917ac;
        }
    }
    ctx->pc = 0x3917A8u;
label_3917a8:
    // 0x3917a8: 0x2904ff82  slti        $a0, $t0, -0x7E
    ctx->pc = 0x3917a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_3917ac:
    // 0x3917ac: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3917ACu;
    {
        const bool branch_taken_0x3917ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3917B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917ACu;
        // 0x3917b0: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917ac) {
            ctx->pc = 0x3917CCu;
            goto label_3917cc;
        }
    }
    ctx->pc = 0x3917B4u;
    // 0x3917b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3917b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x3917b8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3917b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3917bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3917bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3917c0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3917c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3917c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3917C4u;
    {
        const bool branch_taken_0x3917c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917C4u;
        // 0x3917c8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917c4) {
            ctx->pc = 0x3917D4u;
            goto label_3917d4;
        }
    }
    ctx->pc = 0x3917CCu;
label_3917cc:
    // 0x3917cc: 0x482023  subu        $a0, $v0, $t0
    ctx->pc = 0x3917ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3917d0: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x3917d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3917d4:
    // 0x3917d4: 0x28eaff82  slti        $t2, $a3, -0x7E
    ctx->pc = 0x3917d4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x3917d8: 0x15400007  bnez        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3917D8u;
    {
        const bool branch_taken_0x3917d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3917DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917D8u;
        // 0x3917dc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917d8) {
            ctx->pc = 0x3917F8u;
            goto label_3917f8;
        }
    }
    ctx->pc = 0x3917E0u;
    // 0x3917e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x3917e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x3917e4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3917e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3917e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3917e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3917ec: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3917ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3917f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3917F0u;
    {
        const bool branch_taken_0x3917f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3917F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3917F0u;
        // 0x3917f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3917f0) {
            ctx->pc = 0x391800u;
            goto label_391800;
        }
    }
    ctx->pc = 0x3917F8u;
label_3917f8:
    // 0x3917f8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x3917f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3917fc: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x3917fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_391800:
    // 0x391800: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x391800u;
    {
        const bool branch_taken_0x391800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391800u;
        // 0x391804: 0x1072023  subu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391800) {
            ctx->pc = 0x39181Cu;
            goto label_39181c;
        }
    }
    ctx->pc = 0x391808u;
label_391808:
    // 0x391808: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x391808u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x39180c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39180Cu;
    {
        const bool branch_taken_0x39180c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x391810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39180Cu;
        // 0x391810: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39180c) {
            ctx->pc = 0x39181Cu;
            goto label_39181c;
        }
    }
    ctx->pc = 0x391814u;
    // 0x391814: 0x1060ffb5  beqz        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x391814u;
    {
        const bool branch_taken_0x391814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x391818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391814u;
        // 0x391818: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391814) {
            ctx->pc = 0x3916ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3916ec;
        }
    }
    ctx->pc = 0x39181Cu;
label_39181c:
    // 0x39181c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39181cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391820: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x391820u;
    {
        const bool branch_taken_0x391820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391820u;
        // 0x391824: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391820) {
            ctx->pc = 0x391808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391808;
        }
    }
    ctx->pc = 0x391828u;
    // 0x391828: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x391828u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x39182c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x39182cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x391830: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x391830u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x391834: 0x10a0ffad  beqz        $a1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x391834u;
    {
        const bool branch_taken_0x391834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x391838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391834u;
        // 0x391838: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391834) {
            ctx->pc = 0x3916ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3916ec;
        }
    }
    ctx->pc = 0x39183Cu;
    // 0x39183c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x391840: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x391840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x391844: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x391844u;
    {
        const bool branch_taken_0x391844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391844) {
            ctx->pc = 0x391878u;
            goto label_391878;
        }
    }
    ctx->pc = 0x39184Cu;
    // 0x39184c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x39184cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x391850: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x391850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x391854: 0x0  nop
    ctx->pc = 0x391854u;
    // NOP
label_391858:
    // 0x391858: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x391858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39185c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x39185cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x391860: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x391860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x391864: 0x0  nop
    ctx->pc = 0x391864u;
    // NOP
    // 0x391868: 0x0  nop
    ctx->pc = 0x391868u;
    // NOP
    // 0x39186c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39186Cu;
    {
        const bool branch_taken_0x39186c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39186c) {
            ctx->pc = 0x391858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391858;
        }
    }
    ctx->pc = 0x391874u;
    // 0x391874: 0x28eaff82  slti        $t2, $a3, -0x7E
    ctx->pc = 0x391874u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_391878:
    // 0x391878: 0x15400007  bnez        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x391878u;
    {
        const bool branch_taken_0x391878 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x39187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391878u;
        // 0x39187c: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391878) {
            ctx->pc = 0x391898u;
            goto label_391898;
        }
    }
    ctx->pc = 0x391880u;
    // 0x391880: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x391880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x391884: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x391884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x391888: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x391888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39188c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x39188cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x391890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x391890u;
    {
        const bool branch_taken_0x391890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391890u;
        // 0x391894: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391890) {
            ctx->pc = 0x3918A0u;
            goto label_3918a0;
        }
    }
    ctx->pc = 0x391898u;
label_391898:
    // 0x391898: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x391898u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x39189c: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x39189cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3918a0:
    // 0x3918a0: 0xa92025  or          $a0, $a1, $t1
    ctx->pc = 0x3918a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x3918a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3918a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3918a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3918A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3918A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3918B0u;
}
