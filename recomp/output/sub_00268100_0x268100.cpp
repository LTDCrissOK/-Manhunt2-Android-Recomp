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

// Function: sub_00268100
// Address: 0x268100 - 0x2681f8
void sub_00268100_0x268100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268100_0x268100");
#endif

    switch (ctx->pc) {
        case 0x268184u: goto label_268184;
        case 0x2681a0u: goto label_2681a0;
        case 0x2681b8u: goto label_2681b8;
        default: break;
    }

    ctx->pc = 0x268100u;

    // 0x268100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x268100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x268104: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x268104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x268108: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x268108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x26810c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26810cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268110: 0x10a00033  beqz        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x268110u;
    {
        const bool branch_taken_0x268110 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x268114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268110u;
        // 0x268114: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268110) {
            ctx->pc = 0x2681E0u;
            goto label_2681e0;
        }
    }
    ctx->pc = 0x268118u;
    // 0x268118: 0xae050278  sw          $a1, 0x278($s0)
    ctx->pc = 0x268118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 5));
    // 0x26811c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x26811cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x268120: 0x8ca50104  lw          $a1, 0x104($a1)
    ctx->pc = 0x268120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x268124: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x268124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x268128: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x268128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26812c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x26812cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x268130: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x268130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x268134: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x268134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268138: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x268138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26813c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26813cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x268140: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x268140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x268144: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x268144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268148: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x268148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26814c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x26814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268150: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x268150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268154: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x268154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268158: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x268158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26815c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26815cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268160: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x268160u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x268164: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x268164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268168: 0xfa010280  sqc2        $vf1, 0x280($s0)
    ctx->pc = 0x268168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 640), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26816c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x26816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x268170: 0x8c45011c  lw          $a1, 0x11C($v0)
    ctx->pc = 0x268170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x268174: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x268174u;
    {
        const bool branch_taken_0x268174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x268178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268174u;
        // 0x268178: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268174) {
            ctx->pc = 0x26818Cu;
            goto label_26818c;
        }
    }
    ctx->pc = 0x26817Cu;
    // 0x26817c: 0xc0f7e76  jal         func_3DF9D8
    ctx->pc = 0x26817Cu;
    SET_GPR_U32(ctx, 31, 0x268184u);
    ctx->pc = 0x268180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26817Cu;
    // 0x268180: 0x24843500  addiu       $a0, $a0, 0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF9D8u, 0x26817Cu, 0x268184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268184u;
label_268184:
    // 0x268184: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x268184u;
    {
        const bool branch_taken_0x268184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268184) {
            ctx->pc = 0x268188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268184u;
            // 0x268188: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2681E4u;
            goto label_2681e4;
        }
    }
    ctx->pc = 0x26818Cu;
label_26818c:
    // 0x26818c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x26818cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x268190: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x268190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x268194: 0x24513510  addiu       $s1, $v0, 0x3510
    ctx->pc = 0x268194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x268198: 0xc0f7e76  jal         func_3DF9D8
    ctx->pc = 0x268198u;
    SET_GPR_U32(ctx, 31, 0x2681A0u);
    ctx->pc = 0x26819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268198u;
    // 0x26819c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF9D8u, 0x268198u, 0x2681A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681A0u;
label_2681a0:
    // 0x2681a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2681A0u;
    {
        const bool branch_taken_0x2681a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681A0u;
        // 0x2681a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681a0) {
            ctx->pc = 0x2681E0u;
            goto label_2681e0;
        }
    }
    ctx->pc = 0x2681A8u;
    // 0x2681a8: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x2681a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x2681ac: 0x8e05011c  lw          $a1, 0x11C($s0)
    ctx->pc = 0x2681acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2681b0: 0xc0f7e82  jal         func_3DFA08
    ctx->pc = 0x2681B0u;
    SET_GPR_U32(ctx, 31, 0x2681B8u);
    ctx->pc = 0x2681B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2681B0u;
    // 0x2681b4: 0x24c63500  addiu       $a2, $a2, 0x3500 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFA08u, 0x2681B0u, 0x2681B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2681B8u;
label_2681b8:
    // 0x2681b8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2681b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2681bc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2681bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2681c0: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2681c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2681c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2681c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2681c8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2681C8u;
    {
        const bool branch_taken_0x2681c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681C8u;
        // 0x2681cc: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681c8) {
            ctx->pc = 0x2681D4u;
            goto label_2681d4;
        }
    }
    ctx->pc = 0x2681D0u;
    // 0x2681d0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2681d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_2681d4:
    // 0x2681d4: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2681d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2681d8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2681d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2681dc: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x2681dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_2681e0:
    // 0x2681e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2681e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2681e4:
    // 0x2681e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2681e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2681e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2681e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2681ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2681ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2681F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681ECu;
        // 0x2681f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2681ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2681F4u;
    // 0x2681f4: 0x0  nop
    ctx->pc = 0x2681f4u;
    // NOP
    ctx->pc = 0x2681f8u;
}
