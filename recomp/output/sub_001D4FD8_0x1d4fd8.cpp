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

// Function: sub_001D4FD8
// Address: 0x1d4fd8 - 0x1d5290
void sub_001D4FD8_0x1d4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4FD8_0x1d4fd8");
#endif

    switch (ctx->pc) {
        case 0x1d4fd8u: goto label_1d4fd8;
        case 0x1d4fdcu: goto label_1d4fdc;
        case 0x1d4fe0u: goto label_1d4fe0;
        case 0x1d4fe4u: goto label_1d4fe4;
        case 0x1d4fe8u: goto label_1d4fe8;
        case 0x1d4fecu: goto label_1d4fec;
        case 0x1d4ff0u: goto label_1d4ff0;
        case 0x1d4ff4u: goto label_1d4ff4;
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d4ffcu: goto label_1d4ffc;
        case 0x1d5000u: goto label_1d5000;
        case 0x1d5004u: goto label_1d5004;
        case 0x1d5008u: goto label_1d5008;
        case 0x1d500cu: goto label_1d500c;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d5014u: goto label_1d5014;
        case 0x1d5018u: goto label_1d5018;
        case 0x1d501cu: goto label_1d501c;
        case 0x1d5020u: goto label_1d5020;
        case 0x1d5024u: goto label_1d5024;
        case 0x1d5028u: goto label_1d5028;
        case 0x1d502cu: goto label_1d502c;
        case 0x1d5030u: goto label_1d5030;
        case 0x1d5034u: goto label_1d5034;
        case 0x1d5038u: goto label_1d5038;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5040u: goto label_1d5040;
        case 0x1d5044u: goto label_1d5044;
        case 0x1d5048u: goto label_1d5048;
        case 0x1d504cu: goto label_1d504c;
        case 0x1d5050u: goto label_1d5050;
        case 0x1d5054u: goto label_1d5054;
        case 0x1d5058u: goto label_1d5058;
        case 0x1d505cu: goto label_1d505c;
        case 0x1d5060u: goto label_1d5060;
        case 0x1d5064u: goto label_1d5064;
        case 0x1d5068u: goto label_1d5068;
        case 0x1d506cu: goto label_1d506c;
        case 0x1d5070u: goto label_1d5070;
        case 0x1d5074u: goto label_1d5074;
        case 0x1d5078u: goto label_1d5078;
        case 0x1d507cu: goto label_1d507c;
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5084u: goto label_1d5084;
        case 0x1d5088u: goto label_1d5088;
        case 0x1d508cu: goto label_1d508c;
        case 0x1d5090u: goto label_1d5090;
        case 0x1d5094u: goto label_1d5094;
        case 0x1d5098u: goto label_1d5098;
        case 0x1d509cu: goto label_1d509c;
        case 0x1d50a0u: goto label_1d50a0;
        case 0x1d50a4u: goto label_1d50a4;
        case 0x1d50a8u: goto label_1d50a8;
        case 0x1d50acu: goto label_1d50ac;
        case 0x1d50b0u: goto label_1d50b0;
        case 0x1d50b4u: goto label_1d50b4;
        case 0x1d50b8u: goto label_1d50b8;
        case 0x1d50bcu: goto label_1d50bc;
        case 0x1d50c0u: goto label_1d50c0;
        case 0x1d50c4u: goto label_1d50c4;
        case 0x1d50c8u: goto label_1d50c8;
        case 0x1d50ccu: goto label_1d50cc;
        case 0x1d50d0u: goto label_1d50d0;
        case 0x1d50d4u: goto label_1d50d4;
        case 0x1d50d8u: goto label_1d50d8;
        case 0x1d50dcu: goto label_1d50dc;
        case 0x1d50e0u: goto label_1d50e0;
        case 0x1d50e4u: goto label_1d50e4;
        case 0x1d50e8u: goto label_1d50e8;
        case 0x1d50ecu: goto label_1d50ec;
        case 0x1d50f0u: goto label_1d50f0;
        case 0x1d50f4u: goto label_1d50f4;
        case 0x1d50f8u: goto label_1d50f8;
        case 0x1d50fcu: goto label_1d50fc;
        case 0x1d5100u: goto label_1d5100;
        case 0x1d5104u: goto label_1d5104;
        case 0x1d5108u: goto label_1d5108;
        case 0x1d510cu: goto label_1d510c;
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5114u: goto label_1d5114;
        case 0x1d5118u: goto label_1d5118;
        case 0x1d511cu: goto label_1d511c;
        case 0x1d5120u: goto label_1d5120;
        case 0x1d5124u: goto label_1d5124;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d512cu: goto label_1d512c;
        case 0x1d5130u: goto label_1d5130;
        case 0x1d5134u: goto label_1d5134;
        case 0x1d5138u: goto label_1d5138;
        case 0x1d513cu: goto label_1d513c;
        case 0x1d5140u: goto label_1d5140;
        case 0x1d5144u: goto label_1d5144;
        case 0x1d5148u: goto label_1d5148;
        case 0x1d514cu: goto label_1d514c;
        case 0x1d5150u: goto label_1d5150;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d5158u: goto label_1d5158;
        case 0x1d515cu: goto label_1d515c;
        case 0x1d5160u: goto label_1d5160;
        case 0x1d5164u: goto label_1d5164;
        case 0x1d5168u: goto label_1d5168;
        case 0x1d516cu: goto label_1d516c;
        case 0x1d5170u: goto label_1d5170;
        case 0x1d5174u: goto label_1d5174;
        case 0x1d5178u: goto label_1d5178;
        case 0x1d517cu: goto label_1d517c;
        case 0x1d5180u: goto label_1d5180;
        case 0x1d5184u: goto label_1d5184;
        case 0x1d5188u: goto label_1d5188;
        case 0x1d518cu: goto label_1d518c;
        case 0x1d5190u: goto label_1d5190;
        case 0x1d5194u: goto label_1d5194;
        case 0x1d5198u: goto label_1d5198;
        case 0x1d519cu: goto label_1d519c;
        case 0x1d51a0u: goto label_1d51a0;
        case 0x1d51a4u: goto label_1d51a4;
        case 0x1d51a8u: goto label_1d51a8;
        case 0x1d51acu: goto label_1d51ac;
        case 0x1d51b0u: goto label_1d51b0;
        case 0x1d51b4u: goto label_1d51b4;
        case 0x1d51b8u: goto label_1d51b8;
        case 0x1d51bcu: goto label_1d51bc;
        case 0x1d51c0u: goto label_1d51c0;
        case 0x1d51c4u: goto label_1d51c4;
        case 0x1d51c8u: goto label_1d51c8;
        case 0x1d51ccu: goto label_1d51cc;
        case 0x1d51d0u: goto label_1d51d0;
        case 0x1d51d4u: goto label_1d51d4;
        case 0x1d51d8u: goto label_1d51d8;
        case 0x1d51dcu: goto label_1d51dc;
        case 0x1d51e0u: goto label_1d51e0;
        case 0x1d51e4u: goto label_1d51e4;
        case 0x1d51e8u: goto label_1d51e8;
        case 0x1d51ecu: goto label_1d51ec;
        case 0x1d51f0u: goto label_1d51f0;
        case 0x1d51f4u: goto label_1d51f4;
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d51fcu: goto label_1d51fc;
        case 0x1d5200u: goto label_1d5200;
        case 0x1d5204u: goto label_1d5204;
        case 0x1d5208u: goto label_1d5208;
        case 0x1d520cu: goto label_1d520c;
        case 0x1d5210u: goto label_1d5210;
        case 0x1d5214u: goto label_1d5214;
        case 0x1d5218u: goto label_1d5218;
        case 0x1d521cu: goto label_1d521c;
        case 0x1d5220u: goto label_1d5220;
        case 0x1d5224u: goto label_1d5224;
        case 0x1d5228u: goto label_1d5228;
        case 0x1d522cu: goto label_1d522c;
        case 0x1d5230u: goto label_1d5230;
        case 0x1d5234u: goto label_1d5234;
        case 0x1d5238u: goto label_1d5238;
        case 0x1d523cu: goto label_1d523c;
        case 0x1d5240u: goto label_1d5240;
        case 0x1d5244u: goto label_1d5244;
        case 0x1d5248u: goto label_1d5248;
        case 0x1d524cu: goto label_1d524c;
        case 0x1d5250u: goto label_1d5250;
        case 0x1d5254u: goto label_1d5254;
        case 0x1d5258u: goto label_1d5258;
        case 0x1d525cu: goto label_1d525c;
        case 0x1d5260u: goto label_1d5260;
        case 0x1d5264u: goto label_1d5264;
        case 0x1d5268u: goto label_1d5268;
        case 0x1d526cu: goto label_1d526c;
        case 0x1d5270u: goto label_1d5270;
        case 0x1d5274u: goto label_1d5274;
        case 0x1d5278u: goto label_1d5278;
        case 0x1d527cu: goto label_1d527c;
        case 0x1d5280u: goto label_1d5280;
        case 0x1d5284u: goto label_1d5284;
        case 0x1d5288u: goto label_1d5288;
        case 0x1d528cu: goto label_1d528c;
        default: break;
    }

    ctx->pc = 0x1d4fd8u;

label_1d4fd8:
    // 0x1d4fd8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d4fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1d4fdc:
    // 0x1d4fdc: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1d4fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_1d4fe0:
    // 0x1d4fe0: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1d4fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_1d4fe4:
    // 0x1d4fe4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1d4fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_1d4fe8:
    // 0x1d4fe8: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1d4fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_1d4fec:
    // 0x1d4fec: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1d4fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_1d4ff0:
    // 0x1d4ff0: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x1d4ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
label_1d4ff4:
    // 0x1d4ff4: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1d4ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_1d4ff8:
    // 0x1d4ff8: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x1d4ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
label_1d4ffc:
    // 0x1d4ffc: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1d4ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_1d5000:
    // 0x1d5000: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x1d5000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
label_1d5004:
    // 0x1d5004: 0xc09dd3c  jal         func_2774F0
label_1d5008:
    if (ctx->pc == 0x1D5008u) {
        ctx->pc = 0x1D5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5004u;
        // 0x1d5008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D500Cu;
        goto label_1d500c;
    }
    ctx->pc = 0x1D5004u;
    SET_GPR_U32(ctx, 31, 0x1D500Cu);
    ctx->pc = 0x1D5008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5004u;
    // 0x1d5008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774F0u, 0x1D5004u, 0x1D500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D500Cu;
label_1d500c:
    // 0x1d500c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d500cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5010:
    // 0x1d5010: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
label_1d5014:
    if (ctx->pc == 0x1D5014u) {
        ctx->pc = 0x1D5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5010u;
        // 0x1d5014: 0x8e670000  lw          $a3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5018u;
        goto label_1d5018;
    }
    ctx->pc = 0x1D5010u;
    {
        const bool branch_taken_0x1d5010 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5010) {
            ctx->pc = 0x1D5014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5010u;
            // 0x1d5014: 0x8e670000  lw          $a3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5034u;
            goto label_1d5034;
        }
    }
    ctx->pc = 0x1D5018u;
label_1d5018:
    // 0x1d5018: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d5018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1d501c:
    // 0x1d501c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d501cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5020:
    // 0x1d5020: 0x24a5d3c0  addiu       $a1, $a1, -0x2C40
    ctx->pc = 0x1d5020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955968));
label_1d5024:
    // 0x1d5024: 0xc0efefa  jal         func_3BFBE8
label_1d5028:
    if (ctx->pc == 0x1D5028u) {
        ctx->pc = 0x1D5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5024u;
        // 0x1d5028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D502Cu;
        goto label_1d502c;
    }
    ctx->pc = 0x1D5024u;
    SET_GPR_U32(ctx, 31, 0x1D502Cu);
    ctx->pc = 0x1D5028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5024u;
    // 0x1d5028: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D5024u, 0x1D502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D502Cu;
label_1d502c:
    // 0x1d502c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1d5030:
    if (ctx->pc == 0x1D5030u) {
        ctx->pc = 0x1D5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D502Cu;
        // 0x1d5030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5034u;
        goto label_1d5034;
    }
    ctx->pc = 0x1D502Cu;
    {
        const bool branch_taken_0x1d502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D502Cu;
        // 0x1d5030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d502c) {
            ctx->pc = 0x1D525Cu;
            goto label_1d525c;
        }
    }
    ctx->pc = 0x1D5034u;
label_1d5034:
    // 0x1d5034: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d5034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d5038:
    // 0x1d5038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d5038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d503c:
    // 0x1d503c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5040:
    // 0x1d5040: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_1d5044:
    // 0x1d5044: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5048:
    // 0x1d5048: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1d5048u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d504c:
    // 0x1d504c: 0x40f809  jalr        $v0
label_1d5050:
    if (ctx->pc == 0x1D5050u) {
        ctx->pc = 0x1D5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D504Cu;
        // 0x1d5050: 0x3c1e0040  lui         $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5054u;
        goto label_1d5054;
    }
    ctx->pc = 0x1D504Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5054u);
        ctx->pc = 0x1D5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D504Cu;
        // 0x1d5050: 0x3c1e0040  lui         $fp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D504Cu, 0x1D5054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5054u;
label_1d5054:
    // 0x1d5054: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x1d5054u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_1d5058:
    // 0x1d5058: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d505c:
    // 0x1d505c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5060:
    // 0x1d5060: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1d5064:
    // 0x1d5064: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5068:
    // 0x1d5068: 0x40f809  jalr        $v0
label_1d506c:
    if (ctx->pc == 0x1D506Cu) {
        ctx->pc = 0x1D506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5068u;
        // 0x1d506c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5070u;
        goto label_1d5070;
    }
    ctx->pc = 0x1D5068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5070u);
        ctx->pc = 0x1D506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5068u;
        // 0x1d506c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5068u, 0x1D5070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5070u;
label_1d5070:
    // 0x1d5070: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d5074:
    // 0x1d5074: 0x24040818  addiu       $a0, $zero, 0x818
    ctx->pc = 0x1d5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2072));
label_1d5078:
    // 0x1d5078: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1d5078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1d507c:
    // 0x1d507c: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x1d507cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d5080:
    // 0x1d5080: 0xc0f52a8  jal         func_3D4AA0
label_1d5084:
    if (ctx->pc == 0x1D5084u) {
        ctx->pc = 0x1D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5080u;
        // 0x1d5084: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5088u;
        goto label_1d5088;
    }
    ctx->pc = 0x1D5080u;
    SET_GPR_U32(ctx, 31, 0x1D5088u);
    ctx->pc = 0x1D5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5080u;
    // 0x1d5084: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D5080u, 0x1D5088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5088u;
label_1d5088:
    // 0x1d5088: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d508c:
    // 0x1d508c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1d508cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1d5090:
    // 0x1d5090: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_1d5094:
    if (ctx->pc == 0x1D5094u) {
        ctx->pc = 0x1D5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5090u;
        // 0x1d5094: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5098u;
        goto label_1d5098;
    }
    ctx->pc = 0x1D5090u;
    {
        const bool branch_taken_0x1d5090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5090u;
        // 0x1d5094: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5090) {
            ctx->pc = 0x1D511Cu;
            goto label_1d511c;
        }
    }
    ctx->pc = 0x1D5098u;
label_1d5098:
    // 0x1d5098: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d5098u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d509c:
    // 0x1d509c: 0x0  nop
    ctx->pc = 0x1d509cu;
    // NOP
label_1d50a0:
    // 0x1d50a0: 0xc0d737c  jal         func_35CDF0
label_1d50a4:
    if (ctx->pc == 0x1D50A4u) {
        ctx->pc = 0x1D50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50A0u;
        // 0x1d50a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50A8u;
        goto label_1d50a8;
    }
    ctx->pc = 0x1D50A0u;
    SET_GPR_U32(ctx, 31, 0x1D50A8u);
    ctx->pc = 0x1D50A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50A0u;
    // 0x1d50a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1D50A0u, 0x1D50A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50A8u;
label_1d50a8:
    // 0x1d50a8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1d50a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1d50ac:
    // 0x1d50ac: 0x26250818  addiu       $a1, $s1, 0x818
    ctx->pc = 0x1d50acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
label_1d50b0:
    // 0x1d50b0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1d50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1d50b4:
    // 0x1d50b4: 0x2650ffff  addiu       $s0, $s2, -0x1
    ctx->pc = 0x1d50b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1d50b8:
    // 0x1d50b8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1d50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1d50bc:
    // 0x1d50bc: 0x26240418  addiu       $a0, $s1, 0x418
    ctx->pc = 0x1d50bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
label_1d50c0:
    // 0x1d50c0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1d50c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1d50c4:
    // 0x1d50c4: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x1d50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1d50c8:
    // 0x1d50c8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1d50cc:
    // 0x1d50cc: 0x0  nop
    ctx->pc = 0x1d50ccu;
    // NOP
label_1d50d0:
    // 0x1d50d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1d50d4:
    // 0x1d50d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d50d8:
    // 0x1d50d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1d50dc:
    // 0x1d50dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d50dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1d50e0:
    // 0x1d50e0: 0x1474fffb  bne         $v1, $s4, . + 4 + (-0x5 << 2)
label_1d50e4:
    if (ctx->pc == 0x1D50E4u) {
        ctx->pc = 0x1D50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50E0u;
        // 0x1d50e4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50E8u;
        goto label_1d50e8;
    }
    ctx->pc = 0x1D50E0u;
    {
        const bool branch_taken_0x1d50e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x1D50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50E0u;
        // 0x1d50e4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50e0) {
            ctx->pc = 0x1D50D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d50d0;
        }
    }
    ctx->pc = 0x1D50E8u;
label_1d50e8:
    // 0x1d50e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d50e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d50ec:
    // 0x1d50ec: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1d50f0:
    // 0x1d50f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d50f4:
    // 0x1d50f4: 0x0  nop
    ctx->pc = 0x1d50f4u;
    // NOP
label_1d50f8:
    // 0x1d50f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d50f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1d50fc:
    // 0x1d50fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d5100:
    // 0x1d5100: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d5100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1d5104:
    // 0x1d5104: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d5104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1d5108:
    // 0x1d5108: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
label_1d510c:
    if (ctx->pc == 0x1D510Cu) {
        ctx->pc = 0x1D510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5108u;
        // 0x1d510c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5110u;
        goto label_1d5110;
    }
    ctx->pc = 0x1D5108u;
    {
        const bool branch_taken_0x1d5108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5108u;
        // 0x1d510c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5108) {
            ctx->pc = 0x1D50F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d50f8;
        }
    }
    ctx->pc = 0x1D5110u;
label_1d5110:
    // 0x1d5110: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1d5110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5114:
    // 0x1d5114: 0x1654ffe2  bne         $s2, $s4, . + 4 + (-0x1E << 2)
label_1d5118:
    if (ctx->pc == 0x1D5118u) {
        ctx->pc = 0x1D5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5114u;
        // 0x1d5118: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D511Cu;
        goto label_1d511c;
    }
    ctx->pc = 0x1D5114u;
    {
        const bool branch_taken_0x1d5114 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x1D5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5114u;
        // 0x1d5118: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5114) {
            ctx->pc = 0x1D50A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d50a0;
        }
    }
    ctx->pc = 0x1D511Cu;
label_1d511c:
    // 0x1d511c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d511cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d5120:
    // 0x1d5120: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1d5120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d5124:
    // 0x1d5124: 0x24428eb0  addiu       $v0, $v0, -0x7150
    ctx->pc = 0x1d5124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938288));
label_1d5128:
    // 0x1d5128: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d5128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d512c:
    // 0x1d512c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1d512cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_1d5130:
    // 0x1d5130: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d5130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d5134:
    // 0x1d5134: 0xafc08eb8  sw          $zero, -0x7148($fp)
    ctx->pc = 0x1d5134u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294938296), GPR_U32(ctx, 0));
label_1d5138:
    // 0x1d5138: 0xac438eb4  sw          $v1, -0x714C($v0)
    ctx->pc = 0x1d5138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938292), GPR_U32(ctx, 3));
label_1d513c:
    // 0x1d513c: 0x18600036  blez        $v1, . + 4 + (0x36 << 2)
label_1d5140:
    if (ctx->pc == 0x1D5140u) {
        ctx->pc = 0x1D5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D513Cu;
        // 0x1d5140: 0xaee08ebc  sw          $zero, -0x7144($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294938300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5144u;
        goto label_1d5144;
    }
    ctx->pc = 0x1D513Cu;
    {
        const bool branch_taken_0x1d513c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D5140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D513Cu;
        // 0x1d5140: 0xaee08ebc  sw          $zero, -0x7144($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294938300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d513c) {
            ctx->pc = 0x1D5218u;
            goto label_1d5218;
        }
    }
    ctx->pc = 0x1D5144u;
label_1d5144:
    // 0x1d5144: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d5148:
    // 0x1d5148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d514c:
    // 0x1d514c: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x1d514cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
label_1d5150:
    // 0x1d5150: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x1d5150u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
label_1d5154:
    // 0x1d5154: 0x0  nop
    ctx->pc = 0x1d5154u;
    // NOP
label_1d5158:
    // 0x1d5158: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d515c:
    // 0x1d515c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d515cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d5160:
    // 0x1d5160: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5164:
    // 0x1d5164: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5168:
    // 0x1d5168: 0x40f809  jalr        $v0
label_1d516c:
    if (ctx->pc == 0x1D516Cu) {
        ctx->pc = 0x1D516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5168u;
        // 0x1d516c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5170u;
        goto label_1d5170;
    }
    ctx->pc = 0x1D5168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5170u);
        ctx->pc = 0x1D516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5168u;
        // 0x1d516c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5168u, 0x1D5170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5170u;
label_1d5170:
    // 0x1d5170: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5174:
    // 0x1d5174: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x1d5174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1d5178:
    // 0x1d5178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d517c:
    // 0x1d517c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5180:
    // 0x1d5180: 0x40f809  jalr        $v0
label_1d5184:
    if (ctx->pc == 0x1D5184u) {
        ctx->pc = 0x1D5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5180u;
        // 0x1d5184: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5188u;
        goto label_1d5188;
    }
    ctx->pc = 0x1D5180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5188u);
        ctx->pc = 0x1D5184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5180u;
        // 0x1d5184: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5180u, 0x1D5188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5188u;
label_1d5188:
    // 0x1d5188: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d518c:
    // 0x1d518c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5190:
    // 0x1d5190: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x1d5190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1d5194:
    // 0x1d5194: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5198:
    // 0x1d5198: 0x40f809  jalr        $v0
label_1d519c:
    if (ctx->pc == 0x1D519Cu) {
        ctx->pc = 0x1D519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5198u;
        // 0x1d519c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51A0u;
        goto label_1d51a0;
    }
    ctx->pc = 0x1D5198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D51A0u);
        ctx->pc = 0x1D519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5198u;
        // 0x1d519c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5198u, 0x1D51A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D51A0u;
label_1d51a0:
    // 0x1d51a0: 0x8ea48eb0  lw          $a0, -0x7150($s5)
    ctx->pc = 0x1d51a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938288)));
label_1d51a4:
    // 0x1d51a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d51a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d51a8:
    // 0x1d51a8: 0xc0d7468  jal         func_35D1A0
label_1d51ac:
    if (ctx->pc == 0x1D51ACu) {
        ctx->pc = 0x1D51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51A8u;
        // 0x1d51ac: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51B0u;
        goto label_1d51b0;
    }
    ctx->pc = 0x1D51A8u;
    SET_GPR_U32(ctx, 31, 0x1D51B0u);
    ctx->pc = 0x1D51ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51A8u;
    // 0x1d51ac: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x1D51A8u, 0x1D51B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51B0u;
label_1d51b0:
    // 0x1d51b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d51b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d51b4:
    // 0x1d51b4: 0xc0efb95  jal         func_3BEE54
label_1d51b8:
    if (ctx->pc == 0x1D51B8u) {
        ctx->pc = 0x1D51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51B4u;
        // 0x1d51b8: 0x26c5d390  addiu       $a1, $s6, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51BCu;
        goto label_1d51bc;
    }
    ctx->pc = 0x1D51B4u;
    SET_GPR_U32(ctx, 31, 0x1D51BCu);
    ctx->pc = 0x1D51B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51B4u;
    // 0x1d51b8: 0x26c5d390  addiu       $a1, $s6, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D51B4u, 0x1D51BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51BCu;
label_1d51bc:
    // 0x1d51bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d51c0:
    if (ctx->pc == 0x1D51C0u) {
        ctx->pc = 0x1D51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51BCu;
        // 0x1d51c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51C4u;
        goto label_1d51c4;
    }
    ctx->pc = 0x1D51BCu;
    {
        const bool branch_taken_0x1d51bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51BCu;
        // 0x1d51c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51bc) {
            ctx->pc = 0x1D51D4u;
            goto label_1d51d4;
        }
    }
    ctx->pc = 0x1D51C4u;
label_1d51c4:
    // 0x1d51c4: 0x8ea28eb0  lw          $v0, -0x7150($s5)
    ctx->pc = 0x1d51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938288)));
label_1d51c8:
    // 0x1d51c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d51cc:
    // 0x1d51cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d51d0:
    if (ctx->pc == 0x1D51D0u) {
        ctx->pc = 0x1D51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51CCu;
        // 0x1d51d0: 0xafc28eb8  sw          $v0, -0x7148($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294938296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51D4u;
        goto label_1d51d4;
    }
    ctx->pc = 0x1D51CCu;
    {
        const bool branch_taken_0x1d51cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51CCu;
        // 0x1d51d0: 0xafc28eb8  sw          $v0, -0x7148($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294938296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51cc) {
            ctx->pc = 0x1D51F0u;
            goto label_1d51f0;
        }
    }
    ctx->pc = 0x1D51D4u;
label_1d51d4:
    // 0x1d51d4: 0xc0efb95  jal         func_3BEE54
label_1d51d8:
    if (ctx->pc == 0x1D51D8u) {
        ctx->pc = 0x1D51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D4u;
        // 0x1d51d8: 0x2685d380  addiu       $a1, $s4, -0x2C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51DCu;
        goto label_1d51dc;
    }
    ctx->pc = 0x1D51D4u;
    SET_GPR_U32(ctx, 31, 0x1D51DCu);
    ctx->pc = 0x1D51D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51D4u;
    // 0x1d51d8: 0x2685d380  addiu       $a1, $s4, -0x2C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1D51D4u, 0x1D51DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51DCu;
label_1d51dc:
    // 0x1d51dc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1d51e0:
    if (ctx->pc == 0x1D51E0u) {
        ctx->pc = 0x1D51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51DCu;
        // 0x1d51e0: 0x8ea58eb0  lw          $a1, -0x7150($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D51E4u;
        goto label_1d51e4;
    }
    ctx->pc = 0x1D51DCu;
    {
        const bool branch_taken_0x1d51dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d51dc) {
            ctx->pc = 0x1D51E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D51DCu;
            // 0x1d51e0: 0x8ea58eb0  lw          $a1, -0x7150($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D51F4u;
            goto label_1d51f4;
        }
    }
    ctx->pc = 0x1D51E4u;
label_1d51e4:
    // 0x1d51e4: 0x8ea28eb0  lw          $v0, -0x7150($s5)
    ctx->pc = 0x1d51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938288)));
label_1d51e8:
    // 0x1d51e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d51ec:
    // 0x1d51ec: 0xaee28ebc  sw          $v0, -0x7144($s7)
    ctx->pc = 0x1d51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294938300), GPR_U32(ctx, 2));
label_1d51f0:
    // 0x1d51f0: 0x8ea58eb0  lw          $a1, -0x7150($s5)
    ctx->pc = 0x1d51f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938288)));
label_1d51f4:
    // 0x1d51f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d51f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d51f8:
    // 0x1d51f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d51f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d51fc:
    // 0x1d51fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d51fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d5200:
    // 0x1d5200: 0xc0755cc  jal         func_1D5730
label_1d5204:
    if (ctx->pc == 0x1D5204u) {
        ctx->pc = 0x1D5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5200u;
        // 0x1d5204: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5208u;
        goto label_1d5208;
    }
    ctx->pc = 0x1D5200u;
    SET_GPR_U32(ctx, 31, 0x1D5208u);
    ctx->pc = 0x1D5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5200u;
    // 0x1d5204: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5730u, 0x1D5200u, 0x1D5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5208u;
label_1d5208:
    // 0x1d5208: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d5208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d520c:
    // 0x1d520c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d520cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5210:
    // 0x1d5210: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_1d5214:
    if (ctx->pc == 0x1D5214u) {
        ctx->pc = 0x1D5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5210u;
        // 0x1d5214: 0x26310818  addiu       $s1, $s1, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5218u;
        goto label_1d5218;
    }
    ctx->pc = 0x1D5210u;
    {
        const bool branch_taken_0x1d5210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5210u;
        // 0x1d5214: 0x26310818  addiu       $s1, $s1, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5210) {
            ctx->pc = 0x1D5158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5158;
        }
    }
    ctx->pc = 0x1D5218u;
label_1d5218:
    // 0x1d5218: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d521c:
    // 0x1d521c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_1d5220:
    if (ctx->pc == 0x1D5220u) {
        ctx->pc = 0x1D5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D521Cu;
        // 0x1d5220: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5224u;
        goto label_1d5224;
    }
    ctx->pc = 0x1D521Cu;
    {
        const bool branch_taken_0x1d521c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D521Cu;
        // 0x1d5220: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d521c) {
            ctx->pc = 0x1D5248u;
            goto label_1d5248;
        }
    }
    ctx->pc = 0x1D5224u;
label_1d5224:
    // 0x1d5224: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5228:
    // 0x1d5228: 0x8ea48eb0  lw          $a0, -0x7150($s5)
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938288)));
label_1d522c:
    // 0x1d522c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d522cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d5230:
    // 0x1d5230: 0xc075328  jal         func_1D4CA0
label_1d5234:
    if (ctx->pc == 0x1D5234u) {
        ctx->pc = 0x1D5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5230u;
        // 0x1d5234: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5238u;
        goto label_1d5238;
    }
    ctx->pc = 0x1D5230u;
    SET_GPR_U32(ctx, 31, 0x1D5238u);
    ctx->pc = 0x1D5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5230u;
    // 0x1d5234: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4CA0u, 0x1D5230u, 0x1D5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5238u;
label_1d5238:
    // 0x1d5238: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1d5238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1d523c:
    // 0x1d523c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d523cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5240:
    // 0x1d5240: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d5244:
    if (ctx->pc == 0x1D5244u) {
        ctx->pc = 0x1D5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5240u;
        // 0x1d5244: 0x26310818  addiu       $s1, $s1, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5248u;
        goto label_1d5248;
    }
    ctx->pc = 0x1D5240u;
    {
        const bool branch_taken_0x1d5240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5240u;
        // 0x1d5244: 0x26310818  addiu       $s1, $s1, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5240) {
            ctx->pc = 0x1D5228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5228;
        }
    }
    ctx->pc = 0x1D5248u;
label_1d5248:
    // 0x1d5248: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d524c:
    // 0x1d524c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1d5250:
    // 0x1d5250: 0x40f809  jalr        $v0
label_1d5254:
    if (ctx->pc == 0x1D5254u) {
        ctx->pc = 0x1D5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5250u;
        // 0x1d5254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5258u;
        goto label_1d5258;
    }
    ctx->pc = 0x1D5250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5258u);
        ctx->pc = 0x1D5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5250u;
        // 0x1d5254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5250u, 0x1D5258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5258u;
label_1d5258:
    // 0x1d5258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d525c:
    // 0x1d525c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1d525cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d5260:
    // 0x1d5260: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1d5260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1d5264:
    // 0x1d5264: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1d5264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1d5268:
    // 0x1d5268: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1d5268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1d526c:
    // 0x1d526c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x1d526cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1d5270:
    // 0x1d5270: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x1d5270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_1d5274:
    // 0x1d5274: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1d5274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1d5278:
    // 0x1d5278: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x1d5278u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_1d527c:
    // 0x1d527c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1d527cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1d5280:
    // 0x1d5280: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x1d5280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_1d5284:
    // 0x1d5284: 0x3e00008  jr          $ra
label_1d5288:
    if (ctx->pc == 0x1D5288u) {
        ctx->pc = 0x1D5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5284u;
        // 0x1d5288: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D528Cu;
        goto label_1d528c;
    }
    ctx->pc = 0x1D5284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5284u;
        // 0x1d5288: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D528Cu;
label_1d528c:
    // 0x1d528c: 0x0  nop
    ctx->pc = 0x1d528cu;
    // NOP
    ctx->pc = 0x1d5290u;
}
