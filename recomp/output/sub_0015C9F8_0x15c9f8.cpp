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

// Function: sub_0015C9F8
// Address: 0x15c9f8 - 0x15cc38
void sub_0015C9F8_0x15c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C9F8_0x15c9f8");
#endif

    switch (ctx->pc) {
        case 0x15c9f8u: goto label_15c9f8;
        case 0x15c9fcu: goto label_15c9fc;
        case 0x15ca00u: goto label_15ca00;
        case 0x15ca04u: goto label_15ca04;
        case 0x15ca08u: goto label_15ca08;
        case 0x15ca0cu: goto label_15ca0c;
        case 0x15ca10u: goto label_15ca10;
        case 0x15ca14u: goto label_15ca14;
        case 0x15ca18u: goto label_15ca18;
        case 0x15ca1cu: goto label_15ca1c;
        case 0x15ca20u: goto label_15ca20;
        case 0x15ca24u: goto label_15ca24;
        case 0x15ca28u: goto label_15ca28;
        case 0x15ca2cu: goto label_15ca2c;
        case 0x15ca30u: goto label_15ca30;
        case 0x15ca34u: goto label_15ca34;
        case 0x15ca38u: goto label_15ca38;
        case 0x15ca3cu: goto label_15ca3c;
        case 0x15ca40u: goto label_15ca40;
        case 0x15ca44u: goto label_15ca44;
        case 0x15ca48u: goto label_15ca48;
        case 0x15ca4cu: goto label_15ca4c;
        case 0x15ca50u: goto label_15ca50;
        case 0x15ca54u: goto label_15ca54;
        case 0x15ca58u: goto label_15ca58;
        case 0x15ca5cu: goto label_15ca5c;
        case 0x15ca60u: goto label_15ca60;
        case 0x15ca64u: goto label_15ca64;
        case 0x15ca68u: goto label_15ca68;
        case 0x15ca6cu: goto label_15ca6c;
        case 0x15ca70u: goto label_15ca70;
        case 0x15ca74u: goto label_15ca74;
        case 0x15ca78u: goto label_15ca78;
        case 0x15ca7cu: goto label_15ca7c;
        case 0x15ca80u: goto label_15ca80;
        case 0x15ca84u: goto label_15ca84;
        case 0x15ca88u: goto label_15ca88;
        case 0x15ca8cu: goto label_15ca8c;
        case 0x15ca90u: goto label_15ca90;
        case 0x15ca94u: goto label_15ca94;
        case 0x15ca98u: goto label_15ca98;
        case 0x15ca9cu: goto label_15ca9c;
        case 0x15caa0u: goto label_15caa0;
        case 0x15caa4u: goto label_15caa4;
        case 0x15caa8u: goto label_15caa8;
        case 0x15caacu: goto label_15caac;
        case 0x15cab0u: goto label_15cab0;
        case 0x15cab4u: goto label_15cab4;
        case 0x15cab8u: goto label_15cab8;
        case 0x15cabcu: goto label_15cabc;
        case 0x15cac0u: goto label_15cac0;
        case 0x15cac4u: goto label_15cac4;
        case 0x15cac8u: goto label_15cac8;
        case 0x15caccu: goto label_15cacc;
        case 0x15cad0u: goto label_15cad0;
        case 0x15cad4u: goto label_15cad4;
        case 0x15cad8u: goto label_15cad8;
        case 0x15cadcu: goto label_15cadc;
        case 0x15cae0u: goto label_15cae0;
        case 0x15cae4u: goto label_15cae4;
        case 0x15cae8u: goto label_15cae8;
        case 0x15caecu: goto label_15caec;
        case 0x15caf0u: goto label_15caf0;
        case 0x15caf4u: goto label_15caf4;
        case 0x15caf8u: goto label_15caf8;
        case 0x15cafcu: goto label_15cafc;
        case 0x15cb00u: goto label_15cb00;
        case 0x15cb04u: goto label_15cb04;
        case 0x15cb08u: goto label_15cb08;
        case 0x15cb0cu: goto label_15cb0c;
        case 0x15cb10u: goto label_15cb10;
        case 0x15cb14u: goto label_15cb14;
        case 0x15cb18u: goto label_15cb18;
        case 0x15cb1cu: goto label_15cb1c;
        case 0x15cb20u: goto label_15cb20;
        case 0x15cb24u: goto label_15cb24;
        case 0x15cb28u: goto label_15cb28;
        case 0x15cb2cu: goto label_15cb2c;
        case 0x15cb30u: goto label_15cb30;
        case 0x15cb34u: goto label_15cb34;
        case 0x15cb38u: goto label_15cb38;
        case 0x15cb3cu: goto label_15cb3c;
        case 0x15cb40u: goto label_15cb40;
        case 0x15cb44u: goto label_15cb44;
        case 0x15cb48u: goto label_15cb48;
        case 0x15cb4cu: goto label_15cb4c;
        case 0x15cb50u: goto label_15cb50;
        case 0x15cb54u: goto label_15cb54;
        case 0x15cb58u: goto label_15cb58;
        case 0x15cb5cu: goto label_15cb5c;
        case 0x15cb60u: goto label_15cb60;
        case 0x15cb64u: goto label_15cb64;
        case 0x15cb68u: goto label_15cb68;
        case 0x15cb6cu: goto label_15cb6c;
        case 0x15cb70u: goto label_15cb70;
        case 0x15cb74u: goto label_15cb74;
        case 0x15cb78u: goto label_15cb78;
        case 0x15cb7cu: goto label_15cb7c;
        case 0x15cb80u: goto label_15cb80;
        case 0x15cb84u: goto label_15cb84;
        case 0x15cb88u: goto label_15cb88;
        case 0x15cb8cu: goto label_15cb8c;
        case 0x15cb90u: goto label_15cb90;
        case 0x15cb94u: goto label_15cb94;
        case 0x15cb98u: goto label_15cb98;
        case 0x15cb9cu: goto label_15cb9c;
        case 0x15cba0u: goto label_15cba0;
        case 0x15cba4u: goto label_15cba4;
        case 0x15cba8u: goto label_15cba8;
        case 0x15cbacu: goto label_15cbac;
        case 0x15cbb0u: goto label_15cbb0;
        case 0x15cbb4u: goto label_15cbb4;
        case 0x15cbb8u: goto label_15cbb8;
        case 0x15cbbcu: goto label_15cbbc;
        case 0x15cbc0u: goto label_15cbc0;
        case 0x15cbc4u: goto label_15cbc4;
        case 0x15cbc8u: goto label_15cbc8;
        case 0x15cbccu: goto label_15cbcc;
        case 0x15cbd0u: goto label_15cbd0;
        case 0x15cbd4u: goto label_15cbd4;
        case 0x15cbd8u: goto label_15cbd8;
        case 0x15cbdcu: goto label_15cbdc;
        case 0x15cbe0u: goto label_15cbe0;
        case 0x15cbe4u: goto label_15cbe4;
        case 0x15cbe8u: goto label_15cbe8;
        case 0x15cbecu: goto label_15cbec;
        case 0x15cbf0u: goto label_15cbf0;
        case 0x15cbf4u: goto label_15cbf4;
        case 0x15cbf8u: goto label_15cbf8;
        case 0x15cbfcu: goto label_15cbfc;
        case 0x15cc00u: goto label_15cc00;
        case 0x15cc04u: goto label_15cc04;
        case 0x15cc08u: goto label_15cc08;
        case 0x15cc0cu: goto label_15cc0c;
        case 0x15cc10u: goto label_15cc10;
        case 0x15cc14u: goto label_15cc14;
        case 0x15cc18u: goto label_15cc18;
        case 0x15cc1cu: goto label_15cc1c;
        case 0x15cc20u: goto label_15cc20;
        case 0x15cc24u: goto label_15cc24;
        case 0x15cc28u: goto label_15cc28;
        case 0x15cc2cu: goto label_15cc2c;
        case 0x15cc30u: goto label_15cc30;
        case 0x15cc34u: goto label_15cc34;
        default: break;
    }

    ctx->pc = 0x15c9f8u;

label_15c9f8:
    // 0x15c9f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15c9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15c9fc:
    // 0x15c9fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15c9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15ca00:
    // 0x15ca00: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_15ca04:
    // 0x15ca04: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x15ca04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15ca08:
    // 0x15ca08: 0x24160070  addiu       $s6, $zero, 0x70
    ctx->pc = 0x15ca08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15ca0c:
    // 0x15ca0c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_15ca10:
    // 0x15ca10: 0x2961818  mult        $v1, $s4, $s6
    ctx->pc = 0x15ca10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15ca14:
    // 0x15ca14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15ca14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ca18:
    // 0x15ca18: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_15ca1c:
    // 0x15ca1c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15ca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_15ca20:
    // 0x15ca20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x15ca20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15ca24:
    // 0x15ca24: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_15ca28:
    // 0x15ca28: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x15ca28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15ca2c:
    // 0x15ca2c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_15ca30:
    // 0x15ca30: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ca34:
    // 0x15ca34: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_15ca38:
    // 0x15ca38: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x15ca38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_15ca3c:
    // 0x15ca3c: 0xf8410350  sqc2        $vf1, 0x350($v0)
    ctx->pc = 0x15ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 848), _mm_castps_si128(ctx->vu0_vf[1]));
label_15ca40:
    // 0x15ca40: 0x8e4302f8  lw          $v1, 0x2F8($s2)
    ctx->pc = 0x15ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
label_15ca44:
    // 0x15ca44: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_15ca48:
    if (ctx->pc == 0x15CA48u) {
        ctx->pc = 0x15CA4Cu;
        goto label_15ca4c;
    }
    ctx->pc = 0x15CA44u;
    {
        const bool branch_taken_0x15ca44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ca44) {
            ctx->pc = 0x15CB54u;
            goto label_15cb54;
        }
    }
    ctx->pc = 0x15CA4Cu;
label_15ca4c:
    // 0x15ca4c: 0xc04f1f4  jal         func_13C7D0
label_15ca50:
    if (ctx->pc == 0x15CA50u) {
        ctx->pc = 0x15CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA4Cu;
        // 0x15ca50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA54u;
        goto label_15ca54;
    }
    ctx->pc = 0x15CA4Cu;
    SET_GPR_U32(ctx, 31, 0x15CA54u);
    ctx->pc = 0x15CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA4Cu;
    // 0x15ca50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x15CA4Cu, 0x15CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA54u;
label_15ca54:
    // 0x15ca54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15ca54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ca58:
    // 0x15ca58: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15ca5c:
    // 0x15ca5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ca5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ca60:
    // 0x15ca60: 0xc04f33e  jal         func_13CCF8
label_15ca64:
    if (ctx->pc == 0x15CA64u) {
        ctx->pc = 0x15CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA60u;
        // 0x15ca64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA68u;
        goto label_15ca68;
    }
    ctx->pc = 0x15CA60u;
    SET_GPR_U32(ctx, 31, 0x15CA68u);
    ctx->pc = 0x15CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA60u;
    // 0x15ca64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15CA60u, 0x15CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA68u;
label_15ca68:
    // 0x15ca68: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_15ca6c:
    // 0x15ca6c: 0xc04f0b6  jal         func_13C2D8
label_15ca70:
    if (ctx->pc == 0x15CA70u) {
        ctx->pc = 0x15CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA6Cu;
        // 0x15ca70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA74u;
        goto label_15ca74;
    }
    ctx->pc = 0x15CA6Cu;
    SET_GPR_U32(ctx, 31, 0x15CA74u);
    ctx->pc = 0x15CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA6Cu;
    // 0x15ca70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15CA6Cu, 0x15CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA74u;
label_15ca74:
    // 0x15ca74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ca78:
    // 0x15ca78: 0xc0f6a96  jal         func_3DAA58
label_15ca7c:
    if (ctx->pc == 0x15CA7Cu) {
        ctx->pc = 0x15CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA78u;
        // 0x15ca7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA80u;
        goto label_15ca80;
    }
    ctx->pc = 0x15CA78u;
    SET_GPR_U32(ctx, 31, 0x15CA80u);
    ctx->pc = 0x15CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA78u;
    // 0x15ca7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15CA78u, 0x15CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA80u;
label_15ca80:
    // 0x15ca80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15ca80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15ca84:
    // 0x15ca84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ca84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15ca88:
    // 0x15ca88: 0xc057b8e  jal         func_15EE38
label_15ca8c:
    if (ctx->pc == 0x15CA8Cu) {
        ctx->pc = 0x15CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA88u;
        // 0x15ca8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA90u;
        goto label_15ca90;
    }
    ctx->pc = 0x15CA88u;
    SET_GPR_U32(ctx, 31, 0x15CA90u);
    ctx->pc = 0x15CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA88u;
    // 0x15ca8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EE38u, 0x15CA88u, 0x15CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA90u;
label_15ca90:
    // 0x15ca90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15ca90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ca94:
    // 0x15ca94: 0xc06fb8e  jal         func_1BEE38
label_15ca98:
    if (ctx->pc == 0x15CA98u) {
        ctx->pc = 0x15CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA94u;
        // 0x15ca98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA9Cu;
        goto label_15ca9c;
    }
    ctx->pc = 0x15CA94u;
    SET_GPR_U32(ctx, 31, 0x15CA9Cu);
    ctx->pc = 0x15CA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CA94u;
    // 0x15ca98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15CA94u, 0x15CA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CA9Cu;
label_15ca9c:
    // 0x15ca9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ca9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15caa0:
    // 0x15caa0: 0xc045fea  jal         func_117FA8
label_15caa4:
    if (ctx->pc == 0x15CAA4u) {
        ctx->pc = 0x15CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAA0u;
        // 0x15caa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAA8u;
        goto label_15caa8;
    }
    ctx->pc = 0x15CAA0u;
    SET_GPR_U32(ctx, 31, 0x15CAA8u);
    ctx->pc = 0x15CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAA0u;
    // 0x15caa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15CAA0u, 0x15CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAA8u;
label_15caa8:
    // 0x15caa8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15caa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15caac:
    // 0x15caac: 0xc046058  jal         func_118160
label_15cab0:
    if (ctx->pc == 0x15CAB0u) {
        ctx->pc = 0x15CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAACu;
        // 0x15cab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAB4u;
        goto label_15cab4;
    }
    ctx->pc = 0x15CAACu;
    SET_GPR_U32(ctx, 31, 0x15CAB4u);
    ctx->pc = 0x15CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAACu;
    // 0x15cab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15CAACu, 0x15CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAB4u;
label_15cab4:
    // 0x15cab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cab8:
    // 0x15cab8: 0xc046104  jal         func_118410
label_15cabc:
    if (ctx->pc == 0x15CABCu) {
        ctx->pc = 0x15CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAB8u;
        // 0x15cabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAC0u;
        goto label_15cac0;
    }
    ctx->pc = 0x15CAB8u;
    SET_GPR_U32(ctx, 31, 0x15CAC0u);
    ctx->pc = 0x15CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAB8u;
    // 0x15cabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x15CAB8u, 0x15CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAC0u;
label_15cac0:
    // 0x15cac0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x15cac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_15cac4:
    // 0x15cac4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15cac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_15cac8:
    // 0x15cac8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15cac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15cacc:
    // 0x15cacc: 0xc046290  jal         func_118A40
label_15cad0:
    if (ctx->pc == 0x15CAD0u) {
        ctx->pc = 0x15CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CACCu;
        // 0x15cad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAD4u;
        goto label_15cad4;
    }
    ctx->pc = 0x15CACCu;
    SET_GPR_U32(ctx, 31, 0x15CAD4u);
    ctx->pc = 0x15CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CACCu;
    // 0x15cad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x15CACCu, 0x15CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAD4u;
label_15cad4:
    // 0x15cad4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15cad8:
    // 0x15cad8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15cad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cadc:
    // 0x15cadc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15cadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15cae0:
    // 0x15cae0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15cae4:
    // 0x15cae4: 0x40f809  jalr        $v0
label_15cae8:
    if (ctx->pc == 0x15CAE8u) {
        ctx->pc = 0x15CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE4u;
        // 0x15cae8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAECu;
        goto label_15caec;
    }
    ctx->pc = 0x15CAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CAECu);
        ctx->pc = 0x15CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE4u;
        // 0x15cae8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CAE4u, 0x15CAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CAECu;
label_15caec:
    // 0x15caec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15caecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15caf0:
    // 0x15caf0: 0xc04d7da  jal         func_135F68
label_15caf4:
    if (ctx->pc == 0x15CAF4u) {
        ctx->pc = 0x15CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF0u;
        // 0x15caf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CAF8u;
        goto label_15caf8;
    }
    ctx->pc = 0x15CAF0u;
    SET_GPR_U32(ctx, 31, 0x15CAF8u);
    ctx->pc = 0x15CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAF0u;
    // 0x15caf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F68u, 0x15CAF0u, 0x15CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CAF8u;
label_15caf8:
    // 0x15caf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15caf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15cafc:
    // 0x15cafc: 0xc04d7dc  jal         func_135F70
label_15cb00:
    if (ctx->pc == 0x15CB00u) {
        ctx->pc = 0x15CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAFCu;
        // 0x15cb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB04u;
        goto label_15cb04;
    }
    ctx->pc = 0x15CAFCu;
    SET_GPR_U32(ctx, 31, 0x15CB04u);
    ctx->pc = 0x15CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CAFCu;
    // 0x15cb00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x15CAFCu, 0x15CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB04u;
label_15cb04:
    // 0x15cb04: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_15cb08:
    if (ctx->pc == 0x15CB08u) {
        ctx->pc = 0x15CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB04u;
        // 0x15cb08: 0xae6006f4  sw          $zero, 0x6F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB0Cu;
        goto label_15cb0c;
    }
    ctx->pc = 0x15CB04u;
    {
        const bool branch_taken_0x15cb04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB04u;
        // 0x15cb08: 0xae6006f4  sw          $zero, 0x6F4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb04) {
            ctx->pc = 0x15CB18u;
            goto label_15cb18;
        }
    }
    ctx->pc = 0x15CB0Cu;
label_15cb0c:
    // 0x15cb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cb10:
    // 0x15cb10: 0xae7504d0  sw          $s5, 0x4D0($s3)
    ctx->pc = 0x15cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1232), GPR_U32(ctx, 21));
label_15cb14:
    // 0x15cb14: 0xae6204cc  sw          $v0, 0x4CC($s3)
    ctx->pc = 0x15cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1228), GPR_U32(ctx, 2));
label_15cb18:
    // 0x15cb18: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15cb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15cb1c:
    // 0x15cb1c: 0xc0aafa6  jal         func_2ABE98
label_15cb20:
    if (ctx->pc == 0x15CB20u) {
        ctx->pc = 0x15CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB1Cu;
        // 0x15cb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB24u;
        goto label_15cb24;
    }
    ctx->pc = 0x15CB1Cu;
    SET_GPR_U32(ctx, 31, 0x15CB24u);
    ctx->pc = 0x15CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB1Cu;
    // 0x15cb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15CB1Cu, 0x15CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB24u;
label_15cb24:
    // 0x15cb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15cb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cb28:
    // 0x15cb28: 0xc0aafc8  jal         func_2ABF20
label_15cb2c:
    if (ctx->pc == 0x15CB2Cu) {
        ctx->pc = 0x15CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB28u;
        // 0x15cb2c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB30u;
        goto label_15cb30;
    }
    ctx->pc = 0x15CB28u;
    SET_GPR_U32(ctx, 31, 0x15CB30u);
    ctx->pc = 0x15CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB28u;
    // 0x15cb2c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15CB28u, 0x15CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB30u;
label_15cb30:
    // 0x15cb30: 0x2962018  mult        $a0, $s4, $s6
    ctx->pc = 0x15cb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_15cb34:
    // 0x15cb34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15cb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15cb38:
    // 0x15cb38: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x15cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_15cb3c:
    // 0x15cb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15cb40:
    // 0x15cb40: 0xac62033c  sw          $v0, 0x33C($v1)
    ctx->pc = 0x15cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 828), GPR_U32(ctx, 2));
label_15cb44:
    // 0x15cb44: 0xc0aafac  jal         func_2ABEB0
label_15cb48:
    if (ctx->pc == 0x15CB48u) {
        ctx->pc = 0x15CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB44u;
        // 0x15cb48: 0xac600340  sw          $zero, 0x340($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB4Cu;
        goto label_15cb4c;
    }
    ctx->pc = 0x15CB44u;
    SET_GPR_U32(ctx, 31, 0x15CB4Cu);
    ctx->pc = 0x15CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB44u;
    // 0x15cb48: 0xac600340  sw          $zero, 0x340($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 832), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15CB44u, 0x15CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB4Cu;
label_15cb4c:
    // 0x15cb4c: 0x10000026  b           . + 4 + (0x26 << 2)
label_15cb50:
    if (ctx->pc == 0x15CB50u) {
        ctx->pc = 0x15CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB4Cu;
        // 0x15cb50: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB54u;
        goto label_15cb54;
    }
    ctx->pc = 0x15CB4Cu;
    {
        const bool branch_taken_0x15cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB4Cu;
        // 0x15cb50: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb4c) {
            ctx->pc = 0x15CBE8u;
            goto label_15cbe8;
        }
    }
    ctx->pc = 0x15CB54u;
label_15cb54:
    // 0x15cb54: 0xc04f26c  jal         func_13C9B0
label_15cb58:
    if (ctx->pc == 0x15CB58u) {
        ctx->pc = 0x15CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB54u;
        // 0x15cb58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB5Cu;
        goto label_15cb5c;
    }
    ctx->pc = 0x15CB54u;
    SET_GPR_U32(ctx, 31, 0x15CB5Cu);
    ctx->pc = 0x15CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB54u;
    // 0x15cb58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C9B0u, 0x15CB54u, 0x15CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB5Cu;
label_15cb5c:
    // 0x15cb5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15cb5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cb60:
    // 0x15cb60: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x15cb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15cb64:
    // 0x15cb64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15cb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cb68:
    // 0x15cb68: 0xc04f33e  jal         func_13CCF8
label_15cb6c:
    if (ctx->pc == 0x15CB6Cu) {
        ctx->pc = 0x15CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB68u;
        // 0x15cb6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB70u;
        goto label_15cb70;
    }
    ctx->pc = 0x15CB68u;
    SET_GPR_U32(ctx, 31, 0x15CB70u);
    ctx->pc = 0x15CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB68u;
    // 0x15cb6c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15CB68u, 0x15CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB70u;
label_15cb70:
    // 0x15cb70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cb74:
    // 0x15cb74: 0xc04f0b6  jal         func_13C2D8
label_15cb78:
    if (ctx->pc == 0x15CB78u) {
        ctx->pc = 0x15CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB74u;
        // 0x15cb78: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB7Cu;
        goto label_15cb7c;
    }
    ctx->pc = 0x15CB74u;
    SET_GPR_U32(ctx, 31, 0x15CB7Cu);
    ctx->pc = 0x15CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB74u;
    // 0x15cb78: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15CB74u, 0x15CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB7Cu;
label_15cb7c:
    // 0x15cb7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15cb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15cb80:
    // 0x15cb80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15cb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15cb84:
    // 0x15cb84: 0xc046330  jal         func_118CC0
label_15cb88:
    if (ctx->pc == 0x15CB88u) {
        ctx->pc = 0x15CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB84u;
        // 0x15cb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CB8Cu;
        goto label_15cb8c;
    }
    ctx->pc = 0x15CB84u;
    SET_GPR_U32(ctx, 31, 0x15CB8Cu);
    ctx->pc = 0x15CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB84u;
    // 0x15cb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x15CB84u, 0x15CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CB8Cu;
label_15cb8c:
    // 0x15cb8c: 0x2968018  mult        $s0, $s4, $s6
    ctx->pc = 0x15cb8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_15cb90:
    // 0x15cb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15cb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15cb94:
    // 0x15cb94: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x15cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_15cb98:
    // 0x15cb98: 0xc046058  jal         func_118160
label_15cb9c:
    if (ctx->pc == 0x15CB9Cu) {
        ctx->pc = 0x15CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB98u;
        // 0x15cb9c: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBA0u;
        goto label_15cba0;
    }
    ctx->pc = 0x15CB98u;
    SET_GPR_U32(ctx, 31, 0x15CBA0u);
    ctx->pc = 0x15CB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CB98u;
    // 0x15cb9c: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15CB98u, 0x15CBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CBA0u;
label_15cba0:
    // 0x15cba0: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15cba4:
    // 0x15cba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15cba8:
    // 0x15cba8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15cba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15cbac:
    // 0x15cbac: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15cbb0:
    // 0x15cbb0: 0x40f809  jalr        $v0
label_15cbb4:
    if (ctx->pc == 0x15CBB4u) {
        ctx->pc = 0x15CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBB0u;
        // 0x15cbb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBB8u;
        goto label_15cbb8;
    }
    ctx->pc = 0x15CBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15CBB8u);
        ctx->pc = 0x15CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBB0u;
        // 0x15cbb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CBB0u, 0x15CBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15CBB8u;
label_15cbb8:
    // 0x15cbb8: 0xc0aafa6  jal         func_2ABE98
label_15cbbc:
    if (ctx->pc == 0x15CBBCu) {
        ctx->pc = 0x15CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBB8u;
        // 0x15cbbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBC0u;
        goto label_15cbc0;
    }
    ctx->pc = 0x15CBB8u;
    SET_GPR_U32(ctx, 31, 0x15CBC0u);
    ctx->pc = 0x15CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBB8u;
    // 0x15cbbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15CBB8u, 0x15CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CBC0u;
label_15cbc0:
    // 0x15cbc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15cbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15cbc4:
    // 0x15cbc4: 0xc0aafc8  jal         func_2ABF20
label_15cbc8:
    if (ctx->pc == 0x15CBC8u) {
        ctx->pc = 0x15CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBC4u;
        // 0x15cbc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBCCu;
        goto label_15cbcc;
    }
    ctx->pc = 0x15CBC4u;
    SET_GPR_U32(ctx, 31, 0x15CBCCu);
    ctx->pc = 0x15CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBC4u;
    // 0x15cbc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15CBC4u, 0x15CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CBCCu;
label_15cbcc:
    // 0x15cbcc: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x15cbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_15cbd0:
    // 0x15cbd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15cbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15cbd4:
    // 0x15cbd4: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x15cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_15cbd8:
    // 0x15cbd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15cbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15cbdc:
    // 0x15cbdc: 0xc0aafac  jal         func_2ABEB0
label_15cbe0:
    if (ctx->pc == 0x15CBE0u) {
        ctx->pc = 0x15CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBDCu;
        // 0x15cbe0: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CBE4u;
        goto label_15cbe4;
    }
    ctx->pc = 0x15CBDCu;
    SET_GPR_U32(ctx, 31, 0x15CBE4u);
    ctx->pc = 0x15CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CBDCu;
    // 0x15cbe0: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15CBDCu, 0x15CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CBE4u;
label_15cbe4:
    // 0x15cbe4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15cbe8:
    // 0x15cbe8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15cbec:
    // 0x15cbec: 0x2831018  mult        $v0, $s4, $v1
    ctx->pc = 0x15cbecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15cbf0:
    // 0x15cbf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15cbf4:
    // 0x15cbf4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15cbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15cbf8:
    // 0x15cbf8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15cbf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15cbfc:
    // 0x15cbfc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15cbfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15cc00:
    // 0x15cc00: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15cc04:
    // 0x15cc04: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15cc04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15cc08:
    // 0x15cc08: 0xac73032c  sw          $s3, 0x32C($v1)
    ctx->pc = 0x15cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 812), GPR_U32(ctx, 19));
label_15cc0c:
    // 0x15cc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15cc10:
    // 0x15cc10: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15cc10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15cc14:
    // 0x15cc14: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15cc14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15cc18:
    // 0x15cc18: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15cc18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15cc1c:
    // 0x15cc1c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15cc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15cc20:
    // 0x15cc20: 0xac620330  sw          $v0, 0x330($v1)
    ctx->pc = 0x15cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 2));
label_15cc24:
    // 0x15cc24: 0xac650324  sw          $a1, 0x324($v1)
    ctx->pc = 0x15cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 804), GPR_U32(ctx, 5));
label_15cc28:
    // 0x15cc28: 0xac640328  sw          $a0, 0x328($v1)
    ctx->pc = 0x15cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 808), GPR_U32(ctx, 4));
label_15cc2c:
    // 0x15cc2c: 0x3e00008  jr          $ra
label_15cc30:
    if (ctx->pc == 0x15CC30u) {
        ctx->pc = 0x15CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC2Cu;
        // 0x15cc30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CC34u;
        goto label_15cc34;
    }
    ctx->pc = 0x15CC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC2Cu;
        // 0x15cc30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CC34u;
label_15cc34:
    // 0x15cc34: 0x0  nop
    ctx->pc = 0x15cc34u;
    // NOP
    ctx->pc = 0x15cc38u;
}
