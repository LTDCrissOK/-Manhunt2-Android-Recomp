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

// Function: sub_00302AC0
// Address: 0x302ac0 - 0x302bd0
void sub_00302AC0_0x302ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302AC0_0x302ac0");
#endif

    switch (ctx->pc) {
        case 0x302afcu: goto label_302afc;
        case 0x302b0cu: goto label_302b0c;
        case 0x302b48u: goto label_302b48;
        case 0x302b7cu: goto label_302b7c;
        case 0x302b88u: goto label_302b88;
        case 0x302b9cu: goto label_302b9c;
        case 0x302ba8u: goto label_302ba8;
        default: break;
    }

    ctx->pc = 0x302ac0u;

    // 0x302ac0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x302ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x302ac4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x302ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x302ac8: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x302ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x302acc: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x302accu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x302ad0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x302ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ad4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x302ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x302ad8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x302ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302adc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x302adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x302ae0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x302ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x302ae4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x302ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x302ae8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x302ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x302aec: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x302aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x302af0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x302af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x302af4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x302AF4u;
    SET_GPR_U32(ctx, 31, 0x302AFCu);
    ctx->pc = 0x302AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302AF4u;
    // 0x302af8: 0x26735870  addiu       $s3, $s3, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x302AF4u, 0x302AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302AFCu;
label_302afc:
    // 0x302afc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x302afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x302b00: 0x8ea51390  lw          $a1, 0x1390($s5)
    ctx->pc = 0x302b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5008)));
    // 0x302b04: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x302B04u;
    SET_GPR_U32(ctx, 31, 0x302B0Cu);
    ctx->pc = 0x302B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B04u;
    // 0x302b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x302B04u, 0x302B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B0Cu;
label_302b0c:
    // 0x302b0c: 0x8ea21390  lw          $v0, 0x1390($s5)
    ctx->pc = 0x302b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5008)));
    // 0x302b10: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x302b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x302b14: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x302b14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b18: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x302b18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x302b1c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x302b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x302b20: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x302b20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b24: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x302b24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302b28: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x302b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x302b2c: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x302b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b30: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x302b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x302b34: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x302b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x302b38: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x302b38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b40: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x302B40u;
    SET_GPR_U32(ctx, 31, 0x302B48u);
    ctx->pc = 0x302B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B40u;
    // 0x302b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x302B40u, 0x302B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B48u;
label_302b48:
    // 0x302b48: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x302b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x302b4c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x302b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b50: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x302b50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x302b54: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x302b54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b58: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x302b58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x302b5c: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x302b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b60: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x302b60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x302b64: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x302b64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302b68: 0x26720310  addiu       $s2, $s3, 0x310
    ctx->pc = 0x302b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    // 0x302b6c: 0x8ea51390  lw          $a1, 0x1390($s5)
    ctx->pc = 0x302b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5008)));
    // 0x302b70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x302b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b74: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x302B74u;
    SET_GPR_U32(ctx, 31, 0x302B7Cu);
    ctx->pc = 0x302B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B74u;
    // 0x302b78: 0x26710320  addiu       $s1, $s3, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x302B74u, 0x302B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B7Cu;
label_302b7c:
    // 0x302b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x302b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b80: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x302B80u;
    SET_GPR_U32(ctx, 31, 0x302B88u);
    ctx->pc = 0x302B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B80u;
    // 0x302b84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x302B80u, 0x302B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B88u;
label_302b88:
    // 0x302b88: 0xc66c03e0  lwc1        $f12, 0x3E0($s3)
    ctx->pc = 0x302b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302b8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x302b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x302b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302b94: 0xc0b1a88  jal         func_2C6A20
    ctx->pc = 0x302B94u;
    SET_GPR_U32(ctx, 31, 0x302B9Cu);
    ctx->pc = 0x302B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302B94u;
    // 0x302b98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6A20u, 0x302B94u, 0x302B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302B9Cu;
label_302b9c:
    // 0x302b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ba0: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x302BA0u;
    SET_GPR_U32(ctx, 31, 0x302BA8u);
    ctx->pc = 0x302BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302BA0u;
    // 0x302ba4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x302BA0u, 0x302BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302BA8u;
label_302ba8:
    // 0x302ba8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x302ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302bac: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x302bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x302bb0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x302bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302bb4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x302bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x302bb8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x302bb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x302bbc: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x302bbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x302bc0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x302bc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x302bc4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x302bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x302bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x302BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302BC8u;
        // 0x302bcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302BD0u;
}
