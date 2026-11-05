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

// Function: sub_0023FF98
// Address: 0x23ff98 - 0x240230
void sub_0023FF98_0x23ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FF98_0x23ff98");
#endif

    switch (ctx->pc) {
        case 0x23ff98u: goto label_23ff98;
        case 0x23ff9cu: goto label_23ff9c;
        case 0x23ffa0u: goto label_23ffa0;
        case 0x23ffa4u: goto label_23ffa4;
        case 0x23ffa8u: goto label_23ffa8;
        case 0x23ffacu: goto label_23ffac;
        case 0x23ffb0u: goto label_23ffb0;
        case 0x23ffb4u: goto label_23ffb4;
        case 0x23ffb8u: goto label_23ffb8;
        case 0x23ffbcu: goto label_23ffbc;
        case 0x23ffc0u: goto label_23ffc0;
        case 0x23ffc4u: goto label_23ffc4;
        case 0x23ffc8u: goto label_23ffc8;
        case 0x23ffccu: goto label_23ffcc;
        case 0x23ffd0u: goto label_23ffd0;
        case 0x23ffd4u: goto label_23ffd4;
        case 0x23ffd8u: goto label_23ffd8;
        case 0x23ffdcu: goto label_23ffdc;
        case 0x23ffe0u: goto label_23ffe0;
        case 0x23ffe4u: goto label_23ffe4;
        case 0x23ffe8u: goto label_23ffe8;
        case 0x23ffecu: goto label_23ffec;
        case 0x23fff0u: goto label_23fff0;
        case 0x23fff4u: goto label_23fff4;
        case 0x23fff8u: goto label_23fff8;
        case 0x23fffcu: goto label_23fffc;
        case 0x240000u: goto label_240000;
        case 0x240004u: goto label_240004;
        case 0x240008u: goto label_240008;
        case 0x24000cu: goto label_24000c;
        case 0x240010u: goto label_240010;
        case 0x240014u: goto label_240014;
        case 0x240018u: goto label_240018;
        case 0x24001cu: goto label_24001c;
        case 0x240020u: goto label_240020;
        case 0x240024u: goto label_240024;
        case 0x240028u: goto label_240028;
        case 0x24002cu: goto label_24002c;
        case 0x240030u: goto label_240030;
        case 0x240034u: goto label_240034;
        case 0x240038u: goto label_240038;
        case 0x24003cu: goto label_24003c;
        case 0x240040u: goto label_240040;
        case 0x240044u: goto label_240044;
        case 0x240048u: goto label_240048;
        case 0x24004cu: goto label_24004c;
        case 0x240050u: goto label_240050;
        case 0x240054u: goto label_240054;
        case 0x240058u: goto label_240058;
        case 0x24005cu: goto label_24005c;
        case 0x240060u: goto label_240060;
        case 0x240064u: goto label_240064;
        case 0x240068u: goto label_240068;
        case 0x24006cu: goto label_24006c;
        case 0x240070u: goto label_240070;
        case 0x240074u: goto label_240074;
        case 0x240078u: goto label_240078;
        case 0x24007cu: goto label_24007c;
        case 0x240080u: goto label_240080;
        case 0x240084u: goto label_240084;
        case 0x240088u: goto label_240088;
        case 0x24008cu: goto label_24008c;
        case 0x240090u: goto label_240090;
        case 0x240094u: goto label_240094;
        case 0x240098u: goto label_240098;
        case 0x24009cu: goto label_24009c;
        case 0x2400a0u: goto label_2400a0;
        case 0x2400a4u: goto label_2400a4;
        case 0x2400a8u: goto label_2400a8;
        case 0x2400acu: goto label_2400ac;
        case 0x2400b0u: goto label_2400b0;
        case 0x2400b4u: goto label_2400b4;
        case 0x2400b8u: goto label_2400b8;
        case 0x2400bcu: goto label_2400bc;
        case 0x2400c0u: goto label_2400c0;
        case 0x2400c4u: goto label_2400c4;
        case 0x2400c8u: goto label_2400c8;
        case 0x2400ccu: goto label_2400cc;
        case 0x2400d0u: goto label_2400d0;
        case 0x2400d4u: goto label_2400d4;
        case 0x2400d8u: goto label_2400d8;
        case 0x2400dcu: goto label_2400dc;
        case 0x2400e0u: goto label_2400e0;
        case 0x2400e4u: goto label_2400e4;
        case 0x2400e8u: goto label_2400e8;
        case 0x2400ecu: goto label_2400ec;
        case 0x2400f0u: goto label_2400f0;
        case 0x2400f4u: goto label_2400f4;
        case 0x2400f8u: goto label_2400f8;
        case 0x2400fcu: goto label_2400fc;
        case 0x240100u: goto label_240100;
        case 0x240104u: goto label_240104;
        case 0x240108u: goto label_240108;
        case 0x24010cu: goto label_24010c;
        case 0x240110u: goto label_240110;
        case 0x240114u: goto label_240114;
        case 0x240118u: goto label_240118;
        case 0x24011cu: goto label_24011c;
        case 0x240120u: goto label_240120;
        case 0x240124u: goto label_240124;
        case 0x240128u: goto label_240128;
        case 0x24012cu: goto label_24012c;
        case 0x240130u: goto label_240130;
        case 0x240134u: goto label_240134;
        case 0x240138u: goto label_240138;
        case 0x24013cu: goto label_24013c;
        case 0x240140u: goto label_240140;
        case 0x240144u: goto label_240144;
        case 0x240148u: goto label_240148;
        case 0x24014cu: goto label_24014c;
        case 0x240150u: goto label_240150;
        case 0x240154u: goto label_240154;
        case 0x240158u: goto label_240158;
        case 0x24015cu: goto label_24015c;
        case 0x240160u: goto label_240160;
        case 0x240164u: goto label_240164;
        case 0x240168u: goto label_240168;
        case 0x24016cu: goto label_24016c;
        case 0x240170u: goto label_240170;
        case 0x240174u: goto label_240174;
        case 0x240178u: goto label_240178;
        case 0x24017cu: goto label_24017c;
        case 0x240180u: goto label_240180;
        case 0x240184u: goto label_240184;
        case 0x240188u: goto label_240188;
        case 0x24018cu: goto label_24018c;
        case 0x240190u: goto label_240190;
        case 0x240194u: goto label_240194;
        case 0x240198u: goto label_240198;
        case 0x24019cu: goto label_24019c;
        case 0x2401a0u: goto label_2401a0;
        case 0x2401a4u: goto label_2401a4;
        case 0x2401a8u: goto label_2401a8;
        case 0x2401acu: goto label_2401ac;
        case 0x2401b0u: goto label_2401b0;
        case 0x2401b4u: goto label_2401b4;
        case 0x2401b8u: goto label_2401b8;
        case 0x2401bcu: goto label_2401bc;
        case 0x2401c0u: goto label_2401c0;
        case 0x2401c4u: goto label_2401c4;
        case 0x2401c8u: goto label_2401c8;
        case 0x2401ccu: goto label_2401cc;
        case 0x2401d0u: goto label_2401d0;
        case 0x2401d4u: goto label_2401d4;
        case 0x2401d8u: goto label_2401d8;
        case 0x2401dcu: goto label_2401dc;
        case 0x2401e0u: goto label_2401e0;
        case 0x2401e4u: goto label_2401e4;
        case 0x2401e8u: goto label_2401e8;
        case 0x2401ecu: goto label_2401ec;
        case 0x2401f0u: goto label_2401f0;
        case 0x2401f4u: goto label_2401f4;
        case 0x2401f8u: goto label_2401f8;
        case 0x2401fcu: goto label_2401fc;
        case 0x240200u: goto label_240200;
        case 0x240204u: goto label_240204;
        case 0x240208u: goto label_240208;
        case 0x24020cu: goto label_24020c;
        case 0x240210u: goto label_240210;
        case 0x240214u: goto label_240214;
        case 0x240218u: goto label_240218;
        case 0x24021cu: goto label_24021c;
        case 0x240220u: goto label_240220;
        case 0x240224u: goto label_240224;
        case 0x240228u: goto label_240228;
        case 0x24022cu: goto label_24022c;
        default: break;
    }

    ctx->pc = 0x23ff98u;

label_23ff98:
    // 0x23ff98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23ff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23ff9c:
    // 0x23ff9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ffa0:
    // 0x23ffa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23ffa4:
    // 0x23ffa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ffa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ffa8:
    // 0x23ffa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23ffac:
    // 0x23ffac: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x23ffacu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_23ffb0:
    // 0x23ffb0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x23ffb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_23ffb4:
    // 0x23ffb4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23ffb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23ffb8:
    // 0x23ffb8: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x23ffb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23ffbc:
    // 0x23ffbc: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x23ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_23ffc0:
    // 0x23ffc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23ffc4:
    if (ctx->pc == 0x23FFC4u) {
        ctx->pc = 0x23FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFC0u;
        // 0x23ffc4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFC8u;
        goto label_23ffc8;
    }
    ctx->pc = 0x23FFC0u;
    {
        const bool branch_taken_0x23ffc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFC0u;
        // 0x23ffc4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffc0) {
            ctx->pc = 0x23FFD8u;
            goto label_23ffd8;
        }
    }
    ctx->pc = 0x23FFC8u;
label_23ffc8:
    // 0x23ffc8: 0x1000000e  b           . + 4 + (0xE << 2)
label_23ffcc:
    if (ctx->pc == 0x23FFCCu) {
        ctx->pc = 0x23FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFC8u;
        // 0x23ffcc: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFD0u;
        goto label_23ffd0;
    }
    ctx->pc = 0x23FFC8u;
    {
        const bool branch_taken_0x23ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFC8u;
        // 0x23ffcc: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffc8) {
            ctx->pc = 0x240004u;
            goto label_240004;
        }
    }
    ctx->pc = 0x23FFD0u;
label_23ffd0:
    // 0x23ffd0: 0x1000000c  b           . + 4 + (0xC << 2)
label_23ffd4:
    if (ctx->pc == 0x23FFD4u) {
        ctx->pc = 0x23FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFD0u;
        // 0x23ffd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFD8u;
        goto label_23ffd8;
    }
    ctx->pc = 0x23FFD0u;
    {
        const bool branch_taken_0x23ffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFD0u;
        // 0x23ffd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffd0) {
            ctx->pc = 0x240004u;
            goto label_240004;
        }
    }
    ctx->pc = 0x23FFD8u;
label_23ffd8:
    // 0x23ffd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23ffd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ffdc:
    // 0x23ffdc: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x23ffdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_23ffe0:
    // 0x23ffe0: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x23ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_23ffe4:
    // 0x23ffe4: 0x0  nop
    ctx->pc = 0x23ffe4u;
    // NOP
label_23ffe8:
    // 0x23ffe8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ffec:
    // 0x23ffec: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_23fff0:
    if (ctx->pc == 0x23FFF0u) {
        ctx->pc = 0x23FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFECu;
        // 0x23fff0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FFF4u;
        goto label_23fff4;
    }
    ctx->pc = 0x23FFECu;
    {
        const bool branch_taken_0x23ffec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFECu;
        // 0x23fff0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffec) {
            ctx->pc = 0x23FFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ffd0;
        }
    }
    ctx->pc = 0x23FFF4u;
label_23fff4:
    // 0x23fff4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x23fff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_23fff8:
    // 0x23fff8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_23fffc:
    if (ctx->pc == 0x23FFFCu) {
        ctx->pc = 0x23FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFF8u;
        // 0x23fffc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240000u;
        goto label_240000;
    }
    ctx->pc = 0x23FFF8u;
    {
        const bool branch_taken_0x23fff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFF8u;
        // 0x23fffc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fff8) {
            ctx->pc = 0x23FFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ffe8;
        }
    }
    ctx->pc = 0x240000u;
label_240000:
    // 0x240000: 0x8cf101e8  lw          $s1, 0x1E8($a3)
    ctx->pc = 0x240000u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_240004:
    // 0x240004: 0x24a556e0  addiu       $a1, $a1, 0x56E0
    ctx->pc = 0x240004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22240));
label_240008:
    // 0x240008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x240008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24000c:
    // 0x24000c: 0xc073fde  jal         func_1CFF78
label_240010:
    if (ctx->pc == 0x240010u) {
        ctx->pc = 0x240010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24000Cu;
        // 0x240010: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240014u;
        goto label_240014;
    }
    ctx->pc = 0x24000Cu;
    SET_GPR_U32(ctx, 31, 0x240014u);
    ctx->pc = 0x240010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24000Cu;
    // 0x240010: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x24000Cu, 0x240014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240014u;
label_240014:
    // 0x240014: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x240014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_240018:
    // 0x240018: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x240018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_24001c:
    // 0x24001c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x24001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_240020:
    // 0x240020: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x240020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_240024:
    // 0x240024: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x240024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_240028:
    // 0x240028: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x240028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24002c:
    // 0x24002c: 0x40f809  jalr        $v0
label_240030:
    if (ctx->pc == 0x240030u) {
        ctx->pc = 0x240030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24002Cu;
        // 0x240030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240034u;
        goto label_240034;
    }
    ctx->pc = 0x24002Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x240034u);
        ctx->pc = 0x240030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24002Cu;
        // 0x240030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24002Cu, 0x240034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x240034u;
label_240034:
    // 0x240034: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_240038:
    // 0x240038: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x240038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_24003c:
    // 0x24003c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_240040:
    if (ctx->pc == 0x240040u) {
        ctx->pc = 0x240040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24003Cu;
        // 0x240040: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240044u;
        goto label_240044;
    }
    ctx->pc = 0x24003Cu;
    {
        const bool branch_taken_0x24003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24003c) {
            ctx->pc = 0x240040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24003Cu;
            // 0x240040: 0xc454001c  lwc1        $f20, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x240070u;
            goto label_240070;
        }
    }
    ctx->pc = 0x240044u;
label_240044:
    // 0x240044: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x240044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240048:
    // 0x240048: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x240048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_24004c:
    // 0x24004c: 0x0  nop
    ctx->pc = 0x24004cu;
    // NOP
label_240050:
    // 0x240050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_240054:
    // 0x240054: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_240058:
    if (ctx->pc == 0x240058u) {
        ctx->pc = 0x240058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240054u;
        // 0x240058: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24005Cu;
        goto label_24005c;
    }
    ctx->pc = 0x240054u;
    {
        const bool branch_taken_0x240054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240054u;
        // 0x240058: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240054) {
            ctx->pc = 0x24006Cu;
            goto label_24006c;
        }
    }
    ctx->pc = 0x24005Cu;
label_24005c:
    // 0x24005c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24005cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_240060:
    // 0x240060: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_240064:
    if (ctx->pc == 0x240064u) {
        ctx->pc = 0x240064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240060u;
        // 0x240064: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240068u;
        goto label_240068;
    }
    ctx->pc = 0x240060u;
    {
        const bool branch_taken_0x240060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240060u;
        // 0x240064: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240060) {
            ctx->pc = 0x240050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240050;
        }
    }
    ctx->pc = 0x240068u;
label_240068:
    // 0x240068: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_24006c:
    // 0x24006c: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x24006cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240070:
    // 0x240070: 0xc08f672  jal         func_23D9C8
label_240074:
    if (ctx->pc == 0x240074u) {
        ctx->pc = 0x240074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240070u;
        // 0x240074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240078u;
        goto label_240078;
    }
    ctx->pc = 0x240070u;
    SET_GPR_U32(ctx, 31, 0x240078u);
    ctx->pc = 0x240074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240070u;
    // 0x240074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x240070u, 0x240078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240078u;
label_240078:
    // 0x240078: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_24007c:
    if (ctx->pc == 0x24007Cu) {
        ctx->pc = 0x24007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240078u;
        // 0x24007c: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240080u;
        goto label_240080;
    }
    ctx->pc = 0x240078u;
    {
        const bool branch_taken_0x240078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240078) {
            ctx->pc = 0x24007Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240078u;
            // 0x24007c: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24009Cu;
            goto label_24009c;
        }
    }
    ctx->pc = 0x240080u;
label_240080:
    // 0x240080: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_240084:
    // 0x240084: 0x34219931  ori         $at, $at, 0x9931
    ctx->pc = 0x240084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39217);
label_240088:
    // 0x240088: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x240088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_24008c:
    // 0x24008c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_240090:
    // 0x240090: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x240090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_240094:
    // 0x240094: 0x1000002f  b           . + 4 + (0x2F << 2)
label_240098:
    if (ctx->pc == 0x240098u) {
        ctx->pc = 0x24009Cu;
        goto label_24009c;
    }
    ctx->pc = 0x240094u;
    {
        const bool branch_taken_0x240094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240094) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x24009Cu;
label_24009c:
    // 0x24009c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x24009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2400a0:
    // 0x2400a0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2400a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_2400a4:
    // 0x2400a4: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x2400a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2400a8:
    // 0x2400a8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2400ac:
    if (ctx->pc == 0x2400ACu) {
        ctx->pc = 0x2400ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400A8u;
        // 0x2400ac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2400B0u;
        goto label_2400b0;
    }
    ctx->pc = 0x2400A8u;
    {
        const bool branch_taken_0x2400a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400A8u;
        // 0x2400ac: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400a8) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x2400B0u;
label_2400b0:
    // 0x2400b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2400b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2400b4:
    // 0x2400b4: 0x244252b0  addiu       $v0, $v0, 0x52B0
    ctx->pc = 0x2400b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21168));
label_2400b8:
    // 0x2400b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2400bc:
    // 0x2400bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2400c0:
    // 0x2400c0: 0x800008  jr          $a0
label_2400c4:
    if (ctx->pc == 0x2400C4u) {
        ctx->pc = 0x2400C8u;
        goto label_2400c8;
    }
    ctx->pc = 0x2400C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2400C8u: goto label_2400c8;
            case 0x2400E8u: goto label_2400e8;
            case 0x240104u: goto label_240104;
            case 0x240124u: goto label_240124;
            case 0x240138u: goto label_240138;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2400C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2400C8u;
label_2400c8:
    // 0x2400c8: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x2400c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_2400cc:
    // 0x2400cc: 0x34217fcc  ori         $at, $at, 0x7FCC
    ctx->pc = 0x2400ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32716);
label_2400d0:
    // 0x2400d0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2400d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2400d4:
    // 0x2400d4: 0x3c013eee  lui         $at, 0x3EEE
    ctx->pc = 0x2400d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16110 << 16));
label_2400d8:
    // 0x2400d8: 0x3421f34d  ori         $at, $at, 0xF34D
    ctx->pc = 0x2400d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62285);
label_2400dc:
    // 0x2400dc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2400dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2400e0:
    // 0x2400e0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2400e4:
    if (ctx->pc == 0x2400E4u) {
        ctx->pc = 0x2400E8u;
        goto label_2400e8;
    }
    ctx->pc = 0x2400E0u;
    {
        const bool branch_taken_0x2400e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2400e0) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x2400E8u;
label_2400e8:
    // 0x2400e8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2400e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_2400ec:
    // 0x2400ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2400ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2400f0:
    // 0x2400f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2400f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2400f4:
    // 0x2400f4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2400f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_2400f8:
    // 0x2400f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2400f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2400fc:
    // 0x2400fc: 0x10000015  b           . + 4 + (0x15 << 2)
label_240100:
    if (ctx->pc == 0x240100u) {
        ctx->pc = 0x240104u;
        goto label_240104;
    }
    ctx->pc = 0x2400FCu;
    {
        const bool branch_taken_0x2400fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2400fc) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x240104u;
label_240104:
    // 0x240104: 0x3c013ebb  lui         $at, 0x3EBB
    ctx->pc = 0x240104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16059 << 16));
label_240108:
    // 0x240108: 0x3421e76d  ori         $at, $at, 0xE76D
    ctx->pc = 0x240108u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59245);
label_24010c:
    // 0x24010c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24010cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_240110:
    // 0x240110: 0x3c013f5d  lui         $at, 0x3F5D
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16221 << 16));
label_240114:
    // 0x240114: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x240114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
label_240118:
    // 0x240118: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x240118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_24011c:
    // 0x24011c: 0x1000000d  b           . + 4 + (0xD << 2)
label_240120:
    if (ctx->pc == 0x240120u) {
        ctx->pc = 0x240124u;
        goto label_240124;
    }
    ctx->pc = 0x24011Cu;
    {
        const bool branch_taken_0x24011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24011c) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x240124u;
label_240124:
    // 0x240124: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x240124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_240128:
    // 0x240128: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24012c:
    // 0x24012c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24012cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_240130:
    // 0x240130: 0x10000008  b           . + 4 + (0x8 << 2)
label_240134:
    if (ctx->pc == 0x240134u) {
        ctx->pc = 0x240138u;
        goto label_240138;
    }
    ctx->pc = 0x240130u;
    {
        const bool branch_taken_0x240130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240130) {
            ctx->pc = 0x240154u;
            goto label_240154;
        }
    }
    ctx->pc = 0x240138u;
label_240138:
    // 0x240138: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x240138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_24013c:
    // 0x24013c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x24013cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_240140:
    // 0x240140: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x240140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_240144:
    // 0x240144: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x240144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_240148:
    // 0x240148: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x240148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_24014c:
    // 0x24014c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24014cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_240150:
    // 0x240150: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x240150u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
label_240154:
    // 0x240154: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x240154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240158:
    // 0x240158: 0x0  nop
    ctx->pc = 0x240158u;
    // NOP
label_24015c:
    // 0x24015c: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
label_240160:
    if (ctx->pc == 0x240160u) {
        ctx->pc = 0x240160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24015Cu;
        // 0x240160: 0xc60006e4  lwc1        $f0, 0x6E4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x240164u;
        goto label_240164;
    }
    ctx->pc = 0x24015Cu;
    {
        const bool branch_taken_0x24015c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24015c) {
            ctx->pc = 0x240160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24015Cu;
            // 0x240160: 0xc60006e4  lwc1        $f0, 0x6E4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2401E8u;
            goto label_2401e8;
        }
    }
    ctx->pc = 0x240164u;
label_240164:
    // 0x240164: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x240164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240168:
    // 0x240168: 0x0  nop
    ctx->pc = 0x240168u;
    // NOP
label_24016c:
    // 0x24016c: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
label_240170:
    if (ctx->pc == 0x240170u) {
        ctx->pc = 0x240170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24016Cu;
        // 0x240170: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240174u;
        goto label_240174;
    }
    ctx->pc = 0x24016Cu;
    {
        const bool branch_taken_0x24016c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24016c) {
            ctx->pc = 0x240170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24016Cu;
            // 0x240170: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2401F8u;
            goto label_2401f8;
        }
    }
    ctx->pc = 0x240174u;
label_240174:
    // 0x240174: 0x4615b001  sub.s       $f0, $f22, $f21
    ctx->pc = 0x240174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_240178:
    // 0x240178: 0xc60303a0  lwc1        $f3, 0x3A0($s0)
    ctx->pc = 0x240178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24017c:
    // 0x24017c: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x24017cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_240180:
    // 0x240180: 0xc60206ec  lwc1        $f2, 0x6EC($s0)
    ctx->pc = 0x240180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_240184:
    // 0x240184: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x240184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_240188:
    // 0x240188: 0x0  nop
    ctx->pc = 0x240188u;
    // NOP
label_24018c:
    // 0x24018c: 0x0  nop
    ctx->pc = 0x24018cu;
    // NOP
label_240190:
    // 0x240190: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x240190u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_240194:
    // 0x240194: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x240194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_240198:
    // 0x240198: 0x0  nop
    ctx->pc = 0x240198u;
    // NOP
label_24019c:
    // 0x24019c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2401a0:
    if (ctx->pc == 0x2401A0u) {
        ctx->pc = 0x2401A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24019Cu;
        // 0x2401a0: 0x46020842  mul.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401A4u;
        goto label_2401a4;
    }
    ctx->pc = 0x24019Cu;
    {
        const bool branch_taken_0x24019c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2401A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24019Cu;
        // 0x2401a0: 0x46020842  mul.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24019c) {
            ctx->pc = 0x2401B8u;
            goto label_2401b8;
        }
    }
    ctx->pc = 0x2401A4u;
label_2401a4:
    // 0x2401a4: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x2401a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_2401a8:
    // 0x2401a8: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2401a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2401ac:
    // 0x2401ac: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2401acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2401b0:
    // 0x2401b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2401b4:
    if (ctx->pc == 0x2401B4u) {
        ctx->pc = 0x2401B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401B0u;
        // 0x2401b4: 0xe60003a0  swc1        $f0, 0x3A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401B8u;
        goto label_2401b8;
    }
    ctx->pc = 0x2401B0u;
    {
        const bool branch_taken_0x2401b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401B0u;
        // 0x2401b4: 0xe60003a0  swc1        $f0, 0x3A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401b0) {
            ctx->pc = 0x2401D8u;
            goto label_2401d8;
        }
    }
    ctx->pc = 0x2401B8u;
label_2401b8:
    // 0x2401b8: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2401b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2401bc:
    // 0x2401bc: 0x0  nop
    ctx->pc = 0x2401bcu;
    // NOP
label_2401c0:
    // 0x2401c0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_2401c4:
    if (ctx->pc == 0x2401C4u) {
        ctx->pc = 0x2401C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401C0u;
        // 0x2401c4: 0xc60006e4  lwc1        $f0, 0x6E4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401C8u;
        goto label_2401c8;
    }
    ctx->pc = 0x2401C0u;
    {
        const bool branch_taken_0x2401c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2401c0) {
            ctx->pc = 0x2401C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2401C0u;
            // 0x2401c4: 0xc60006e4  lwc1        $f0, 0x6E4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2401ECu;
            goto label_2401ec;
        }
    }
    ctx->pc = 0x2401C8u;
label_2401c8:
    // 0x2401c8: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x2401c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
label_2401cc:
    // 0x2401cc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2401ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2401d0:
    // 0x2401d0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2401d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2401d4:
    // 0x2401d4: 0xe60003a0  swc1        $f0, 0x3A0($s0)
    ctx->pc = 0x2401d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
label_2401d8:
    // 0x2401d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2401dc:
    if (ctx->pc == 0x2401DCu) {
        ctx->pc = 0x2401DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401D8u;
        // 0x2401dc: 0xe60403a0  swc1        $f4, 0x3A0($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401E0u;
        goto label_2401e0;
    }
    ctx->pc = 0x2401D8u;
    {
        const bool branch_taken_0x2401d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2401d8) {
            ctx->pc = 0x2401DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2401D8u;
            // 0x2401dc: 0xe60403a0  swc1        $f4, 0x3A0($s0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 928), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2401E0u;
            goto label_2401e0;
        }
    }
    ctx->pc = 0x2401E0u;
label_2401e0:
    // 0x2401e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2401e4:
    if (ctx->pc == 0x2401E4u) {
        ctx->pc = 0x2401E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401E0u;
        // 0x2401e4: 0xc60006e4  lwc1        $f0, 0x6E4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401E8u;
        goto label_2401e8;
    }
    ctx->pc = 0x2401E0u;
    {
        const bool branch_taken_0x2401e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401E0u;
        // 0x2401e4: 0xc60006e4  lwc1        $f0, 0x6E4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401e0) {
            ctx->pc = 0x2401ECu;
            goto label_2401ec;
        }
    }
    ctx->pc = 0x2401E8u;
label_2401e8:
    // 0x2401e8: 0xc60106ec  lwc1        $f1, 0x6EC($s0)
    ctx->pc = 0x2401e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2401ec:
    // 0x2401ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2401ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2401f0:
    // 0x2401f0: 0xe60006e8  swc1        $f0, 0x6E8($s0)
    ctx->pc = 0x2401f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1768), bits); }
label_2401f4:
    // 0x2401f4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2401f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2401f8:
    // 0x2401f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2401f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2401fc:
    // 0x2401fc: 0xc48c06e8  lwc1        $f12, 0x6E8($a0)
    ctx->pc = 0x2401fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_240200:
    // 0x240200: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x240200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_240204:
    // 0x240204: 0x40f809  jalr        $v0
label_240208:
    if (ctx->pc == 0x240208u) {
        ctx->pc = 0x240208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240204u;
        // 0x240208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24020Cu;
        goto label_24020c;
    }
    ctx->pc = 0x240204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24020Cu);
        ctx->pc = 0x240208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240204u;
        // 0x240208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240204u, 0x24020Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24020Cu;
label_24020c:
    // 0x24020c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24020cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240210:
    // 0x240210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_240214:
    // 0x240214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240218:
    // 0x240218: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x240218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_24021c:
    // 0x24021c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x24021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_240220:
    // 0x240220: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x240220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_240224:
    // 0x240224: 0x3e00008  jr          $ra
label_240228:
    if (ctx->pc == 0x240228u) {
        ctx->pc = 0x240228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240224u;
        // 0x240228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24022Cu;
        goto label_24022c;
    }
    ctx->pc = 0x240224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240224u;
        // 0x240228: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24022Cu;
label_24022c:
    // 0x24022c: 0x0  nop
    ctx->pc = 0x24022cu;
    // NOP
    ctx->pc = 0x240230u;
}
