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

// Function: sub_00318928
// Address: 0x318928 - 0x318fe0
void sub_00318928_0x318928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318928_0x318928");
#endif

    switch (ctx->pc) {
        case 0x318978u: goto label_318978;
        case 0x318a24u: goto label_318a24;
        case 0x318a34u: goto label_318a34;
        case 0x318a88u: goto label_318a88;
        case 0x318aa4u: goto label_318aa4;
        case 0x318ab0u: goto label_318ab0;
        case 0x318ae0u: goto label_318ae0;
        case 0x318af4u: goto label_318af4;
        case 0x318b34u: goto label_318b34;
        case 0x318b3cu: goto label_318b3c;
        case 0x318b44u: goto label_318b44;
        case 0x318b60u: goto label_318b60;
        case 0x318b78u: goto label_318b78;
        case 0x318ba0u: goto label_318ba0;
        case 0x318bb8u: goto label_318bb8;
        case 0x318bc4u: goto label_318bc4;
        case 0x318bd4u: goto label_318bd4;
        case 0x318bdcu: goto label_318bdc;
        case 0x318be8u: goto label_318be8;
        case 0x318bf4u: goto label_318bf4;
        case 0x318bfcu: goto label_318bfc;
        case 0x318c04u: goto label_318c04;
        case 0x318c1cu: goto label_318c1c;
        case 0x318c34u: goto label_318c34;
        case 0x318c4cu: goto label_318c4c;
        case 0x318c54u: goto label_318c54;
        case 0x318c6cu: goto label_318c6c;
        case 0x318c78u: goto label_318c78;
        case 0x318c80u: goto label_318c80;
        case 0x318c98u: goto label_318c98;
        case 0x318ca4u: goto label_318ca4;
        case 0x318cbcu: goto label_318cbc;
        case 0x318cd4u: goto label_318cd4;
        case 0x318cecu: goto label_318cec;
        case 0x318cf4u: goto label_318cf4;
        case 0x318d00u: goto label_318d00;
        case 0x318d0cu: goto label_318d0c;
        case 0x318d18u: goto label_318d18;
        case 0x318d24u: goto label_318d24;
        case 0x318d38u: goto label_318d38;
        case 0x318d40u: goto label_318d40;
        case 0x318d48u: goto label_318d48;
        case 0x318d54u: goto label_318d54;
        case 0x318d78u: goto label_318d78;
        case 0x318d9cu: goto label_318d9c;
        case 0x318dc0u: goto label_318dc0;
        case 0x318ddcu: goto label_318ddc;
        case 0x318e00u: goto label_318e00;
        case 0x318e28u: goto label_318e28;
        case 0x318e44u: goto label_318e44;
        case 0x318e60u: goto label_318e60;
        case 0x318e7cu: goto label_318e7c;
        case 0x318e84u: goto label_318e84;
        case 0x318e8cu: goto label_318e8c;
        case 0x318ea8u: goto label_318ea8;
        case 0x318eb4u: goto label_318eb4;
        case 0x318ebcu: goto label_318ebc;
        case 0x318eccu: goto label_318ecc;
        case 0x318ee8u: goto label_318ee8;
        case 0x318f04u: goto label_318f04;
        case 0x318f0cu: goto label_318f0c;
        case 0x318f1cu: goto label_318f1c;
        case 0x318f50u: goto label_318f50;
        case 0x318f64u: goto label_318f64;
        case 0x318f74u: goto label_318f74;
        case 0x318f90u: goto label_318f90;
        case 0x318facu: goto label_318fac;
        default: break;
    }

    ctx->pc = 0x318928u;

    // 0x318928: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x318928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31892c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31892cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x318930: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x318930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x318934: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x318934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318938: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x318938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x31893c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x31893cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x318940: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x318940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318944: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x318944u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x318948: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x318948u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31894c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31894cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x318950: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x318950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x318954: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x318954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x318958: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x318958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31895c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x31895cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x318960: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x318960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x318964: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x318964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x318968: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x318968u;
    {
        const bool branch_taken_0x318968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318968u;
        // 0x31896c: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318968) {
            ctx->pc = 0x318A34u;
            goto label_318a34;
        }
    }
    ctx->pc = 0x318970u;
    // 0x318970: 0xc0bb79e  jal         func_2EDE78
    ctx->pc = 0x318970u;
    SET_GPR_U32(ctx, 31, 0x318978u);
    ctx->pc = 0x318974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318970u;
    // 0x318974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDE78u, 0x318970u, 0x318978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318978u;
label_318978:
    // 0x318978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x318978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31897c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x318980: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x318980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x318984: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x318984u;
    {
        const bool branch_taken_0x318984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318984u;
        // 0x318988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318984) {
            ctx->pc = 0x31899Cu;
            goto label_31899c;
        }
    }
    ctx->pc = 0x31898Cu;
    // 0x31898c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x318990: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x318990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x318994: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x318994u;
    {
        const bool branch_taken_0x318994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318994) {
            ctx->pc = 0x3189A0u;
            goto label_3189a0;
        }
    }
    ctx->pc = 0x31899Cu;
label_31899c:
    // 0x31899c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3189a0:
    // 0x3189a0: 0x56a00025  bnel        $s5, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x3189A0u;
    {
        const bool branch_taken_0x3189a0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3189a0) {
            ctx->pc = 0x3189A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3189A0u;
            // 0x3189a4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A38u;
            goto label_318a38;
        }
    }
    ctx->pc = 0x3189A8u;
    // 0x3189a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3189A8u;
    {
        const bool branch_taken_0x3189a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3189ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189A8u;
        // 0x3189ac: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189a8) {
            ctx->pc = 0x3189B8u;
            goto label_3189b8;
        }
    }
    ctx->pc = 0x3189B0u;
    // 0x3189b0: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3189B0u;
    {
        const bool branch_taken_0x3189b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3189B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189B0u;
        // 0x3189b4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189b0) {
            ctx->pc = 0x318A38u;
            goto label_318a38;
        }
    }
    ctx->pc = 0x3189B8u;
label_3189b8:
    // 0x3189b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3189b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3189bc: 0xc4409938  lwc1        $f0, -0x66C8($v0)
    ctx->pc = 0x3189bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3189c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3189c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3189c4: 0x0  nop
    ctx->pc = 0x3189c4u;
    // NOP
    // 0x3189c8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x3189C8u;
    {
        const bool branch_taken_0x3189c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3189CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189C8u;
        // 0x3189cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189c8) {
            ctx->pc = 0x318A34u;
            goto label_318a34;
        }
    }
    ctx->pc = 0x3189D0u;
    // 0x3189d0: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x3189d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950244)));
    // 0x3189d4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3189D4u;
    {
        const bool branch_taken_0x3189d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3189D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189D4u;
        // 0x3189d8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189d4) {
            ctx->pc = 0x318A38u;
            goto label_318a38;
        }
    }
    ctx->pc = 0x3189DCu;
    // 0x3189dc: 0x8fc3bd50  lw          $v1, -0x42B0($fp)
    ctx->pc = 0x3189dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    // 0x3189e0: 0x8c6211c0  lw          $v0, 0x11C0($v1)
    ctx->pc = 0x3189e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4544)));
    // 0x3189e4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3189e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3189e8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3189E8u;
    {
        const bool branch_taken_0x3189e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3189ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189E8u;
        // 0x3189ec: 0x3c043b9a  lui         $a0, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189e8) {
            ctx->pc = 0x318A3Cu;
            goto label_318a3c;
        }
    }
    ctx->pc = 0x3189F0u;
    // 0x3189f0: 0x906213f4  lbu         $v0, 0x13F4($v1)
    ctx->pc = 0x3189f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5108)));
    // 0x3189f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3189F4u;
    {
        const bool branch_taken_0x3189f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3189F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3189F4u;
        // 0x3189f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3189f4) {
            ctx->pc = 0x318A10u;
            goto label_318a10;
        }
    }
    ctx->pc = 0x3189FCu;
    // 0x3189fc: 0xc46013f8  lwc1        $f0, 0x13F8($v1)
    ctx->pc = 0x3189fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318a00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x318a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318a04: 0x0  nop
    ctx->pc = 0x318a04u;
    // NOP
    // 0x318a08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x318A08u;
    {
        const bool branch_taken_0x318a08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318a08) {
            ctx->pc = 0x318A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318A08u;
            // 0x318a0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A10u;
            goto label_318a10;
        }
    }
    ctx->pc = 0x318A10u;
label_318a10:
    // 0x318a10: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x318a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x318a14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318A14u;
    {
        const bool branch_taken_0x318a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a14) {
            ctx->pc = 0x318A2Cu;
            goto label_318a2c;
        }
    }
    ctx->pc = 0x318A1Cu;
    // 0x318a1c: 0xc0c11e6  jal         func_304798
    ctx->pc = 0x318A1Cu;
    SET_GPR_U32(ctx, 31, 0x318A24u);
    ctx->pc = 0x318A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318A1Cu;
    // 0x318a20: 0x8fc4bd50  lw          $a0, -0x42B0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304798u, 0x318A1Cu, 0x318A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A24u;
label_318a24:
    // 0x318a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x318A24u;
    {
        const bool branch_taken_0x318a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A24u;
        // 0x318a28: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a24) {
            ctx->pc = 0x318A38u;
            goto label_318a38;
        }
    }
    ctx->pc = 0x318A2Cu;
label_318a2c:
    // 0x318a2c: 0xc0c0cdc  jal         func_303370
    ctx->pc = 0x318A2Cu;
    SET_GPR_U32(ctx, 31, 0x318A34u);
    ctx->pc = 0x318A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318A2Cu;
    // 0x318a30: 0x8fc4bd50  lw          $a0, -0x42B0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303370u, 0x318A2Cu, 0x318A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A34u;
label_318a34:
    // 0x318a34: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x318a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_318a38:
    // 0x318a38: 0x3c043b9a  lui         $a0, 0x3B9A
    ctx->pc = 0x318a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15258 << 16));
label_318a3c:
    // 0x318a3c: 0x8ca395a0  lw          $v1, -0x6A60($a1)
    ctx->pc = 0x318a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294940064)));
    // 0x318a40: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x318a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x318a44: 0x3484c9ff  ori         $a0, $a0, 0xC9FF
    ctx->pc = 0x318a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51711);
    // 0x318a48: 0x24565870  addiu       $s6, $v0, 0x5870
    ctx->pc = 0x318a48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x318a4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318a50: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x318a50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x318a54: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x318A54u;
    {
        const bool branch_taken_0x318a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A54u;
        // 0x318a58: 0xaca395a0  sw          $v1, -0x6A60($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294940064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a54) {
            ctx->pc = 0x318A60u;
            goto label_318a60;
        }
    }
    ctx->pc = 0x318A5Cu;
    // 0x318a5c: 0xaca095a0  sw          $zero, -0x6A60($a1)
    ctx->pc = 0x318a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294940064), GPR_U32(ctx, 0));
label_318a60:
    // 0x318a60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318a64: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x318a64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x318a68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x318a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x318a6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x318A6Cu;
    {
        const bool branch_taken_0x318a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A6Cu;
        // 0x318a70: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a6c) {
            ctx->pc = 0x318A90u;
            goto label_318a90;
        }
    }
    ctx->pc = 0x318A74u;
    // 0x318a74: 0x90437cb0  lbu         $v1, 0x7CB0($v0)
    ctx->pc = 0x318a74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31920)));
    // 0x318a78: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x318A78u;
    {
        const bool branch_taken_0x318a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a78) {
            ctx->pc = 0x318A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318A78u;
            // 0x318a7c: 0x92c20620  lbu         $v0, 0x620($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318A94u;
            goto label_318a94;
        }
    }
    ctx->pc = 0x318A80u;
    // 0x318a80: 0xc0c61e8  jal         func_3187A0
    ctx->pc = 0x318A80u;
    SET_GPR_U32(ctx, 31, 0x318A88u);
    ctx->pc = 0x3187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3187A0u, 0x318A80u, 0x318A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318A88u;
label_318a88:
    // 0x318a88: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x318A88u;
    {
        const bool branch_taken_0x318a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318A88u;
        // 0x318a8c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318a88) {
            ctx->pc = 0x318FB0u;
            goto label_318fb0;
        }
    }
    ctx->pc = 0x318A90u;
label_318a90:
    // 0x318a90: 0x92c20620  lbu         $v0, 0x620($s6)
    ctx->pc = 0x318a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1568)));
label_318a94:
    // 0x318a94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x318A94u;
    {
        const bool branch_taken_0x318a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318a94) {
            ctx->pc = 0x318AB8u;
            goto label_318ab8;
        }
    }
    ctx->pc = 0x318A9Cu;
    // 0x318a9c: 0xc0c115c  jal         func_304570
    ctx->pc = 0x318A9Cu;
    SET_GPR_U32(ctx, 31, 0x318AA4u);
    ctx->pc = 0x304570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304570u, 0x318A9Cu, 0x318AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AA4u;
label_318aa4:
    // 0x318aa4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318aa8: 0xc0c611a  jal         func_318468
    ctx->pc = 0x318AA8u;
    SET_GPR_U32(ctx, 31, 0x318AB0u);
    ctx->pc = 0x318AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318AA8u;
    // 0x318aac: 0x8c64a300  lw          $a0, -0x5D00($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318468u, 0x318AA8u, 0x318AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AB0u;
label_318ab0:
    // 0x318ab0: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x318AB0u;
    {
        const bool branch_taken_0x318ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AB0u;
        // 0x318ab4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ab0) {
            ctx->pc = 0x318FB0u;
            goto label_318fb0;
        }
    }
    ctx->pc = 0x318AB8u;
label_318ab8:
    // 0x318ab8: 0x16a0000b  bnez        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x318AB8u;
    {
        const bool branch_taken_0x318ab8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x318ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AB8u;
        // 0x318abc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ab8) {
            ctx->pc = 0x318AE8u;
            goto label_318ae8;
        }
    }
    ctx->pc = 0x318AC0u;
    // 0x318ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318ac4: 0x92c302c9  lbu         $v1, 0x2C9($s6)
    ctx->pc = 0x318ac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 713)));
    // 0x318ac8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x318AC8u;
    {
        const bool branch_taken_0x318ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AC8u;
        // 0x318acc: 0xa2c202ca  sb          $v0, 0x2CA($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 714), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ac8) {
            ctx->pc = 0x318AE8u;
            goto label_318ae8;
        }
    }
    ctx->pc = 0x318AD0u;
    // 0x318ad0: 0x8fc4bd50  lw          $a0, -0x42B0($fp)
    ctx->pc = 0x318ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    // 0x318ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318ad8: 0xc0c0cdc  jal         func_303370
    ctx->pc = 0x318AD8u;
    SET_GPR_U32(ctx, 31, 0x318AE0u);
    ctx->pc = 0x318ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318AD8u;
    // 0x318adc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303370u, 0x318AD8u, 0x318AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AE0u;
label_318ae0:
    // 0x318ae0: 0xa2c002c9  sb          $zero, 0x2C9($s6)
    ctx->pc = 0x318ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 713), (uint8_t)GPR_U32(ctx, 0));
    // 0x318ae4: 0xa2c002ca  sb          $zero, 0x2CA($s6)
    ctx->pc = 0x318ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 714), (uint8_t)GPR_U32(ctx, 0));
label_318ae8:
    // 0x318ae8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318aec: 0xc0c6122  jal         func_318488
    ctx->pc = 0x318AECu;
    SET_GPR_U32(ctx, 31, 0x318AF4u);
    ctx->pc = 0x318AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318AECu;
    // 0x318af0: 0x3c17005b  lui         $s7, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)91 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318488u, 0x318AECu, 0x318AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318AF4u;
label_318af4:
    // 0x318af4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x318af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x318af8: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x318af8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x318afc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x318AFCu;
    {
        const bool branch_taken_0x318afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x318B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318AFCu;
        // 0x318b00: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318afc) {
            ctx->pc = 0x318B34u;
            goto label_318b34;
        }
    }
    ctx->pc = 0x318B04u;
    // 0x318b04: 0x9062b821  lbu         $v0, -0x47DF($v1)
    ctx->pc = 0x318b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948897)));
    // 0x318b08: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x318B08u;
    {
        const bool branch_taken_0x318b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B08u;
        // 0x318b0c: 0x26e221e8  addiu       $v0, $s7, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b08) {
            ctx->pc = 0x318B34u;
            goto label_318b34;
        }
    }
    ctx->pc = 0x318B10u;
    // 0x318b10: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x318b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x318b14: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x318B14u;
    {
        const bool branch_taken_0x318b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B14u;
        // 0x318b18: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b14) {
            ctx->pc = 0x318B34u;
            goto label_318b34;
        }
    }
    ctx->pc = 0x318B1Cu;
    // 0x318b1c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x318b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x318b20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x318b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x318b24: 0x8c45bd48  lw          $a1, -0x42B8($v0)
    ctx->pc = 0x318b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x318b28: 0xc46c2b30  lwc1        $f12, 0x2B30($v1)
    ctx->pc = 0x318b28u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318b2c: 0xc0aee1a  jal         func_2BB868
    ctx->pc = 0x318B2Cu;
    SET_GPR_U32(ctx, 31, 0x318B34u);
    ctx->pc = 0x318B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B2Cu;
    // 0x318b30: 0x24844f18  addiu       $a0, $a0, 0x4F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x318B2Cu, 0x318B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B34u;
label_318b34:
    // 0x318b34: 0xc086ffe  jal         func_21BFF8
    ctx->pc = 0x318B34u;
    SET_GPR_U32(ctx, 31, 0x318B3Cu);
    ctx->pc = 0x21BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BFF8u, 0x318B34u, 0x318B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B3Cu;
label_318b3c:
    // 0x318b3c: 0xc0c6046  jal         func_318118
    ctx->pc = 0x318B3Cu;
    SET_GPR_U32(ctx, 31, 0x318B44u);
    ctx->pc = 0x318B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B3Cu;
    // 0x318b40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318118u, 0x318B3Cu, 0x318B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B44u;
label_318b44:
    // 0x318b44: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318b48: 0x8c62bda0  lw          $v0, -0x4260($v1)
    ctx->pc = 0x318b48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBDA0u));
    // 0x318b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x318b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x318b50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318B50u;
    {
        const bool branch_taken_0x318b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B50u;
        // 0x318b54: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b50) {
            ctx->pc = 0x318B60u;
            goto label_318b60;
        }
    }
    ctx->pc = 0x318B58u;
    // 0x318b58: 0xc0cee38  jal         func_33B8E0
    ctx->pc = 0x318B58u;
    SET_GPR_U32(ctx, 31, 0x318B60u);
    ctx->pc = 0x33B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B8E0u, 0x318B58u, 0x318B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B60u;
label_318b60:
    // 0x318b60: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318b64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x318b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x318b68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318B68u;
    {
        const bool branch_taken_0x318b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B68u;
        // 0x318b6c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b68) {
            ctx->pc = 0x318B7Cu;
            goto label_318b7c;
        }
    }
    ctx->pc = 0x318B70u;
    // 0x318b70: 0xc0c8866  jal         func_322198
    ctx->pc = 0x318B70u;
    SET_GPR_U32(ctx, 31, 0x318B78u);
    ctx->pc = 0x322198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322198u, 0x318B70u, 0x318B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318B78u;
label_318b78:
    // 0x318b78: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_318b7c:
    // 0x318b7c: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x318b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950180)));
    // 0x318b80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x318B80u;
    {
        const bool branch_taken_0x318b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B80u;
        // 0x318b84: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b80) {
            ctx->pc = 0x318BA0u;
            goto label_318ba0;
        }
    }
    ctx->pc = 0x318B88u;
    // 0x318b88: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318b8c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x318b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x318b90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318B90u;
    {
        const bool branch_taken_0x318b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318B90u;
        // 0x318b94: 0x9202bd24  lbu         $v0, -0x42DC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318b90) {
            ctx->pc = 0x318BA4u;
            goto label_318ba4;
        }
    }
    ctx->pc = 0x318B98u;
    // 0x318b98: 0xc0c60a0  jal         func_318280
    ctx->pc = 0x318B98u;
    SET_GPR_U32(ctx, 31, 0x318BA0u);
    ctx->pc = 0x318B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318B98u;
    // 0x318b9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318280u, 0x318B98u, 0x318BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BA0u;
label_318ba0:
    // 0x318ba0: 0x9202bd24  lbu         $v0, -0x42DC($s0)
    ctx->pc = 0x318ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294950180)));
label_318ba4:
    // 0x318ba4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x318BA4u;
    {
        const bool branch_taken_0x318ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318BA4u;
        // 0x318ba8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ba4) {
            ctx->pc = 0x318BFCu;
            goto label_318bfc;
        }
    }
    ctx->pc = 0x318BACu;
    // 0x318bac: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x318bacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x318bb0: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x318BB0u;
    SET_GPR_U32(ctx, 31, 0x318BB8u);
    ctx->pc = 0x318BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BB0u;
    // 0x318bb4: 0x8e04bd48  lw          $a0, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x318BB0u, 0x318BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BB8u;
label_318bb8:
    // 0x318bb8: 0x8e24bd20  lw          $a0, -0x42E0($s1)
    ctx->pc = 0x318bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950176)));
    // 0x318bbc: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x318BBCu;
    SET_GPR_U32(ctx, 31, 0x318BC4u);
    ctx->pc = 0x318BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BBCu;
    // 0x318bc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x318BBCu, 0x318BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BC4u;
label_318bc4:
    // 0x318bc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x318bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318bc8: 0x8e05bd48  lw          $a1, -0x42B8($s0)
    ctx->pc = 0x318bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    // 0x318bcc: 0xc0c884e  jal         func_322138
    ctx->pc = 0x318BCCu;
    SET_GPR_U32(ctx, 31, 0x318BD4u);
    ctx->pc = 0x318BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BCCu;
    // 0x318bd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x318BCCu, 0x318BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BD4u;
label_318bd4:
    // 0x318bd4: 0xc0b55b4  jal         func_2D56D0
    ctx->pc = 0x318BD4u;
    SET_GPR_U32(ctx, 31, 0x318BDCu);
    ctx->pc = 0x318BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BD4u;
    // 0x318bd8: 0x8e24bd20  lw          $a0, -0x42E0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D56D0u, 0x318BD4u, 0x318BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BDCu;
label_318bdc:
    // 0x318bdc: 0x8e05bd48  lw          $a1, -0x42B8($s0)
    ctx->pc = 0x318bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    // 0x318be0: 0xc0c8848  jal         func_322120
    ctx->pc = 0x318BE0u;
    SET_GPR_U32(ctx, 31, 0x318BE8u);
    ctx->pc = 0x318BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BE0u;
    // 0x318be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x318BE0u, 0x318BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BE8u;
label_318be8:
    // 0x318be8: 0x8e04bd48  lw          $a0, -0x42B8($s0)
    ctx->pc = 0x318be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    // 0x318bec: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x318BECu;
    SET_GPR_U32(ctx, 31, 0x318BF4u);
    ctx->pc = 0x318BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BECu;
    // 0x318bf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x318BECu, 0x318BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BF4u;
label_318bf4:
    // 0x318bf4: 0xc0b562c  jal         func_2D58B0
    ctx->pc = 0x318BF4u;
    SET_GPR_U32(ctx, 31, 0x318BFCu);
    ctx->pc = 0x318BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318BF4u;
    // 0x318bf8: 0x8e24bd20  lw          $a0, -0x42E0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D58B0u, 0x318BF4u, 0x318BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318BFCu;
label_318bfc:
    // 0x318bfc: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x318BFCu;
    SET_GPR_U32(ctx, 31, 0x318C04u);
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x318BFCu, 0x318C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C04u;
label_318c04:
    // 0x318c04: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318c08: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x318c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x318c0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318C0Cu;
    {
        const bool branch_taken_0x318c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C0Cu;
        // 0x318c10: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c0c) {
            ctx->pc = 0x318C20u;
            goto label_318c20;
        }
    }
    ctx->pc = 0x318C14u;
    // 0x318c14: 0xc0c5e26  jal         func_317898
    ctx->pc = 0x318C14u;
    SET_GPR_U32(ctx, 31, 0x318C1Cu);
    ctx->pc = 0x318C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C14u;
    // 0x318c18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317898u, 0x318C14u, 0x318C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C1Cu;
label_318c1c:
    // 0x318c1c: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318c20:
    // 0x318c20: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x318c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x318c24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318C24u;
    {
        const bool branch_taken_0x318c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C24u;
        // 0x318c28: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c24) {
            ctx->pc = 0x318C38u;
            goto label_318c38;
        }
    }
    ctx->pc = 0x318C2Cu;
    // 0x318c2c: 0xc0c5e50  jal         func_317940
    ctx->pc = 0x318C2Cu;
    SET_GPR_U32(ctx, 31, 0x318C34u);
    ctx->pc = 0x317940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317940u, 0x318C2Cu, 0x318C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C34u;
label_318c34:
    // 0x318c34: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318c38:
    // 0x318c38: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x318c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x318c3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318C3Cu;
    {
        const bool branch_taken_0x318c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c3c) {
            ctx->pc = 0x318C4Cu;
            goto label_318c4c;
        }
    }
    ctx->pc = 0x318C44u;
    // 0x318c44: 0xc0d9574  jal         func_3655D0
    ctx->pc = 0x318C44u;
    SET_GPR_U32(ctx, 31, 0x318C4Cu);
    ctx->pc = 0x3655D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3655D0u, 0x318C44u, 0x318C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C4Cu;
label_318c4c:
    // 0x318c4c: 0xc0c6102  jal         func_318408
    ctx->pc = 0x318C4Cu;
    SET_GPR_U32(ctx, 31, 0x318C54u);
    ctx->pc = 0x318C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C4Cu;
    // 0x318c50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318408u, 0x318C4Cu, 0x318C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C54u;
label_318c54:
    // 0x318c54: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318c58: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x318c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x318c5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318C5Cu;
    {
        const bool branch_taken_0x318c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318c5c) {
            ctx->pc = 0x318C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318C5Cu;
            // 0x318c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318C70u;
            goto label_318c70;
        }
    }
    ctx->pc = 0x318C64u;
    // 0x318c64: 0xc0c60ac  jal         func_3182B0
    ctx->pc = 0x318C64u;
    SET_GPR_U32(ctx, 31, 0x318C6Cu);
    ctx->pc = 0x3182B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3182B0u, 0x318C64u, 0x318C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C6Cu;
label_318c6c:
    // 0x318c6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318c70:
    // 0x318c70: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x318C70u;
    SET_GPR_U32(ctx, 31, 0x318C78u);
    ctx->pc = 0x318C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C70u;
    // 0x318c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x318C70u, 0x318C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C78u;
label_318c78:
    // 0x318c78: 0xc0c6102  jal         func_318408
    ctx->pc = 0x318C78u;
    SET_GPR_U32(ctx, 31, 0x318C80u);
    ctx->pc = 0x318C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C78u;
    // 0x318c7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318408u, 0x318C78u, 0x318C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C80u;
label_318c80:
    // 0x318c80: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318c84: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x318c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x318c88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318C88u;
    {
        const bool branch_taken_0x318c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318C88u;
        // 0x318c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318c88) {
            ctx->pc = 0x318C9Cu;
            goto label_318c9c;
        }
    }
    ctx->pc = 0x318C90u;
    // 0x318c90: 0xc0c61bc  jal         func_3186F0
    ctx->pc = 0x318C90u;
    SET_GPR_U32(ctx, 31, 0x318C98u);
    ctx->pc = 0x318C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C90u;
    // 0x318c94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3186F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3186F0u, 0x318C90u, 0x318C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318C98u;
label_318c98:
    // 0x318c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_318c9c:
    // 0x318c9c: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x318C9Cu;
    SET_GPR_U32(ctx, 31, 0x318CA4u);
    ctx->pc = 0x318CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318C9Cu;
    // 0x318ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x318C9Cu, 0x318CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CA4u;
label_318ca4:
    // 0x318ca4: 0x8e83bda0  lw          $v1, -0x4260($s4)
    ctx->pc = 0x318ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318ca8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x318ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x318cac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x318CACu;
    {
        const bool branch_taken_0x318cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CACu;
        // 0x318cb0: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cac) {
            ctx->pc = 0x318CC0u;
            goto label_318cc0;
        }
    }
    ctx->pc = 0x318CB4u;
    // 0x318cb4: 0xc0c5da6  jal         func_317698
    ctx->pc = 0x318CB4u;
    SET_GPR_U32(ctx, 31, 0x318CBCu);
    ctx->pc = 0x317698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317698u, 0x318CB4u, 0x318CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CBCu;
label_318cbc:
    // 0x318cbc: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318cc0:
    // 0x318cc0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x318cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x318cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318CC4u;
    {
        const bool branch_taken_0x318cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318CC4u;
        // 0x318cc8: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318cc4) {
            ctx->pc = 0x318CD8u;
            goto label_318cd8;
        }
    }
    ctx->pc = 0x318CCCu;
    // 0x318ccc: 0xc0ce356  jal         func_338D58
    ctx->pc = 0x318CCCu;
    SET_GPR_U32(ctx, 31, 0x318CD4u);
    ctx->pc = 0x338D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D58u, 0x318CCCu, 0x318CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CD4u;
label_318cd4:
    // 0x318cd4: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318cd8:
    // 0x318cd8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x318cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x318cdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318CDCu;
    {
        const bool branch_taken_0x318cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318cdc) {
            ctx->pc = 0x318CECu;
            goto label_318cec;
        }
    }
    ctx->pc = 0x318CE4u;
    // 0x318ce4: 0xc0cf610  jal         func_33D840
    ctx->pc = 0x318CE4u;
    SET_GPR_U32(ctx, 31, 0x318CECu);
    ctx->pc = 0x33D840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D840u, 0x318CE4u, 0x318CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CECu;
label_318cec:
    // 0x318cec: 0xc0c6102  jal         func_318408
    ctx->pc = 0x318CECu;
    SET_GPR_U32(ctx, 31, 0x318CF4u);
    ctx->pc = 0x318CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CECu;
    // 0x318cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318408u, 0x318CECu, 0x318CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318CF4u;
label_318cf4:
    // 0x318cf4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x318cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x318cf8: 0xc0dba6c  jal         func_36E9B0
    ctx->pc = 0x318CF8u;
    SET_GPR_U32(ctx, 31, 0x318D00u);
    ctx->pc = 0x318CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318CF8u;
    // 0x318cfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E9B0u, 0x318CF8u, 0x318D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D00u;
label_318d00:
    // 0x318d00: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x318d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x318d04: 0xc0dba6c  jal         func_36E9B0
    ctx->pc = 0x318D04u;
    SET_GPR_U32(ctx, 31, 0x318D0Cu);
    ctx->pc = 0x318D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D04u;
    // 0x318d08: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E9B0u, 0x318D04u, 0x318D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D0Cu;
label_318d0c:
    // 0x318d0c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x318d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x318d10: 0xc0dba6c  jal         func_36E9B0
    ctx->pc = 0x318D10u;
    SET_GPR_U32(ctx, 31, 0x318D18u);
    ctx->pc = 0x318D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D10u;
    // 0x318d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E9B0u, 0x318D10u, 0x318D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D18u;
label_318d18:
    // 0x318d18: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x318d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x318d1c: 0xc0dba6c  jal         func_36E9B0
    ctx->pc = 0x318D1Cu;
    SET_GPR_U32(ctx, 31, 0x318D24u);
    ctx->pc = 0x318D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D1Cu;
    // 0x318d20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E9B0u, 0x318D1Cu, 0x318D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D24u;
label_318d24:
    // 0x318d24: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x318d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x318d28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x318d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x318d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318d30: 0xc0dba1c  jal         func_36E870
    ctx->pc = 0x318D30u;
    SET_GPR_U32(ctx, 31, 0x318D38u);
    ctx->pc = 0x318D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D30u;
    // 0x318d34: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E870u, 0x318D30u, 0x318D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D38u;
label_318d38:
    // 0x318d38: 0xc0b5f9a  jal         func_2D7E68
    ctx->pc = 0x318D38u;
    SET_GPR_U32(ctx, 31, 0x318D40u);
    ctx->pc = 0x2D7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E68u, 0x318D38u, 0x318D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D40u;
label_318d40:
    // 0x318d40: 0xc0b5ff0  jal         func_2D7FC0
    ctx->pc = 0x318D40u;
    SET_GPR_U32(ctx, 31, 0x318D48u);
    ctx->pc = 0x318D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D40u;
    // 0x318d44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7FC0u, 0x318D40u, 0x318D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D48u;
label_318d48:
    // 0x318d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318d4c: 0xc0c2a36  jal         func_30A8D8
    ctx->pc = 0x318D4Cu;
    SET_GPR_U32(ctx, 31, 0x318D54u);
    ctx->pc = 0x318D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D4Cu;
    // 0x318d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8D8u, 0x318D4Cu, 0x318D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D54u;
label_318d54:
    // 0x318d54: 0x26e321e8  addiu       $v1, $s7, 0x21E8
    ctx->pc = 0x318d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
    // 0x318d58: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x318d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x318d5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x318D5Cu;
    {
        const bool branch_taken_0x318d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D5Cu;
        // 0x318d60: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d5c) {
            ctx->pc = 0x318D78u;
            goto label_318d78;
        }
    }
    ctx->pc = 0x318D64u;
    // 0x318d64: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x318d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x318d68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318D68u;
    {
        const bool branch_taken_0x318d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D68u;
        // 0x318d6c: 0x26e221e8  addiu       $v0, $s7, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d68) {
            ctx->pc = 0x318D7Cu;
            goto label_318d7c;
        }
    }
    ctx->pc = 0x318D70u;
    // 0x318d70: 0xc0d2d68  jal         func_34B5A0
    ctx->pc = 0x318D70u;
    SET_GPR_U32(ctx, 31, 0x318D78u);
    ctx->pc = 0x34B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B5A0u, 0x318D70u, 0x318D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D78u;
label_318d78:
    // 0x318d78: 0x26e221e8  addiu       $v0, $s7, 0x21E8
    ctx->pc = 0x318d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
label_318d7c:
    // 0x318d7c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x318d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x318d80: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x318D80u;
    {
        const bool branch_taken_0x318d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D80u;
        // 0x318d84: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d80) {
            ctx->pc = 0x318D9Cu;
            goto label_318d9c;
        }
    }
    ctx->pc = 0x318D88u;
    // 0x318d88: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x318d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x318d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318D8Cu;
    {
        const bool branch_taken_0x318d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318D8Cu;
        // 0x318d90: 0x26e221e8  addiu       $v0, $s7, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318d8c) {
            ctx->pc = 0x318DA0u;
            goto label_318da0;
        }
    }
    ctx->pc = 0x318D94u;
    // 0x318d94: 0xc0c60f0  jal         func_3183C0
    ctx->pc = 0x318D94u;
    SET_GPR_U32(ctx, 31, 0x318D9Cu);
    ctx->pc = 0x318D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318D94u;
    // 0x318d98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3183C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3183C0u, 0x318D94u, 0x318D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318D9Cu;
label_318d9c:
    // 0x318d9c: 0x26e221e8  addiu       $v0, $s7, 0x21E8
    ctx->pc = 0x318d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
label_318da0:
    // 0x318da0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x318da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x318da4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x318DA4u;
    {
        const bool branch_taken_0x318da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DA4u;
        // 0x318da8: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318da4) {
            ctx->pc = 0x318DC0u;
            goto label_318dc0;
        }
    }
    ctx->pc = 0x318DACu;
    // 0x318dac: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x318dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x318db0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318DB0u;
    {
        const bool branch_taken_0x318db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DB0u;
        // 0x318db4: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318db0) {
            ctx->pc = 0x318DC4u;
            goto label_318dc4;
        }
    }
    ctx->pc = 0x318DB8u;
    // 0x318db8: 0xc0d3f28  jal         func_34FCA0
    ctx->pc = 0x318DB8u;
    SET_GPR_U32(ctx, 31, 0x318DC0u);
    ctx->pc = 0x34FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FCA0u, 0x318DB8u, 0x318DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DC0u;
label_318dc0:
    // 0x318dc0: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318dc4:
    // 0x318dc4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x318dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x318dc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x318DC8u;
    {
        const bool branch_taken_0x318dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DC8u;
        // 0x318dcc: 0x26e221e8  addiu       $v0, $s7, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318dc8) {
            ctx->pc = 0x318DE0u;
            goto label_318de0;
        }
    }
    ctx->pc = 0x318DD0u;
    // 0x318dd0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x318dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x318dd4: 0xc0d72d6  jal         func_35CB58
    ctx->pc = 0x318DD4u;
    SET_GPR_U32(ctx, 31, 0x318DDCu);
    ctx->pc = 0x318DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318DD4u;
    // 0x318dd8: 0x2484d5d0  addiu       $a0, $a0, -0x2A30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CB58u, 0x318DD4u, 0x318DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318DDCu;
label_318ddc:
    // 0x318ddc: 0x26e221e8  addiu       $v0, $s7, 0x21E8
    ctx->pc = 0x318ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
label_318de0:
    // 0x318de0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x318de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x318de4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x318DE4u;
    {
        const bool branch_taken_0x318de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DE4u;
        // 0x318de8: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318de4) {
            ctx->pc = 0x318E00u;
            goto label_318e00;
        }
    }
    ctx->pc = 0x318DECu;
    // 0x318dec: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x318decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x318df0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318DF0u;
    {
        const bool branch_taken_0x318df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318DF0u;
        // 0x318df4: 0x26e221e8  addiu       $v0, $s7, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318df0) {
            ctx->pc = 0x318E04u;
            goto label_318e04;
        }
    }
    ctx->pc = 0x318DF8u;
    // 0x318df8: 0xc0d00e2  jal         func_340388
    ctx->pc = 0x318DF8u;
    SET_GPR_U32(ctx, 31, 0x318E00u);
    ctx->pc = 0x340388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340388u, 0x318DF8u, 0x318E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E00u;
label_318e00:
    // 0x318e00: 0x26e221e8  addiu       $v0, $s7, 0x21E8
    ctx->pc = 0x318e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 8680));
label_318e04:
    // 0x318e04: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x318e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x318e08: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x318E08u;
    {
        const bool branch_taken_0x318e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E08u;
        // 0x318e0c: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e08) {
            ctx->pc = 0x318E28u;
            goto label_318e28;
        }
    }
    ctx->pc = 0x318E10u;
    // 0x318e10: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x318e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x318e14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x318e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318e18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318E18u;
    {
        const bool branch_taken_0x318e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E18u;
        // 0x318e1c: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e18) {
            ctx->pc = 0x318E2Cu;
            goto label_318e2c;
        }
    }
    ctx->pc = 0x318E20u;
    // 0x318e20: 0xc0d55a4  jal         func_355690
    ctx->pc = 0x318E20u;
    SET_GPR_U32(ctx, 31, 0x318E28u);
    ctx->pc = 0x355690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355690u, 0x318E20u, 0x318E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E28u;
label_318e28:
    // 0x318e28: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318e2c:
    // 0x318e2c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x318e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x318e30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x318e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318e34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318E34u;
    {
        const bool branch_taken_0x318e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E34u;
        // 0x318e38: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e34) {
            ctx->pc = 0x318E48u;
            goto label_318e48;
        }
    }
    ctx->pc = 0x318E3Cu;
    // 0x318e3c: 0xc09fdac  jal         func_27F6B0
    ctx->pc = 0x318E3Cu;
    SET_GPR_U32(ctx, 31, 0x318E44u);
    ctx->pc = 0x27F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F6B0u, 0x318E3Cu, 0x318E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E44u;
label_318e44:
    // 0x318e44: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318e48:
    // 0x318e48: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x318e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x318e4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x318e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318e50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318E50u;
    {
        const bool branch_taken_0x318e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E50u;
        // 0x318e54: 0x8e82bda0  lw          $v0, -0x4260($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e50) {
            ctx->pc = 0x318E64u;
            goto label_318e64;
        }
    }
    ctx->pc = 0x318E58u;
    // 0x318e58: 0xc08d338  jal         func_234CE0
    ctx->pc = 0x318E58u;
    SET_GPR_U32(ctx, 31, 0x318E60u);
    ctx->pc = 0x234CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234CE0u, 0x318E58u, 0x318E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E60u;
label_318e60:
    // 0x318e60: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
label_318e64:
    // 0x318e64: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x318e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x318e68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x318e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318E6Cu;
    {
        const bool branch_taken_0x318e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318E6Cu;
        // 0x318e70: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318e6c) {
            ctx->pc = 0x318E7Cu;
            goto label_318e7c;
        }
    }
    ctx->pc = 0x318E74u;
    // 0x318e74: 0xc0c25be  jal         func_3096F8
    ctx->pc = 0x318E74u;
    SET_GPR_U32(ctx, 31, 0x318E7Cu);
    ctx->pc = 0x318E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E74u;
    // 0x318e78: 0x24846920  addiu       $a0, $a0, 0x6920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3096F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3096F8u, 0x318E74u, 0x318E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E7Cu;
label_318e7c:
    // 0x318e7c: 0xc0d06fa  jal         func_341BE8
    ctx->pc = 0x318E7Cu;
    SET_GPR_U32(ctx, 31, 0x318E84u);
    ctx->pc = 0x318E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318E7Cu;
    // 0x318e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341BE8u, 0x318E7Cu, 0x318E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E84u;
label_318e84:
    // 0x318e84: 0xc0d6cc0  jal         func_35B300
    ctx->pc = 0x318E84u;
    SET_GPR_U32(ctx, 31, 0x318E8Cu);
    ctx->pc = 0x35B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B300u, 0x318E84u, 0x318E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E8Cu;
label_318e8c:
    // 0x318e8c: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318e90: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x318e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x318e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x318e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318e98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318E98u;
    {
        const bool branch_taken_0x318e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318e98) {
            ctx->pc = 0x318E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318E98u;
            // 0x318e9c: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318EACu;
            goto label_318eac;
        }
    }
    ctx->pc = 0x318EA0u;
    // 0x318ea0: 0xc0d6d18  jal         func_35B460
    ctx->pc = 0x318EA0u;
    SET_GPR_U32(ctx, 31, 0x318EA8u);
    ctx->pc = 0x35B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B460u, 0x318EA0u, 0x318EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318EA8u;
label_318ea8:
    // 0x318ea8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x318ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_318eac:
    // 0x318eac: 0xc082a86  jal         func_20AA18
    ctx->pc = 0x318EACu;
    SET_GPR_U32(ctx, 31, 0x318EB4u);
    ctx->pc = 0x318EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318EACu;
    // 0x318eb0: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA18u, 0x318EACu, 0x318EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318EB4u;
label_318eb4:
    // 0x318eb4: 0xc0c2bb8  jal         func_30AEE0
    ctx->pc = 0x318EB4u;
    SET_GPR_U32(ctx, 31, 0x318EBCu);
    ctx->pc = 0x318EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318EB4u;
    // 0x318eb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEE0u, 0x318EB4u, 0x318EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318EBCu;
label_318ebc:
    // 0x318ebc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x318ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x318ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x318ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ec4: 0xc0c61d0  jal         func_318740
    ctx->pc = 0x318EC4u;
    SET_GPR_U32(ctx, 31, 0x318ECCu);
    ctx->pc = 0x318EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318EC4u;
    // 0x318ec8: 0x9045cd48  lbu         $a1, -0x32B8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294954312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318740u, 0x318EC4u, 0x318ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318ECCu;
label_318ecc:
    // 0x318ecc: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318ed0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x318ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x318ed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x318ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318ed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318ED8u;
    {
        const bool branch_taken_0x318ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318ED8u;
        // 0x318edc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318ed8) {
            ctx->pc = 0x318EE8u;
            goto label_318ee8;
        }
    }
    ctx->pc = 0x318EE0u;
    // 0x318ee0: 0xc0a054c  jal         func_281530
    ctx->pc = 0x318EE0u;
    SET_GPR_U32(ctx, 31, 0x318EE8u);
    ctx->pc = 0x318EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318EE0u;
    // 0x318ee4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281530u, 0x318EE0u, 0x318EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318EE8u;
label_318ee8:
    // 0x318ee8: 0x8e82bda0  lw          $v0, -0x4260($s4)
    ctx->pc = 0x318ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950304)));
    // 0x318eec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318ef0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x318ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x318ef4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x318EF4u;
    {
        const bool branch_taken_0x318ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318ef4) {
            ctx->pc = 0x318F04u;
            goto label_318f04;
        }
    }
    ctx->pc = 0x318EFCu;
    // 0x318efc: 0xc0c610a  jal         func_318428
    ctx->pc = 0x318EFCu;
    SET_GPR_U32(ctx, 31, 0x318F04u);
    ctx->pc = 0x318F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318EFCu;
    // 0x318f00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318428u, 0x318EFCu, 0x318F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F04u;
label_318f04:
    // 0x318f04: 0xc0c66f8  jal         func_319BE0
    ctx->pc = 0x318F04u;
    SET_GPR_U32(ctx, 31, 0x318F0Cu);
    ctx->pc = 0x319BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319BE0u, 0x318F04u, 0x318F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F0Cu;
label_318f0c:
    // 0x318f0c: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x318F0Cu;
    {
        const bool branch_taken_0x318f0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x318F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F0Cu;
        // 0x318f10: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f0c) {
            ctx->pc = 0x318F20u;
            goto label_318f20;
        }
    }
    ctx->pc = 0x318F14u;
    // 0x318f14: 0xc0c611a  jal         func_318468
    ctx->pc = 0x318F14u;
    SET_GPR_U32(ctx, 31, 0x318F1Cu);
    ctx->pc = 0x318F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F14u;
    // 0x318f18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318468u, 0x318F14u, 0x318F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F1Cu;
label_318f1c:
    // 0x318f1c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x318f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_318f20:
    // 0x318f20: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x318f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x318f24: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x318f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x318f28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x318f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x318f2c: 0xc4412298  lwc1        $f1, 0x2298($v0)
    ctx->pc = 0x318f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318f30: 0x24502298  addiu       $s0, $v0, 0x2298
    ctx->pc = 0x318f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8856));
    // 0x318f34: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x318f34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x318f38: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x318f38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x318f3c: 0xe66100e0  swc1        $f1, 0xE0($s3)
    ctx->pc = 0x318f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
    // 0x318f40: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x318f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318f44: 0xe66000e4  swc1        $f0, 0xE4($s3)
    ctx->pc = 0x318f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
    // 0x318f48: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x318F48u;
    SET_GPR_U32(ctx, 31, 0x318F50u);
    ctx->pc = 0x318F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F48u;
    // 0x318f4c: 0xc44c2298  lwc1        $f12, 0x2298($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x318F48u, 0x318F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F50u;
label_318f50:
    // 0x318f50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x318f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x318f54: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x318f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318f58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x318f5c: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x318F5Cu;
    SET_GPR_U32(ctx, 31, 0x318F64u);
    ctx->pc = 0x318F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F5Cu;
    // 0x318f60: 0xe620bb7c  swc1        $f0, -0x4484($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294949756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x318F5Cu, 0x318F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F64u;
label_318f64:
    // 0x318f64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x318f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x318f68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318f68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x318f6c: 0xc0d06e2  jal         func_341B88
    ctx->pc = 0x318F6Cu;
    SET_GPR_U32(ctx, 31, 0x318F74u);
    ctx->pc = 0x318F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F6Cu;
    // 0x318f70: 0xe640bb80  swc1        $f0, -0x4480($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294949760), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x341B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341B88u, 0x318F6Cu, 0x318F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F74u;
label_318f74:
    // 0x318f74: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x318F74u;
    {
        const bool branch_taken_0x318f74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x318f74) {
            ctx->pc = 0x318F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318F74u;
            // 0x318f78: 0xa2c0045c  sb          $zero, 0x45C($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 1116), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318F94u;
            goto label_318f94;
        }
    }
    ctx->pc = 0x318F7Cu;
    // 0x318f7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x318f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318f80: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318F80u;
    {
        const bool branch_taken_0x318f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x318f80) {
            ctx->pc = 0x318F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318F80u;
            // 0x318f84: 0xa2c0045c  sb          $zero, 0x45C($s6) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 22), 1116), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318F94u;
            goto label_318f94;
        }
    }
    ctx->pc = 0x318F88u;
    // 0x318f88: 0xc0c0cdc  jal         func_303370
    ctx->pc = 0x318F88u;
    SET_GPR_U32(ctx, 31, 0x318F90u);
    ctx->pc = 0x318F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318F88u;
    // 0x318f8c: 0x8fc4bd50  lw          $a0, -0x42B0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303370u, 0x318F88u, 0x318F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F90u;
label_318f90:
    // 0x318f90: 0xa2c0045c  sb          $zero, 0x45C($s6)
    ctx->pc = 0x318f90u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1116), (uint8_t)GPR_U32(ctx, 0));
label_318f94:
    // 0x318f94: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318f98: 0x9062bd98  lbu         $v0, -0x4268($v1)
    ctx->pc = 0x318f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD98u));
    // 0x318f9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318F9Cu;
    {
        const bool branch_taken_0x318f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x318FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318F9Cu;
        // 0x318fa0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318f9c) {
            ctx->pc = 0x318FB0u;
            goto label_318fb0;
        }
    }
    ctx->pc = 0x318FA4u;
    // 0x318fa4: 0xc0ab16a  jal         func_2AC5A8
    ctx->pc = 0x318FA4u;
    SET_GPR_U32(ctx, 31, 0x318FACu);
    ctx->pc = 0x2AC5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC5A8u, 0x318FA4u, 0x318FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318FACu;
label_318fac:
    // 0x318fac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x318facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_318fb0:
    // 0x318fb0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x318fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x318fb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x318fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318fb8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x318fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x318fbc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x318fbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318fc0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x318fc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x318fc4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x318fc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318fc8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x318fc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x318fcc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x318fccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x318fd0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x318fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318fd4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x318fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x318fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x318FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318FD8u;
        // 0x318fdc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318FE0u;
}
