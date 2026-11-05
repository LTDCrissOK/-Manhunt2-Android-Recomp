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

// Function: sub_0015CC38
// Address: 0x15cc38 - 0x15ce88
void sub_0015CC38_0x15cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CC38_0x15cc38");
#endif

    switch (ctx->pc) {
        case 0x15cc38u: goto label_15cc38;
        case 0x15cc3cu: goto label_15cc3c;
        case 0x15cc40u: goto label_15cc40;
        case 0x15cc44u: goto label_15cc44;
        case 0x15cc48u: goto label_15cc48;
        case 0x15cc4cu: goto label_15cc4c;
        case 0x15cc50u: goto label_15cc50;
        case 0x15cc54u: goto label_15cc54;
        case 0x15cc58u: goto label_15cc58;
        case 0x15cc5cu: goto label_15cc5c;
        case 0x15cc60u: goto label_15cc60;
        case 0x15cc64u: goto label_15cc64;
        case 0x15cc68u: goto label_15cc68;
        case 0x15cc6cu: goto label_15cc6c;
        case 0x15cc70u: goto label_15cc70;
        case 0x15cc74u: goto label_15cc74;
        case 0x15cc78u: goto label_15cc78;
        case 0x15cc7cu: goto label_15cc7c;
        case 0x15cc80u: goto label_15cc80;
        case 0x15cc84u: goto label_15cc84;
        case 0x15cc88u: goto label_15cc88;
        case 0x15cc8cu: goto label_15cc8c;
        case 0x15cc90u: goto label_15cc90;
        case 0x15cc94u: goto label_15cc94;
        case 0x15cc98u: goto label_15cc98;
        case 0x15cc9cu: goto label_15cc9c;
        case 0x15cca0u: goto label_15cca0;
        case 0x15cca4u: goto label_15cca4;
        case 0x15cca8u: goto label_15cca8;
        case 0x15ccacu: goto label_15ccac;
        case 0x15ccb0u: goto label_15ccb0;
        case 0x15ccb4u: goto label_15ccb4;
        case 0x15ccb8u: goto label_15ccb8;
        case 0x15ccbcu: goto label_15ccbc;
        case 0x15ccc0u: goto label_15ccc0;
        case 0x15ccc4u: goto label_15ccc4;
        case 0x15ccc8u: goto label_15ccc8;
        case 0x15ccccu: goto label_15cccc;
        case 0x15ccd0u: goto label_15ccd0;
        case 0x15ccd4u: goto label_15ccd4;
        case 0x15ccd8u: goto label_15ccd8;
        case 0x15ccdcu: goto label_15ccdc;
        case 0x15cce0u: goto label_15cce0;
        case 0x15cce4u: goto label_15cce4;
        case 0x15cce8u: goto label_15cce8;
        case 0x15ccecu: goto label_15ccec;
        case 0x15ccf0u: goto label_15ccf0;
        case 0x15ccf4u: goto label_15ccf4;
        case 0x15ccf8u: goto label_15ccf8;
        case 0x15ccfcu: goto label_15ccfc;
        case 0x15cd00u: goto label_15cd00;
        case 0x15cd04u: goto label_15cd04;
        case 0x15cd08u: goto label_15cd08;
        case 0x15cd0cu: goto label_15cd0c;
        case 0x15cd10u: goto label_15cd10;
        case 0x15cd14u: goto label_15cd14;
        case 0x15cd18u: goto label_15cd18;
        case 0x15cd1cu: goto label_15cd1c;
        case 0x15cd20u: goto label_15cd20;
        case 0x15cd24u: goto label_15cd24;
        case 0x15cd28u: goto label_15cd28;
        case 0x15cd2cu: goto label_15cd2c;
        case 0x15cd30u: goto label_15cd30;
        case 0x15cd34u: goto label_15cd34;
        case 0x15cd38u: goto label_15cd38;
        case 0x15cd3cu: goto label_15cd3c;
        case 0x15cd40u: goto label_15cd40;
        case 0x15cd44u: goto label_15cd44;
        case 0x15cd48u: goto label_15cd48;
        case 0x15cd4cu: goto label_15cd4c;
        case 0x15cd50u: goto label_15cd50;
        case 0x15cd54u: goto label_15cd54;
        case 0x15cd58u: goto label_15cd58;
        case 0x15cd5cu: goto label_15cd5c;
        case 0x15cd60u: goto label_15cd60;
        case 0x15cd64u: goto label_15cd64;
        case 0x15cd68u: goto label_15cd68;
        case 0x15cd6cu: goto label_15cd6c;
        case 0x15cd70u: goto label_15cd70;
        case 0x15cd74u: goto label_15cd74;
        case 0x15cd78u: goto label_15cd78;
        case 0x15cd7cu: goto label_15cd7c;
        case 0x15cd80u: goto label_15cd80;
        case 0x15cd84u: goto label_15cd84;
        case 0x15cd88u: goto label_15cd88;
        case 0x15cd8cu: goto label_15cd8c;
        case 0x15cd90u: goto label_15cd90;
        case 0x15cd94u: goto label_15cd94;
        case 0x15cd98u: goto label_15cd98;
        case 0x15cd9cu: goto label_15cd9c;
        case 0x15cda0u: goto label_15cda0;
        case 0x15cda4u: goto label_15cda4;
        case 0x15cda8u: goto label_15cda8;
        case 0x15cdacu: goto label_15cdac;
        case 0x15cdb0u: goto label_15cdb0;
        case 0x15cdb4u: goto label_15cdb4;
        case 0x15cdb8u: goto label_15cdb8;
        case 0x15cdbcu: goto label_15cdbc;
        case 0x15cdc0u: goto label_15cdc0;
        case 0x15cdc4u: goto label_15cdc4;
        case 0x15cdc8u: goto label_15cdc8;
        case 0x15cdccu: goto label_15cdcc;
        case 0x15cdd0u: goto label_15cdd0;
        case 0x15cdd4u: goto label_15cdd4;
        case 0x15cdd8u: goto label_15cdd8;
        case 0x15cddcu: goto label_15cddc;
        case 0x15cde0u: goto label_15cde0;
        case 0x15cde4u: goto label_15cde4;
        case 0x15cde8u: goto label_15cde8;
        case 0x15cdecu: goto label_15cdec;
        case 0x15cdf0u: goto label_15cdf0;
        case 0x15cdf4u: goto label_15cdf4;
        case 0x15cdf8u: goto label_15cdf8;
        case 0x15cdfcu: goto label_15cdfc;
        case 0x15ce00u: goto label_15ce00;
        case 0x15ce04u: goto label_15ce04;
        case 0x15ce08u: goto label_15ce08;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce10u: goto label_15ce10;
        case 0x15ce14u: goto label_15ce14;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce20u: goto label_15ce20;
        case 0x15ce24u: goto label_15ce24;
        case 0x15ce28u: goto label_15ce28;
        case 0x15ce2cu: goto label_15ce2c;
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce38u: goto label_15ce38;
        case 0x15ce3cu: goto label_15ce3c;
        case 0x15ce40u: goto label_15ce40;
        case 0x15ce44u: goto label_15ce44;
        case 0x15ce48u: goto label_15ce48;
        case 0x15ce4cu: goto label_15ce4c;
        case 0x15ce50u: goto label_15ce50;
        case 0x15ce54u: goto label_15ce54;
        case 0x15ce58u: goto label_15ce58;
        case 0x15ce5cu: goto label_15ce5c;
        case 0x15ce60u: goto label_15ce60;
        case 0x15ce64u: goto label_15ce64;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce6cu: goto label_15ce6c;
        case 0x15ce70u: goto label_15ce70;
        case 0x15ce74u: goto label_15ce74;
        case 0x15ce78u: goto label_15ce78;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15ce80u: goto label_15ce80;
        case 0x15ce84u: goto label_15ce84;
        default: break;
    }

    ctx->pc = 0x15cc38u;

label_15cc38:
    // 0x15cc38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15cc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15cc3c:
    // 0x15cc3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15cc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15cc40:
    // 0x15cc40: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x15cc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_15cc44:
    // 0x15cc44: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x15cc44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15cc48:
    // 0x15cc48: 0x24170070  addiu       $s7, $zero, 0x70
    ctx->pc = 0x15cc48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15cc4c:
    // 0x15cc4c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15cc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_15cc50:
    // 0x15cc50: 0x2971818  mult        $v1, $s4, $s7
    ctx->pc = 0x15cc50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15cc54:
    // 0x15cc54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15cc54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15cc58:
    // 0x15cc58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_15cc5c:
    // 0x15cc5c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_15cc60:
    // 0x15cc60: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x15cc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15cc64:
    // 0x15cc64: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_15cc68:
    // 0x15cc68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15cc68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15cc6c:
    // 0x15cc6c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_15cc70:
    // 0x15cc70: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x15cc70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_15cc74:
    // 0x15cc74: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_15cc78:
    // 0x15cc78: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15cc7c:
    // 0x15cc7c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15cc80:
    // 0x15cc80: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x15cc80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_15cc84:
    // 0x15cc84: 0xf8410350  sqc2        $vf1, 0x350($v0)
    ctx->pc = 0x15cc84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 848), _mm_castps_si128(ctx->vu0_vf[1]));
label_15cc88:
    // 0x15cc88: 0x8e6302f8  lw          $v1, 0x2F8($s3)
    ctx->pc = 0x15cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 760)));
label_15cc8c:
    // 0x15cc8c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_15cc90:
    if (ctx->pc == 0x15CC90u) {
        ctx->pc = 0x15CC94u;
        goto label_15cc94;
    }
    ctx->pc = 0x15CC8Cu;
    {
        const bool branch_taken_0x15cc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cc8c) {
            ctx->pc = 0x15CDA0u;
            goto label_15cda0;
        }
    }
    ctx->pc = 0x15CC94u;
label_15cc94:
    // 0x15cc94: 0xc04f1f4  jal         func_13C7D0
label_15cc98:
    if (ctx->pc == 0x15CC98u) {
        ctx->pc = 0x15CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC94u;
        // 0x15cc98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC9Cu;
        goto label_15cc9c;
    }
    ctx->pc = 0x15CC94u;
    SET_GPR_U32(ctx, 31, 0x15CC9Cu);
    ctx->pc = 0x15CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CC94u;
    // 0x15cc98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x15CC94u, 0x15CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CC9Cu;
label_15cc9c:
    // 0x15cc9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15cc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cca0:
    // 0x15cca0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x15cca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15cca4:
    // 0x15cca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15cca8:
    // 0x15cca8: 0xc04f33e  jal         func_13CCF8
label_15ccac:
    if (ctx->pc == 0x15CCACu) {
        ctx->pc = 0x15CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCA8u;
        // 0x15ccac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCB0u;
        goto label_15ccb0;
    }
    ctx->pc = 0x15CCA8u;
    SET_GPR_U32(ctx, 31, 0x15CCB0u);
    ctx->pc = 0x15CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCA8u;
    // 0x15ccac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15CCA8u, 0x15CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCB0u;
label_15ccb0:
    // 0x15ccb0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x15ccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15ccb4:
    // 0x15ccb4: 0xc04f0b6  jal         func_13C2D8
label_15ccb8:
    if (ctx->pc == 0x15CCB8u) {
        ctx->pc = 0x15CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCB4u;
        // 0x15ccb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCBCu;
        goto label_15ccbc;
    }
    ctx->pc = 0x15CCB4u;
    SET_GPR_U32(ctx, 31, 0x15CCBCu);
    ctx->pc = 0x15CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCB4u;
    // 0x15ccb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15CCB4u, 0x15CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCBCu;
label_15ccbc:
    // 0x15ccbc: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x15ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_15ccc0:
    // 0x15ccc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15ccc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ccc4:
    // 0x15ccc4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x15ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_15ccc8:
    // 0x15ccc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15cccc:
    // 0x15cccc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ccd0:
    // 0x15ccd0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15ccd4:
    // 0x15ccd4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x15ccd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15ccd8:
    // 0x15ccd8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x15ccd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_15ccdc:
    // 0x15ccdc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x15ccdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15cce0:
    // 0x15cce0: 0xc06fb8e  jal         func_1BEE38
label_15cce4:
    if (ctx->pc == 0x15CCE4u) {
        ctx->pc = 0x15CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCE0u;
        // 0x15cce4: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCE8u;
        goto label_15cce8;
    }
    ctx->pc = 0x15CCE0u;
    SET_GPR_U32(ctx, 31, 0x15CCE8u);
    ctx->pc = 0x15CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCE0u;
    // 0x15cce4: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15CCE0u, 0x15CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCE8u;
label_15cce8:
    // 0x15cce8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15cce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15ccec:
    // 0x15ccec: 0xc045fea  jal         func_117FA8
label_15ccf0:
    if (ctx->pc == 0x15CCF0u) {
        ctx->pc = 0x15CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCECu;
        // 0x15ccf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CCF4u;
        goto label_15ccf4;
    }
    ctx->pc = 0x15CCECu;
    SET_GPR_U32(ctx, 31, 0x15CCF4u);
    ctx->pc = 0x15CCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCECu;
    // 0x15ccf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15CCECu, 0x15CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CCF4u;
label_15ccf4:
    // 0x15ccf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15ccf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ccf8:
    // 0x15ccf8: 0xc046058  jal         func_118160
label_15ccfc:
    if (ctx->pc == 0x15CCFCu) {
        ctx->pc = 0x15CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCF8u;
        // 0x15ccfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD00u;
        goto label_15cd00;
    }
    ctx->pc = 0x15CCF8u;
    SET_GPR_U32(ctx, 31, 0x15CD00u);
    ctx->pc = 0x15CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CCF8u;
    // 0x15ccfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15CCF8u, 0x15CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD00u;
label_15cd00:
    // 0x15cd00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cd04:
    // 0x15cd04: 0xc046104  jal         func_118410
label_15cd08:
    if (ctx->pc == 0x15CD08u) {
        ctx->pc = 0x15CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD04u;
        // 0x15cd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD0Cu;
        goto label_15cd0c;
    }
    ctx->pc = 0x15CD04u;
    SET_GPR_U32(ctx, 31, 0x15CD0Cu);
    ctx->pc = 0x15CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD04u;
    // 0x15cd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x15CD04u, 0x15CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD0Cu;
label_15cd0c:
    // 0x15cd0c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x15cd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_15cd10:
    // 0x15cd10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15cd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15cd14:
    // 0x15cd14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15cd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15cd18:
    // 0x15cd18: 0xc046290  jal         func_118A40
label_15cd1c:
    if (ctx->pc == 0x15CD1Cu) {
        ctx->pc = 0x15CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD18u;
        // 0x15cd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD20u;
        goto label_15cd20;
    }
    ctx->pc = 0x15CD18u;
    SET_GPR_U32(ctx, 31, 0x15CD20u);
    ctx->pc = 0x15CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD18u;
    // 0x15cd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x15CD18u, 0x15CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD20u;
label_15cd20:
    // 0x15cd20: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x15cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_15cd24:
    // 0x15cd24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15cd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15cd28:
    // 0x15cd28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15cd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15cd2c:
    // 0x15cd2c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15cd30:
    // 0x15cd30: 0x40f809  jalr        $v0
label_15cd34:
    if (ctx->pc == 0x15CD34u) {
        ctx->pc = 0x15CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD30u;
        // 0x15cd34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD38u;
        goto label_15cd38;
    }
    ctx->pc = 0x15CD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CD38u);
        ctx->pc = 0x15CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD30u;
        // 0x15cd34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CD30u, 0x15CD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CD38u;
label_15cd38:
    // 0x15cd38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15cd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cd3c:
    // 0x15cd3c: 0xc04d7da  jal         func_135F68
label_15cd40:
    if (ctx->pc == 0x15CD40u) {
        ctx->pc = 0x15CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD3Cu;
        // 0x15cd40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD44u;
        goto label_15cd44;
    }
    ctx->pc = 0x15CD3Cu;
    SET_GPR_U32(ctx, 31, 0x15CD44u);
    ctx->pc = 0x15CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD3Cu;
    // 0x15cd40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F68u, 0x15CD3Cu, 0x15CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD44u;
label_15cd44:
    // 0x15cd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15cd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cd48:
    // 0x15cd48: 0xc04d7dc  jal         func_135F70
label_15cd4c:
    if (ctx->pc == 0x15CD4Cu) {
        ctx->pc = 0x15CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD48u;
        // 0x15cd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD50u;
        goto label_15cd50;
    }
    ctx->pc = 0x15CD48u;
    SET_GPR_U32(ctx, 31, 0x15CD50u);
    ctx->pc = 0x15CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD48u;
    // 0x15cd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x15CD48u, 0x15CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD50u;
label_15cd50:
    // 0x15cd50: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_15cd54:
    if (ctx->pc == 0x15CD54u) {
        ctx->pc = 0x15CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD50u;
        // 0x15cd54: 0xae4006f4  sw          $zero, 0x6F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD58u;
        goto label_15cd58;
    }
    ctx->pc = 0x15CD50u;
    {
        const bool branch_taken_0x15cd50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD50u;
        // 0x15cd54: 0xae4006f4  sw          $zero, 0x6F4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd50) {
            ctx->pc = 0x15CD64u;
            goto label_15cd64;
        }
    }
    ctx->pc = 0x15CD58u;
label_15cd58:
    // 0x15cd58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cd5c:
    // 0x15cd5c: 0xae5604d0  sw          $s6, 0x4D0($s2)
    ctx->pc = 0x15cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 22));
label_15cd60:
    // 0x15cd60: 0xae4204cc  sw          $v0, 0x4CC($s2)
    ctx->pc = 0x15cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1228), GPR_U32(ctx, 2));
label_15cd64:
    // 0x15cd64: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15cd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15cd68:
    // 0x15cd68: 0xc0aafa6  jal         func_2ABE98
label_15cd6c:
    if (ctx->pc == 0x15CD6Cu) {
        ctx->pc = 0x15CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD68u;
        // 0x15cd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD70u;
        goto label_15cd70;
    }
    ctx->pc = 0x15CD68u;
    SET_GPR_U32(ctx, 31, 0x15CD70u);
    ctx->pc = 0x15CD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD68u;
    // 0x15cd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15CD68u, 0x15CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD70u;
label_15cd70:
    // 0x15cd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15cd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cd74:
    // 0x15cd74: 0xc0aafc8  jal         func_2ABF20
label_15cd78:
    if (ctx->pc == 0x15CD78u) {
        ctx->pc = 0x15CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD74u;
        // 0x15cd78: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD7Cu;
        goto label_15cd7c;
    }
    ctx->pc = 0x15CD74u;
    SET_GPR_U32(ctx, 31, 0x15CD7Cu);
    ctx->pc = 0x15CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD74u;
    // 0x15cd78: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15CD74u, 0x15CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD7Cu;
label_15cd7c:
    // 0x15cd7c: 0x2972018  mult        $a0, $s4, $s7
    ctx->pc = 0x15cd7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_15cd80:
    // 0x15cd80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15cd84:
    // 0x15cd84: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x15cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_15cd88:
    // 0x15cd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15cd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cd8c:
    // 0x15cd8c: 0xac62033c  sw          $v0, 0x33C($v1)
    ctx->pc = 0x15cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 828), GPR_U32(ctx, 2));
label_15cd90:
    // 0x15cd90: 0xc0aafac  jal         func_2ABEB0
label_15cd94:
    if (ctx->pc == 0x15CD94u) {
        ctx->pc = 0x15CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD90u;
        // 0x15cd94: 0xac600340  sw          $zero, 0x340($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CD98u;
        goto label_15cd98;
    }
    ctx->pc = 0x15CD90u;
    SET_GPR_U32(ctx, 31, 0x15CD98u);
    ctx->pc = 0x15CD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD90u;
    // 0x15cd94: 0xac600340  sw          $zero, 0x340($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 832), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15CD90u, 0x15CD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD98u;
label_15cd98:
    // 0x15cd98: 0x10000026  b           . + 4 + (0x26 << 2)
label_15cd9c:
    if (ctx->pc == 0x15CD9Cu) {
        ctx->pc = 0x15CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD98u;
        // 0x15cd9c: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDA0u;
        goto label_15cda0;
    }
    ctx->pc = 0x15CD98u;
    {
        const bool branch_taken_0x15cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD98u;
        // 0x15cd9c: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd98) {
            ctx->pc = 0x15CE34u;
            goto label_15ce34;
        }
    }
    ctx->pc = 0x15CDA0u;
label_15cda0:
    // 0x15cda0: 0xc04f26c  jal         func_13C9B0
label_15cda4:
    if (ctx->pc == 0x15CDA4u) {
        ctx->pc = 0x15CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDA0u;
        // 0x15cda4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDA8u;
        goto label_15cda8;
    }
    ctx->pc = 0x15CDA0u;
    SET_GPR_U32(ctx, 31, 0x15CDA8u);
    ctx->pc = 0x15CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDA0u;
    // 0x15cda4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C9B0u, 0x15CDA0u, 0x15CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDA8u;
label_15cda8:
    // 0x15cda8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15cda8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cdac:
    // 0x15cdac: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x15cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15cdb0:
    // 0x15cdb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15cdb4:
    // 0x15cdb4: 0xc04f33e  jal         func_13CCF8
label_15cdb8:
    if (ctx->pc == 0x15CDB8u) {
        ctx->pc = 0x15CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDB4u;
        // 0x15cdb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDBCu;
        goto label_15cdbc;
    }
    ctx->pc = 0x15CDB4u;
    SET_GPR_U32(ctx, 31, 0x15CDBCu);
    ctx->pc = 0x15CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDB4u;
    // 0x15cdb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15CDB4u, 0x15CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDBCu;
label_15cdbc:
    // 0x15cdbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15cdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15cdc0:
    // 0x15cdc0: 0xc04f0b6  jal         func_13C2D8
label_15cdc4:
    if (ctx->pc == 0x15CDC4u) {
        ctx->pc = 0x15CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDC0u;
        // 0x15cdc4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDC8u;
        goto label_15cdc8;
    }
    ctx->pc = 0x15CDC0u;
    SET_GPR_U32(ctx, 31, 0x15CDC8u);
    ctx->pc = 0x15CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDC0u;
    // 0x15cdc4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15CDC0u, 0x15CDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDC8u;
label_15cdc8:
    // 0x15cdc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15cdc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cdcc:
    // 0x15cdcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15cdd0:
    // 0x15cdd0: 0xc046330  jal         func_118CC0
label_15cdd4:
    if (ctx->pc == 0x15CDD4u) {
        ctx->pc = 0x15CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDD0u;
        // 0x15cdd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDD8u;
        goto label_15cdd8;
    }
    ctx->pc = 0x15CDD0u;
    SET_GPR_U32(ctx, 31, 0x15CDD8u);
    ctx->pc = 0x15CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDD0u;
    // 0x15cdd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x15CDD0u, 0x15CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDD8u;
label_15cdd8:
    // 0x15cdd8: 0x2978018  mult        $s0, $s4, $s7
    ctx->pc = 0x15cdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_15cddc:
    // 0x15cddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15cde0:
    // 0x15cde0: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x15cde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_15cde4:
    // 0x15cde4: 0xc046058  jal         func_118160
label_15cde8:
    if (ctx->pc == 0x15CDE8u) {
        ctx->pc = 0x15CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDE4u;
        // 0x15cde8: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CDECu;
        goto label_15cdec;
    }
    ctx->pc = 0x15CDE4u;
    SET_GPR_U32(ctx, 31, 0x15CDECu);
    ctx->pc = 0x15CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CDE4u;
    // 0x15cde8: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15CDE4u, 0x15CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CDECu;
label_15cdec:
    // 0x15cdec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x15cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_15cdf0:
    // 0x15cdf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15cdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15cdf4:
    // 0x15cdf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15cdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15cdf8:
    // 0x15cdf8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15cdfc:
    // 0x15cdfc: 0x40f809  jalr        $v0
label_15ce00:
    if (ctx->pc == 0x15CE00u) {
        ctx->pc = 0x15CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDFCu;
        // 0x15ce00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE04u;
        goto label_15ce04;
    }
    ctx->pc = 0x15CDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CE04u);
        ctx->pc = 0x15CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDFCu;
        // 0x15ce00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CDFCu, 0x15CE04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CE04u;
label_15ce04:
    // 0x15ce04: 0xc0aafa6  jal         func_2ABE98
label_15ce08:
    if (ctx->pc == 0x15CE08u) {
        ctx->pc = 0x15CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE04u;
        // 0x15ce08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE0Cu;
        goto label_15ce0c;
    }
    ctx->pc = 0x15CE04u;
    SET_GPR_U32(ctx, 31, 0x15CE0Cu);
    ctx->pc = 0x15CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE04u;
    // 0x15ce08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15CE04u, 0x15CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE0Cu;
label_15ce0c:
    // 0x15ce0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ce0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ce10:
    // 0x15ce10: 0xc0aafc8  jal         func_2ABF20
label_15ce14:
    if (ctx->pc == 0x15CE14u) {
        ctx->pc = 0x15CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE10u;
        // 0x15ce14: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE18u;
        goto label_15ce18;
    }
    ctx->pc = 0x15CE10u;
    SET_GPR_U32(ctx, 31, 0x15CE18u);
    ctx->pc = 0x15CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE10u;
    // 0x15ce14: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15CE10u, 0x15CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE18u;
label_15ce18:
    // 0x15ce18: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x15ce18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_15ce1c:
    // 0x15ce1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ce20:
    // 0x15ce20: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x15ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_15ce24:
    // 0x15ce24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15ce28:
    // 0x15ce28: 0xc0aafac  jal         func_2ABEB0
label_15ce2c:
    if (ctx->pc == 0x15CE2Cu) {
        ctx->pc = 0x15CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE28u;
        // 0x15ce2c: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE30u;
        goto label_15ce30;
    }
    ctx->pc = 0x15CE28u;
    SET_GPR_U32(ctx, 31, 0x15CE30u);
    ctx->pc = 0x15CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE28u;
    // 0x15ce2c: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15CE28u, 0x15CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE30u;
label_15ce30:
    // 0x15ce30: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15ce34:
    // 0x15ce34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15ce34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15ce38:
    // 0x15ce38: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x15ce38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15ce3c:
    // 0x15ce3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15ce40:
    // 0x15ce40: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15ce40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15ce44:
    // 0x15ce44: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15ce44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15ce48:
    // 0x15ce48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15ce48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15ce4c:
    // 0x15ce4c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15ce50:
    // 0x15ce50: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15ce50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15ce54:
    // 0x15ce54: 0xac72032c  sw          $s2, 0x32C($v1)
    ctx->pc = 0x15ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 812), GPR_U32(ctx, 18));
label_15ce58:
    // 0x15ce58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ce5c:
    // 0x15ce5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15ce5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15ce60:
    // 0x15ce60: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15ce60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15ce64:
    // 0x15ce64: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15ce64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15ce68:
    // 0x15ce68: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x15ce68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15ce6c:
    // 0x15ce6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15ce6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15ce70:
    // 0x15ce70: 0xac620330  sw          $v0, 0x330($v1)
    ctx->pc = 0x15ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 2));
label_15ce74:
    // 0x15ce74: 0xac650324  sw          $a1, 0x324($v1)
    ctx->pc = 0x15ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 804), GPR_U32(ctx, 5));
label_15ce78:
    // 0x15ce78: 0xac640328  sw          $a0, 0x328($v1)
    ctx->pc = 0x15ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 808), GPR_U32(ctx, 4));
label_15ce7c:
    // 0x15ce7c: 0x3e00008  jr          $ra
label_15ce80:
    if (ctx->pc == 0x15CE80u) {
        ctx->pc = 0x15CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE7Cu;
        // 0x15ce80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CE84u;
        goto label_15ce84;
    }
    ctx->pc = 0x15CE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE7Cu;
        // 0x15ce80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CE84u;
label_15ce84:
    // 0x15ce84: 0x0  nop
    ctx->pc = 0x15ce84u;
    // NOP
    ctx->pc = 0x15ce88u;
}
