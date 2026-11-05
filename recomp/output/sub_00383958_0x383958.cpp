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

// Function: sub_00383958
// Address: 0x383958 - 0x383b48
void sub_00383958_0x383958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383958_0x383958");
#endif

    switch (ctx->pc) {
        case 0x383958u: goto label_383958;
        case 0x38395cu: goto label_38395c;
        case 0x383960u: goto label_383960;
        case 0x383964u: goto label_383964;
        case 0x383968u: goto label_383968;
        case 0x38396cu: goto label_38396c;
        case 0x383970u: goto label_383970;
        case 0x383974u: goto label_383974;
        case 0x383978u: goto label_383978;
        case 0x38397cu: goto label_38397c;
        case 0x383980u: goto label_383980;
        case 0x383984u: goto label_383984;
        case 0x383988u: goto label_383988;
        case 0x38398cu: goto label_38398c;
        case 0x383990u: goto label_383990;
        case 0x383994u: goto label_383994;
        case 0x383998u: goto label_383998;
        case 0x38399cu: goto label_38399c;
        case 0x3839a0u: goto label_3839a0;
        case 0x3839a4u: goto label_3839a4;
        case 0x3839a8u: goto label_3839a8;
        case 0x3839acu: goto label_3839ac;
        case 0x3839b0u: goto label_3839b0;
        case 0x3839b4u: goto label_3839b4;
        case 0x3839b8u: goto label_3839b8;
        case 0x3839bcu: goto label_3839bc;
        case 0x3839c0u: goto label_3839c0;
        case 0x3839c4u: goto label_3839c4;
        case 0x3839c8u: goto label_3839c8;
        case 0x3839ccu: goto label_3839cc;
        case 0x3839d0u: goto label_3839d0;
        case 0x3839d4u: goto label_3839d4;
        case 0x3839d8u: goto label_3839d8;
        case 0x3839dcu: goto label_3839dc;
        case 0x3839e0u: goto label_3839e0;
        case 0x3839e4u: goto label_3839e4;
        case 0x3839e8u: goto label_3839e8;
        case 0x3839ecu: goto label_3839ec;
        case 0x3839f0u: goto label_3839f0;
        case 0x3839f4u: goto label_3839f4;
        case 0x3839f8u: goto label_3839f8;
        case 0x3839fcu: goto label_3839fc;
        case 0x383a00u: goto label_383a00;
        case 0x383a04u: goto label_383a04;
        case 0x383a08u: goto label_383a08;
        case 0x383a0cu: goto label_383a0c;
        case 0x383a10u: goto label_383a10;
        case 0x383a14u: goto label_383a14;
        case 0x383a18u: goto label_383a18;
        case 0x383a1cu: goto label_383a1c;
        case 0x383a20u: goto label_383a20;
        case 0x383a24u: goto label_383a24;
        case 0x383a28u: goto label_383a28;
        case 0x383a2cu: goto label_383a2c;
        case 0x383a30u: goto label_383a30;
        case 0x383a34u: goto label_383a34;
        case 0x383a38u: goto label_383a38;
        case 0x383a3cu: goto label_383a3c;
        case 0x383a40u: goto label_383a40;
        case 0x383a44u: goto label_383a44;
        case 0x383a48u: goto label_383a48;
        case 0x383a4cu: goto label_383a4c;
        case 0x383a50u: goto label_383a50;
        case 0x383a54u: goto label_383a54;
        case 0x383a58u: goto label_383a58;
        case 0x383a5cu: goto label_383a5c;
        case 0x383a60u: goto label_383a60;
        case 0x383a64u: goto label_383a64;
        case 0x383a68u: goto label_383a68;
        case 0x383a6cu: goto label_383a6c;
        case 0x383a70u: goto label_383a70;
        case 0x383a74u: goto label_383a74;
        case 0x383a78u: goto label_383a78;
        case 0x383a7cu: goto label_383a7c;
        case 0x383a80u: goto label_383a80;
        case 0x383a84u: goto label_383a84;
        case 0x383a88u: goto label_383a88;
        case 0x383a8cu: goto label_383a8c;
        case 0x383a90u: goto label_383a90;
        case 0x383a94u: goto label_383a94;
        case 0x383a98u: goto label_383a98;
        case 0x383a9cu: goto label_383a9c;
        case 0x383aa0u: goto label_383aa0;
        case 0x383aa4u: goto label_383aa4;
        case 0x383aa8u: goto label_383aa8;
        case 0x383aacu: goto label_383aac;
        case 0x383ab0u: goto label_383ab0;
        case 0x383ab4u: goto label_383ab4;
        case 0x383ab8u: goto label_383ab8;
        case 0x383abcu: goto label_383abc;
        case 0x383ac0u: goto label_383ac0;
        case 0x383ac4u: goto label_383ac4;
        case 0x383ac8u: goto label_383ac8;
        case 0x383accu: goto label_383acc;
        case 0x383ad0u: goto label_383ad0;
        case 0x383ad4u: goto label_383ad4;
        case 0x383ad8u: goto label_383ad8;
        case 0x383adcu: goto label_383adc;
        case 0x383ae0u: goto label_383ae0;
        case 0x383ae4u: goto label_383ae4;
        case 0x383ae8u: goto label_383ae8;
        case 0x383aecu: goto label_383aec;
        case 0x383af0u: goto label_383af0;
        case 0x383af4u: goto label_383af4;
        case 0x383af8u: goto label_383af8;
        case 0x383afcu: goto label_383afc;
        case 0x383b00u: goto label_383b00;
        case 0x383b04u: goto label_383b04;
        case 0x383b08u: goto label_383b08;
        case 0x383b0cu: goto label_383b0c;
        case 0x383b10u: goto label_383b10;
        case 0x383b14u: goto label_383b14;
        case 0x383b18u: goto label_383b18;
        case 0x383b1cu: goto label_383b1c;
        case 0x383b20u: goto label_383b20;
        case 0x383b24u: goto label_383b24;
        case 0x383b28u: goto label_383b28;
        case 0x383b2cu: goto label_383b2c;
        case 0x383b30u: goto label_383b30;
        case 0x383b34u: goto label_383b34;
        case 0x383b38u: goto label_383b38;
        case 0x383b3cu: goto label_383b3c;
        case 0x383b40u: goto label_383b40;
        case 0x383b44u: goto label_383b44;
        default: break;
    }

    ctx->pc = 0x383958u;

label_383958:
    // 0x383958: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x383958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_38395c:
    // 0x38395c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x38395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_383960:
    // 0x383960: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x383960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_383964:
    // 0x383964: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x383964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_383968:
    // 0x383968: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x383968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_38396c:
    // 0x38396c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x38396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_383970:
    // 0x383970: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x383970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_383974:
    // 0x383974: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x383974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383978:
    // 0x383978: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x383978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_38397c:
    // 0x38397c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x38397cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_383980:
    // 0x383980: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x383980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_383984:
    // 0x383984: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x383984u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_383988:
    // 0x383988: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x383988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_38398c:
    // 0x38398c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x38398cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_383990:
    // 0x383990: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x383990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_383994:
    // 0x383994: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x383994u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_383998:
    // 0x383998: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x383998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_38399c:
    // 0x38399c: 0x24050120  addiu       $a1, $zero, 0x120
    ctx->pc = 0x38399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_3839a0:
    // 0x3839a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3839a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3839a4:
    // 0x3839a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3839a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3839a8:
    // 0x3839a8: 0x8fb100c0  lw          $s1, 0xC0($sp)
    ctx->pc = 0x3839a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3839ac:
    // 0x3839ac: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3839acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3839b0:
    // 0x3839b0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3839b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3839b4:
    // 0x3839b4: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x3839b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
label_3839b8:
    // 0x3839b8: 0x40f809  jalr        $v0
label_3839bc:
    if (ctx->pc == 0x3839BCu) {
        ctx->pc = 0x3839BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839B8u;
        // 0x3839bc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3839C0u;
        goto label_3839c0;
    }
    ctx->pc = 0x3839B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3839C0u);
        ctx->pc = 0x3839BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839B8u;
        // 0x3839bc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3839B8u, 0x3839C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3839C0u;
label_3839c0:
    // 0x3839c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3839c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3839c4:
    // 0x3839c4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_3839c8:
    if (ctx->pc == 0x3839C8u) {
        ctx->pc = 0x3839C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839C4u;
        // 0x3839c8: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3839CCu;
        goto label_3839cc;
    }
    ctx->pc = 0x3839C4u;
    {
        const bool branch_taken_0x3839c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3839C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839C4u;
        // 0x3839c8: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839c4) {
            ctx->pc = 0x3839D4u;
            goto label_3839d4;
        }
    }
    ctx->pc = 0x3839CCu;
label_3839cc:
    // 0x3839cc: 0x10000052  b           . + 4 + (0x52 << 2)
label_3839d0:
    if (ctx->pc == 0x3839D0u) {
        ctx->pc = 0x3839D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839CCu;
        // 0x3839d0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3839D4u;
        goto label_3839d4;
    }
    ctx->pc = 0x3839CCu;
    {
        const bool branch_taken_0x3839cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3839D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839CCu;
        // 0x3839d0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3839cc) {
            ctx->pc = 0x383B18u;
            goto label_383b18;
        }
    }
    ctx->pc = 0x3839D4u;
label_3839d4:
    // 0x3839d4: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x3839d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_3839d8:
    // 0x3839d8: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x3839d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
label_3839dc:
    // 0x3839dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3839dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3839e0:
    // 0x3839e0: 0x24e78558  addiu       $a3, $a3, -0x7AA8
    ctx->pc = 0x3839e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935896));
label_3839e4:
    // 0x3839e4: 0x250885d8  addiu       $t0, $t0, -0x7A28
    ctx->pc = 0x3839e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936024));
label_3839e8:
    // 0x3839e8: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x3839e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_3839ec:
    // 0x3839ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3839ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3839f0:
    // 0x3839f0: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3839f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_3839f4:
    // 0x3839f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3839f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3839f8:
    // 0x3839f8: 0x24060101  addiu       $a2, $zero, 0x101
    ctx->pc = 0x3839f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_3839fc:
    // 0x3839fc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x3839fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_383a00:
    // 0x383a00: 0xc0e0c98  jal         func_383260
label_383a04:
    if (ctx->pc == 0x383A04u) {
        ctx->pc = 0x383A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A00u;
        // 0x383a04: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A08u;
        goto label_383a08;
    }
    ctx->pc = 0x383A00u;
    SET_GPR_U32(ctx, 31, 0x383A08u);
    ctx->pc = 0x383A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383A00u;
    // 0x383a04: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383260u, 0x383A00u, 0x383A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383A08u;
label_383a08:
    // 0x383a08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x383a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383a0c:
    // 0x383a0c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_383a10:
    if (ctx->pc == 0x383A10u) {
        ctx->pc = 0x383A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A0Cu;
        // 0x383a10: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A14u;
        goto label_383a14;
    }
    ctx->pc = 0x383A0Cu;
    {
        const bool branch_taken_0x383a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x383A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A0Cu;
        // 0x383a10: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a0c) {
            ctx->pc = 0x383A24u;
            goto label_383a24;
        }
    }
    ctx->pc = 0x383A14u;
label_383a14:
    // 0x383a14: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x383a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_383a18:
    // 0x383a18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_383a1c:
    if (ctx->pc == 0x383A1Cu) {
        ctx->pc = 0x383A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A18u;
        // 0x383a1c: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A20u;
        goto label_383a20;
    }
    ctx->pc = 0x383A18u;
    {
        const bool branch_taken_0x383a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A18u;
        // 0x383a1c: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a18) {
            ctx->pc = 0x383A50u;
            goto label_383a50;
        }
    }
    ctx->pc = 0x383A20u;
label_383a20:
    // 0x383a20: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x383a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_383a24:
    // 0x383a24: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_383a28:
    if (ctx->pc == 0x383A28u) {
        ctx->pc = 0x383A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A24u;
        // 0x383a28: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A2Cu;
        goto label_383a2c;
    }
    ctx->pc = 0x383A24u;
    {
        const bool branch_taken_0x383a24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x383a24) {
            ctx->pc = 0x383A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383A24u;
            // 0x383a28: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383A38u;
            goto label_383a38;
        }
    }
    ctx->pc = 0x383A2Cu;
label_383a2c:
    // 0x383a2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x383a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_383a30:
    // 0x383a30: 0x1000002e  b           . + 4 + (0x2E << 2)
label_383a34:
    if (ctx->pc == 0x383A34u) {
        ctx->pc = 0x383A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A30u;
        // 0x383a34: 0x24428798  addiu       $v0, $v0, -0x7868 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A38u;
        goto label_383a38;
    }
    ctx->pc = 0x383A30u;
    {
        const bool branch_taken_0x383a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A30u;
        // 0x383a34: 0x24428798  addiu       $v0, $v0, -0x7868 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a30) {
            ctx->pc = 0x383AECu;
            goto label_383aec;
        }
    }
    ctx->pc = 0x383A38u;
label_383a38:
    // 0x383a38: 0x5202002e  beql        $s0, $v0, . + 4 + (0x2E << 2)
label_383a3c:
    if (ctx->pc == 0x383A3Cu) {
        ctx->pc = 0x383A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A38u;
        // 0x383a3c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A40u;
        goto label_383a40;
    }
    ctx->pc = 0x383A38u;
    {
        const bool branch_taken_0x383a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x383a38) {
            ctx->pc = 0x383A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383A38u;
            // 0x383a3c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383AF4u;
            goto label_383af4;
        }
    }
    ctx->pc = 0x383A40u;
label_383a40:
    // 0x383a40: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x383a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_383a44:
    // 0x383a44: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x383a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_383a48:
    // 0x383a48: 0x10000028  b           . + 4 + (0x28 << 2)
label_383a4c:
    if (ctx->pc == 0x383A4Cu) {
        ctx->pc = 0x383A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A48u;
        // 0x383a4c: 0x244287c0  addiu       $v0, $v0, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A50u;
        goto label_383a50;
    }
    ctx->pc = 0x383A48u;
    {
        const bool branch_taken_0x383a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A48u;
        // 0x383a4c: 0x244287c0  addiu       $v0, $v0, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a48) {
            ctx->pc = 0x383AECu;
            goto label_383aec;
        }
    }
    ctx->pc = 0x383A50u;
label_383a50:
    // 0x383a50: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x383a50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
label_383a54:
    // 0x383a54: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x383a54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
label_383a58:
    // 0x383a58: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x383a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_383a5c:
    // 0x383a5c: 0x8fa90018  lw          $t1, 0x18($sp)
    ctx->pc = 0x383a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_383a60:
    // 0x383a60: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x383a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_383a64:
    // 0x383a64: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x383a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_383a68:
    // 0x383a68: 0x24e78658  addiu       $a3, $a3, -0x79A8
    ctx->pc = 0x383a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936152));
label_383a6c:
    // 0x383a6c: 0x250886d0  addiu       $t0, $t0, -0x7930
    ctx->pc = 0x383a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936272));
label_383a70:
    // 0x383a70: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x383a70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_383a74:
    // 0x383a74: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x383a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_383a78:
    // 0x383a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383a7c:
    // 0x383a7c: 0xc0e0c98  jal         func_383260
label_383a80:
    if (ctx->pc == 0x383A80u) {
        ctx->pc = 0x383A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A7Cu;
        // 0x383a80: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A84u;
        goto label_383a84;
    }
    ctx->pc = 0x383A7Cu;
    SET_GPR_U32(ctx, 31, 0x383A84u);
    ctx->pc = 0x383A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383A7Cu;
    // 0x383a80: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383260u, 0x383A7Cu, 0x383A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383A84u;
label_383a84:
    // 0x383a84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x383a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383a88:
    // 0x383a88: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_383a8c:
    if (ctx->pc == 0x383A8Cu) {
        ctx->pc = 0x383A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A88u;
        // 0x383a8c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A90u;
        goto label_383a90;
    }
    ctx->pc = 0x383A88u;
    {
        const bool branch_taken_0x383a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x383A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A88u;
        // 0x383a8c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a88) {
            ctx->pc = 0x383AACu;
            goto label_383aac;
        }
    }
    ctx->pc = 0x383A90u;
label_383a90:
    // 0x383a90: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x383a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_383a94:
    // 0x383a94: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_383a98:
    if (ctx->pc == 0x383A98u) {
        ctx->pc = 0x383A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A94u;
        // 0x383a98: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A9Cu;
        goto label_383a9c;
    }
    ctx->pc = 0x383A94u;
    {
        const bool branch_taken_0x383a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383a94) {
            ctx->pc = 0x383A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383A94u;
            // 0x383a98: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B08u;
            goto label_383b08;
        }
    }
    ctx->pc = 0x383A9Cu;
label_383a9c:
    // 0x383a9c: 0x2e620102  sltiu       $v0, $s3, 0x102
    ctx->pc = 0x383a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
label_383aa0:
    // 0x383aa0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_383aa4:
    if (ctx->pc == 0x383AA4u) {
        ctx->pc = 0x383AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AA0u;
        // 0x383aa4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AA8u;
        goto label_383aa8;
    }
    ctx->pc = 0x383AA0u;
    {
        const bool branch_taken_0x383aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383aa0) {
            ctx->pc = 0x383AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383AA0u;
            // 0x383aa4: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B08u;
            goto label_383b08;
        }
    }
    ctx->pc = 0x383AA8u;
label_383aa8:
    // 0x383aa8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x383aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_383aac:
    // 0x383aac: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_383ab0:
    if (ctx->pc == 0x383AB0u) {
        ctx->pc = 0x383AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AACu;
        // 0x383ab0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AB4u;
        goto label_383ab4;
    }
    ctx->pc = 0x383AACu;
    {
        const bool branch_taken_0x383aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x383aac) {
            ctx->pc = 0x383AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383AACu;
            // 0x383ab0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383AC0u;
            goto label_383ac0;
        }
    }
    ctx->pc = 0x383AB4u;
label_383ab4:
    // 0x383ab4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x383ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_383ab8:
    // 0x383ab8: 0x1000000c  b           . + 4 + (0xC << 2)
label_383abc:
    if (ctx->pc == 0x383ABCu) {
        ctx->pc = 0x383ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AB8u;
        // 0x383abc: 0x244287e0  addiu       $v0, $v0, -0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AC0u;
        goto label_383ac0;
    }
    ctx->pc = 0x383AB8u;
    {
        const bool branch_taken_0x383ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AB8u;
        // 0x383abc: 0x244287e0  addiu       $v0, $v0, -0x7820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ab8) {
            ctx->pc = 0x383AECu;
            goto label_383aec;
        }
    }
    ctx->pc = 0x383AC0u;
label_383ac0:
    // 0x383ac0: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
label_383ac4:
    if (ctx->pc == 0x383AC4u) {
        ctx->pc = 0x383AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AC0u;
        // 0x383ac4: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AC8u;
        goto label_383ac8;
    }
    ctx->pc = 0x383AC0u;
    {
        const bool branch_taken_0x383ac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x383ac0) {
            ctx->pc = 0x383AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383AC0u;
            // 0x383ac4: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383AD8u;
            goto label_383ad8;
        }
    }
    ctx->pc = 0x383AC8u;
label_383ac8:
    // 0x383ac8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x383ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_383acc:
    // 0x383acc: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x383accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_383ad0:
    // 0x383ad0: 0x10000006  b           . + 4 + (0x6 << 2)
label_383ad4:
    if (ctx->pc == 0x383AD4u) {
        ctx->pc = 0x383AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AD0u;
        // 0x383ad4: 0x24428800  addiu       $v0, $v0, -0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AD8u;
        goto label_383ad8;
    }
    ctx->pc = 0x383AD0u;
    {
        const bool branch_taken_0x383ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AD0u;
        // 0x383ad4: 0x24428800  addiu       $v0, $v0, -0x7800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ad0) {
            ctx->pc = 0x383AECu;
            goto label_383aec;
        }
    }
    ctx->pc = 0x383AD8u;
label_383ad8:
    // 0x383ad8: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
label_383adc:
    if (ctx->pc == 0x383ADCu) {
        ctx->pc = 0x383ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AD8u;
        // 0x383adc: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AE0u;
        goto label_383ae0;
    }
    ctx->pc = 0x383AD8u;
    {
        const bool branch_taken_0x383ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x383ad8) {
            ctx->pc = 0x383ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383AD8u;
            // 0x383adc: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383AF4u;
            goto label_383af4;
        }
    }
    ctx->pc = 0x383AE0u;
label_383ae0:
    // 0x383ae0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x383ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_383ae4:
    // 0x383ae4: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x383ae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_383ae8:
    // 0x383ae8: 0x24428820  addiu       $v0, $v0, -0x77E0
    ctx->pc = 0x383ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936608));
label_383aec:
    // 0x383aec: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x383aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_383af0:
    // 0x383af0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x383af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_383af4:
    // 0x383af4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x383af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_383af8:
    // 0x383af8: 0x40f809  jalr        $v0
label_383afc:
    if (ctx->pc == 0x383AFCu) {
        ctx->pc = 0x383AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AF8u;
        // 0x383afc: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383B00u;
        goto label_383b00;
    }
    ctx->pc = 0x383AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383B00u);
        ctx->pc = 0x383AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AF8u;
        // 0x383afc: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383AF8u, 0x383B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383B00u;
label_383b00:
    // 0x383b00: 0x10000005  b           . + 4 + (0x5 << 2)
label_383b04:
    if (ctx->pc == 0x383B04u) {
        ctx->pc = 0x383B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B00u;
        // 0x383b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383B08u;
        goto label_383b08;
    }
    ctx->pc = 0x383B00u;
    {
        const bool branch_taken_0x383b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B00u;
        // 0x383b04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b00) {
            ctx->pc = 0x383B18u;
            goto label_383b18;
        }
    }
    ctx->pc = 0x383B08u;
label_383b08:
    // 0x383b08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x383b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_383b0c:
    // 0x383b0c: 0x40f809  jalr        $v0
label_383b10:
    if (ctx->pc == 0x383B10u) {
        ctx->pc = 0x383B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B0Cu;
        // 0x383b10: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383B14u;
        goto label_383b14;
    }
    ctx->pc = 0x383B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383B14u);
        ctx->pc = 0x383B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B0Cu;
        // 0x383b10: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383B0Cu, 0x383B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383B14u;
label_383b14:
    // 0x383b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x383b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383b18:
    // 0x383b18: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x383b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_383b1c:
    // 0x383b1c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x383b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_383b20:
    // 0x383b20: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x383b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_383b24:
    // 0x383b24: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x383b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_383b28:
    // 0x383b28: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x383b28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_383b2c:
    // 0x383b2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x383b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_383b30:
    // 0x383b30: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x383b30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_383b34:
    // 0x383b34: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x383b34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383b38:
    // 0x383b38: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x383b38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_383b3c:
    // 0x383b3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x383b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_383b40:
    // 0x383b40: 0x3e00008  jr          $ra
label_383b44:
    if (ctx->pc == 0x383B44u) {
        ctx->pc = 0x383B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B40u;
        // 0x383b44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383B48u;
        goto label_fallthrough_0x383b40;
    }
    ctx->pc = 0x383B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B40u;
        // 0x383b44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x383b40:
    ctx->pc = 0x383B48u;
}
