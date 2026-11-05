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

// Function: sub_001A4F18
// Address: 0x1a4f18 - 0x1a5248
void sub_001A4F18_0x1a4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4F18_0x1a4f18");
#endif

    switch (ctx->pc) {
        case 0x1a4f18u: goto label_1a4f18;
        case 0x1a4f1cu: goto label_1a4f1c;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f24u: goto label_1a4f24;
        case 0x1a4f28u: goto label_1a4f28;
        case 0x1a4f2cu: goto label_1a4f2c;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f34u: goto label_1a4f34;
        case 0x1a4f38u: goto label_1a4f38;
        case 0x1a4f3cu: goto label_1a4f3c;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f44u: goto label_1a4f44;
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f4cu: goto label_1a4f4c;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4f54u: goto label_1a4f54;
        case 0x1a4f58u: goto label_1a4f58;
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f60u: goto label_1a4f60;
        case 0x1a4f64u: goto label_1a4f64;
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f6cu: goto label_1a4f6c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f84u: goto label_1a4f84;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4f8cu: goto label_1a4f8c;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f94u: goto label_1a4f94;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4f9cu: goto label_1a4f9c;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fa4u: goto label_1a4fa4;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4facu: goto label_1a4fac;
        case 0x1a4fb0u: goto label_1a4fb0;
        case 0x1a4fb4u: goto label_1a4fb4;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fc0u: goto label_1a4fc0;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fccu: goto label_1a4fcc;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fd4u: goto label_1a4fd4;
        case 0x1a4fd8u: goto label_1a4fd8;
        case 0x1a4fdcu: goto label_1a4fdc;
        case 0x1a4fe0u: goto label_1a4fe0;
        case 0x1a4fe4u: goto label_1a4fe4;
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a4fecu: goto label_1a4fec;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a4ff4u: goto label_1a4ff4;
        case 0x1a4ff8u: goto label_1a4ff8;
        case 0x1a4ffcu: goto label_1a4ffc;
        case 0x1a5000u: goto label_1a5000;
        case 0x1a5004u: goto label_1a5004;
        case 0x1a5008u: goto label_1a5008;
        case 0x1a500cu: goto label_1a500c;
        case 0x1a5010u: goto label_1a5010;
        case 0x1a5014u: goto label_1a5014;
        case 0x1a5018u: goto label_1a5018;
        case 0x1a501cu: goto label_1a501c;
        case 0x1a5020u: goto label_1a5020;
        case 0x1a5024u: goto label_1a5024;
        case 0x1a5028u: goto label_1a5028;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5030u: goto label_1a5030;
        case 0x1a5034u: goto label_1a5034;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a503cu: goto label_1a503c;
        case 0x1a5040u: goto label_1a5040;
        case 0x1a5044u: goto label_1a5044;
        case 0x1a5048u: goto label_1a5048;
        case 0x1a504cu: goto label_1a504c;
        case 0x1a5050u: goto label_1a5050;
        case 0x1a5054u: goto label_1a5054;
        case 0x1a5058u: goto label_1a5058;
        case 0x1a505cu: goto label_1a505c;
        case 0x1a5060u: goto label_1a5060;
        case 0x1a5064u: goto label_1a5064;
        case 0x1a5068u: goto label_1a5068;
        case 0x1a506cu: goto label_1a506c;
        case 0x1a5070u: goto label_1a5070;
        case 0x1a5074u: goto label_1a5074;
        case 0x1a5078u: goto label_1a5078;
        case 0x1a507cu: goto label_1a507c;
        case 0x1a5080u: goto label_1a5080;
        case 0x1a5084u: goto label_1a5084;
        case 0x1a5088u: goto label_1a5088;
        case 0x1a508cu: goto label_1a508c;
        case 0x1a5090u: goto label_1a5090;
        case 0x1a5094u: goto label_1a5094;
        case 0x1a5098u: goto label_1a5098;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50a0u: goto label_1a50a0;
        case 0x1a50a4u: goto label_1a50a4;
        case 0x1a50a8u: goto label_1a50a8;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50b0u: goto label_1a50b0;
        case 0x1a50b4u: goto label_1a50b4;
        case 0x1a50b8u: goto label_1a50b8;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50c0u: goto label_1a50c0;
        case 0x1a50c4u: goto label_1a50c4;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50d4u: goto label_1a50d4;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a50dcu: goto label_1a50dc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a50e4u: goto label_1a50e4;
        case 0x1a50e8u: goto label_1a50e8;
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f0u: goto label_1a50f0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a50f8u: goto label_1a50f8;
        case 0x1a50fcu: goto label_1a50fc;
        case 0x1a5100u: goto label_1a5100;
        case 0x1a5104u: goto label_1a5104;
        case 0x1a5108u: goto label_1a5108;
        case 0x1a510cu: goto label_1a510c;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5114u: goto label_1a5114;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a511cu: goto label_1a511c;
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5128u: goto label_1a5128;
        case 0x1a512cu: goto label_1a512c;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a5134u: goto label_1a5134;
        case 0x1a5138u: goto label_1a5138;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5144u: goto label_1a5144;
        case 0x1a5148u: goto label_1a5148;
        case 0x1a514cu: goto label_1a514c;
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5154u: goto label_1a5154;
        case 0x1a5158u: goto label_1a5158;
        case 0x1a515cu: goto label_1a515c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5164u: goto label_1a5164;
        case 0x1a5168u: goto label_1a5168;
        case 0x1a516cu: goto label_1a516c;
        case 0x1a5170u: goto label_1a5170;
        case 0x1a5174u: goto label_1a5174;
        case 0x1a5178u: goto label_1a5178;
        case 0x1a517cu: goto label_1a517c;
        case 0x1a5180u: goto label_1a5180;
        case 0x1a5184u: goto label_1a5184;
        case 0x1a5188u: goto label_1a5188;
        case 0x1a518cu: goto label_1a518c;
        case 0x1a5190u: goto label_1a5190;
        case 0x1a5194u: goto label_1a5194;
        case 0x1a5198u: goto label_1a5198;
        case 0x1a519cu: goto label_1a519c;
        case 0x1a51a0u: goto label_1a51a0;
        case 0x1a51a4u: goto label_1a51a4;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51acu: goto label_1a51ac;
        case 0x1a51b0u: goto label_1a51b0;
        case 0x1a51b4u: goto label_1a51b4;
        case 0x1a51b8u: goto label_1a51b8;
        case 0x1a51bcu: goto label_1a51bc;
        case 0x1a51c0u: goto label_1a51c0;
        case 0x1a51c4u: goto label_1a51c4;
        case 0x1a51c8u: goto label_1a51c8;
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51d0u: goto label_1a51d0;
        case 0x1a51d4u: goto label_1a51d4;
        case 0x1a51d8u: goto label_1a51d8;
        case 0x1a51dcu: goto label_1a51dc;
        case 0x1a51e0u: goto label_1a51e0;
        case 0x1a51e4u: goto label_1a51e4;
        case 0x1a51e8u: goto label_1a51e8;
        case 0x1a51ecu: goto label_1a51ec;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a51f4u: goto label_1a51f4;
        case 0x1a51f8u: goto label_1a51f8;
        case 0x1a51fcu: goto label_1a51fc;
        case 0x1a5200u: goto label_1a5200;
        case 0x1a5204u: goto label_1a5204;
        case 0x1a5208u: goto label_1a5208;
        case 0x1a520cu: goto label_1a520c;
        case 0x1a5210u: goto label_1a5210;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5218u: goto label_1a5218;
        case 0x1a521cu: goto label_1a521c;
        case 0x1a5220u: goto label_1a5220;
        case 0x1a5224u: goto label_1a5224;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        default: break;
    }

    ctx->pc = 0x1a4f18u;

label_1a4f18:
    // 0x1a4f18: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1a4f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1a4f1c:
    // 0x1a4f1c: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x1a4f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
label_1a4f20:
    // 0x1a4f20: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x1a4f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
label_1a4f24:
    // 0x1a4f24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a4f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f28:
    // 0x1a4f28: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x1a4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
label_1a4f2c:
    // 0x1a4f2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a4f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f30:
    // 0x1a4f30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a4f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f34:
    // 0x1a4f34: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x1a4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
label_1a4f38:
    // 0x1a4f38: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1a4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_1a4f3c:
    // 0x1a4f3c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a4f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4f40:
    // 0x1a4f40: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x1a4f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1a4f44:
    // 0x1a4f44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a4f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f48:
    // 0x1a4f48: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x1a4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1a4f4c:
    // 0x1a4f4c: 0xc0f7218  jal         func_3DC860
label_1a4f50:
    if (ctx->pc == 0x1A4F50u) {
        ctx->pc = 0x1A4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F4Cu;
        // 0x1a4f50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F54u;
        goto label_1a4f54;
    }
    ctx->pc = 0x1A4F4Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F54u);
    ctx->pc = 0x1A4F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F4Cu;
    // 0x1a4f50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1A4F4Cu, 0x1A4F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F54u;
label_1a4f54:
    // 0x1a4f54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a4f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f58:
    // 0x1a4f58: 0xc06fb38  jal         func_1BECE0
label_1a4f5c:
    if (ctx->pc == 0x1A4F5Cu) {
        ctx->pc = 0x1A4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F58u;
        // 0x1a4f5c: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F60u;
        goto label_1a4f60;
    }
    ctx->pc = 0x1A4F58u;
    SET_GPR_U32(ctx, 31, 0x1A4F60u);
    ctx->pc = 0x1A4F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F58u;
    // 0x1a4f5c: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1A4F58u, 0x1A4F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F60u;
label_1a4f60:
    // 0x1a4f60: 0xc061a16  jal         func_186858
label_1a4f64:
    if (ctx->pc == 0x1A4F64u) {
        ctx->pc = 0x1A4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F60u;
        // 0x1a4f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F68u;
        goto label_1a4f68;
    }
    ctx->pc = 0x1A4F60u;
    SET_GPR_U32(ctx, 31, 0x1A4F68u);
    ctx->pc = 0x1A4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F60u;
    // 0x1a4f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4F60u, 0x1A4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F68u;
label_1a4f68:
    // 0x1a4f68: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a4f6c:
    // 0x1a4f6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4f70:
    // 0x1a4f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f74:
    // 0x1a4f74: 0xc061a16  jal         func_186858
label_1a4f78:
    if (ctx->pc == 0x1A4F78u) {
        ctx->pc = 0x1A4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F74u;
        // 0x1a4f78: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F7Cu;
        goto label_1a4f7c;
    }
    ctx->pc = 0x1A4F74u;
    SET_GPR_U32(ctx, 31, 0x1A4F7Cu);
    ctx->pc = 0x1A4F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F74u;
    // 0x1a4f78: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4F74u, 0x1A4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F7Cu;
label_1a4f7c:
    // 0x1a4f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f80:
    // 0x1a4f80: 0xc06ee66  jal         func_1BB998
label_1a4f84:
    if (ctx->pc == 0x1A4F84u) {
        ctx->pc = 0x1A4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F80u;
        // 0x1a4f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F88u;
        goto label_1a4f88;
    }
    ctx->pc = 0x1A4F80u;
    SET_GPR_U32(ctx, 31, 0x1A4F88u);
    ctx->pc = 0x1A4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F80u;
    // 0x1a4f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1A4F80u, 0x1A4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F88u;
label_1a4f88:
    // 0x1a4f88: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1a4f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4f8c:
    // 0x1a4f8c: 0xc0f6a96  jal         func_3DAA58
label_1a4f90:
    if (ctx->pc == 0x1A4F90u) {
        ctx->pc = 0x1A4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F8Cu;
        // 0x1a4f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F94u;
        goto label_1a4f94;
    }
    ctx->pc = 0x1A4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F94u);
    ctx->pc = 0x1A4F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F8Cu;
    // 0x1a4f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A4F8Cu, 0x1A4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F94u;
label_1a4f94:
    // 0x1a4f94: 0xc0f6a96  jal         func_3DAA58
label_1a4f98:
    if (ctx->pc == 0x1A4F98u) {
        ctx->pc = 0x1A4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F94u;
        // 0x1a4f98: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F9Cu;
        goto label_1a4f9c;
    }
    ctx->pc = 0x1A4F94u;
    SET_GPR_U32(ctx, 31, 0x1A4F9Cu);
    ctx->pc = 0x1A4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4F94u;
    // 0x1a4f98: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A4F94u, 0x1A4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F9Cu;
label_1a4f9c:
    // 0x1a4f9c: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x1a4f9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1a4fa0:
    // 0x1a4fa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a4fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a4fa4:
    // 0x1a4fa4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1a4fa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4fa8:
    // 0x1a4fa8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a4fac:
    // 0x1a4fac: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1a4facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_1a4fb0:
    // 0x1a4fb0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1a4fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1a4fb4:
    // 0x1a4fb4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1a4fb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a4fb8:
    // 0x1a4fb8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1a4fb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4fbc:
    // 0x1a4fbc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a4fbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a4fc0:
    // 0x1a4fc0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1a4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a4fc4:
    // 0x1a4fc4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1a4fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4fc8:
    // 0x1a4fc8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1a4fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4fcc:
    // 0x1a4fcc: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1a4fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a4fd0:
    // 0x1a4fd0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1a4fd0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1a4fd4:
    // 0x1a4fd4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1a4fd4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1a4fd8:
    // 0x1a4fd8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1a4fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1a4fdc:
    // 0x1a4fdc: 0x0  nop
    ctx->pc = 0x1a4fdcu;
    // NOP
label_1a4fe0:
    // 0x1a4fe0: 0x0  nop
    ctx->pc = 0x1a4fe0u;
    // NOP
label_1a4fe4:
    // 0x1a4fe4: 0x46000044  c1          0x44
    ctx->pc = 0x1a4fe4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1a4fe8:
    // 0x1a4fe8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a4fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1a4fec:
    // 0x1a4fec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a4fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4ff0:
    // 0x1a4ff0: 0x0  nop
    ctx->pc = 0x1a4ff0u;
    // NOP
label_1a4ff4:
    // 0x1a4ff4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1a4ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4ff8:
    // 0x1a4ff8: 0x0  nop
    ctx->pc = 0x1a4ff8u;
    // NOP
label_1a4ffc:
    // 0x1a4ffc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1a5000:
    if (ctx->pc == 0x1A5000u) {
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FFCu;
        // 0x1a5000: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5004u;
        goto label_1a5004;
    }
    ctx->pc = 0x1A4FFCu;
    {
        const bool branch_taken_0x1a4ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FFCu;
        // 0x1a5000: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ffc) {
            ctx->pc = 0x1A5028u;
            goto label_1a5028;
        }
    }
    ctx->pc = 0x1A5004u;
label_1a5004:
    // 0x1a5004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a5008:
    // 0x1a5008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a500c:
    // 0x1a500c: 0x0  nop
    ctx->pc = 0x1a500cu;
    // NOP
label_1a5010:
    // 0x1a5010: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1a5010u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1a5014:
    // 0x1a5014: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a5014u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1a5018:
    // 0x1a5018: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a5018u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a501c:
    // 0x1a501c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1a501cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1a5020:
    // 0x1a5020: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a5020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a5024:
    // 0x1a5024: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1a5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a5028:
    // 0x1a5028: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1a5028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a502c:
    // 0x1a502c: 0xc07a8b2  jal         func_1EA2C8
label_1a5030:
    if (ctx->pc == 0x1A5030u) {
        ctx->pc = 0x1A5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A502Cu;
        // 0x1a5030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5034u;
        goto label_1a5034;
    }
    ctx->pc = 0x1A502Cu;
    SET_GPR_U32(ctx, 31, 0x1A5034u);
    ctx->pc = 0x1A5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A502Cu;
    // 0x1a5030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1A502Cu, 0x1A5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5034u;
label_1a5034:
    // 0x1a5034: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1a5034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_1a5038:
    // 0x1a5038: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1a5038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a503c:
    // 0x1a503c: 0xc460ff10  lwc1        $f0, -0xF0($v1)
    ctx->pc = 0x1a503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5040:
    // 0x1a5040: 0xc0f6a96  jal         func_3DAA58
label_1a5044:
    if (ctx->pc == 0x1A5044u) {
        ctx->pc = 0x1A5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5040u;
        // 0x1a5044: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5048u;
        goto label_1a5048;
    }
    ctx->pc = 0x1A5040u;
    SET_GPR_U32(ctx, 31, 0x1A5048u);
    ctx->pc = 0x1A5044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5040u;
    // 0x1a5044: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A5040u, 0x1A5048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5048u;
label_1a5048:
    // 0x1a5048: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1a5048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a504c:
    // 0x1a504c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a504cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5050:
    // 0x1a5050: 0x0  nop
    ctx->pc = 0x1a5050u;
    // NOP
label_1a5054:
    // 0x1a5054: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1a5058:
    if (ctx->pc == 0x1A5058u) {
        ctx->pc = 0x1A5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5054u;
        // 0x1a5058: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A505Cu;
        goto label_1a505c;
    }
    ctx->pc = 0x1A5054u;
    {
        const bool branch_taken_0x1a5054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5054u;
        // 0x1a5058: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5054) {
            ctx->pc = 0x1A5084u;
            goto label_1a5084;
        }
    }
    ctx->pc = 0x1A505Cu;
label_1a505c:
    // 0x1a505c: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x1a505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
label_1a5060:
    // 0x1a5060: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a5060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5064:
    // 0x1a5064: 0xc077912  jal         func_1DE448
label_1a5068:
    if (ctx->pc == 0x1A5068u) {
        ctx->pc = 0x1A5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5064u;
        // 0x1a5068: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A506Cu;
        goto label_1a506c;
    }
    ctx->pc = 0x1A5064u;
    SET_GPR_U32(ctx, 31, 0x1A506Cu);
    ctx->pc = 0x1A5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5064u;
    // 0x1a5068: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x1A5064u, 0x1A506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A506Cu;
label_1a506c:
    // 0x1a506c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a5070:
    if (ctx->pc == 0x1A5070u) {
        ctx->pc = 0x1A5074u;
        goto label_1a5074;
    }
    ctx->pc = 0x1A506Cu;
    {
        const bool branch_taken_0x1a506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a506c) {
            ctx->pc = 0x1A5084u;
            goto label_1a5084;
        }
    }
    ctx->pc = 0x1A5074u;
label_1a5074:
    // 0x1a5074: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a5074u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5078:
    // 0x1a5078: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1a5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a507c:
    // 0x1a507c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a5080:
    if (ctx->pc == 0x1A5080u) {
        ctx->pc = 0x1A5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A507Cu;
        // 0x1a5080: 0x27b100c0  addiu       $s1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5084u;
        goto label_1a5084;
    }
    ctx->pc = 0x1A507Cu;
    {
        const bool branch_taken_0x1a507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A507Cu;
        // 0x1a5080: 0x27b100c0  addiu       $s1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a507c) {
            ctx->pc = 0x1A5090u;
            goto label_1a5090;
        }
    }
    ctx->pc = 0x1A5084u;
label_1a5084:
    // 0x1a5084: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1a5084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5088:
    // 0x1a5088: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1a5088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a508c:
    // 0x1a508c: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x1a508cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a5090:
    // 0x1a5090: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1a5090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5094:
    // 0x1a5094: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1a5094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5098:
    // 0x1a5098: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a5098u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a509c:
    // 0x1a509c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1a509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a50a0:
    // 0x1a50a0: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1a50a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a50a4:
    // 0x1a50a4: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x1a50a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1a50a8:
    // 0x1a50a8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1a50a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a50ac:
    // 0x1a50ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a50acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a50b0:
    // 0x1a50b0: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x1a50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a50b4:
    // 0x1a50b4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1a50b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a50b8:
    // 0x1a50b8: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x1a50b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a50bc:
    // 0x1a50bc: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x1a50bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1a50c0:
    // 0x1a50c0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1a50c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1a50c4:
    // 0x1a50c4: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x1a50c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1a50c8:
    // 0x1a50c8: 0xc0f6a96  jal         func_3DAA58
label_1a50cc:
    if (ctx->pc == 0x1A50CCu) {
        ctx->pc = 0x1A50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50C8u;
        // 0x1a50cc: 0xe7a200d4  swc1        $f2, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50D0u;
        goto label_1a50d0;
    }
    ctx->pc = 0x1A50C8u;
    SET_GPR_U32(ctx, 31, 0x1A50D0u);
    ctx->pc = 0x1A50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50C8u;
    // 0x1a50cc: 0xe7a200d4  swc1        $f2, 0xD4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A50C8u, 0x1A50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50D0u;
label_1a50d0:
    // 0x1a50d0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1a50d4:
    // 0x1a50d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a50d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a50d8:
    // 0x1a50d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a50d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a50dc:
    // 0x1a50dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a50e0:
    // 0x1a50e0: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1a50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1a50e4:
    // 0x1a50e4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1a50e8:
    // 0x1a50e8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1a50e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1a50ec:
    // 0x1a50ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a50ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a50f0:
    // 0x1a50f0: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1a50f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_1a50f4:
    // 0x1a50f4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a50f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1a50f8:
    // 0x1a50f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a50f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a50fc:
    // 0x1a50fc: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1a50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_1a5100:
    // 0x1a5100: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1a5100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5104:
    // 0x1a5104: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1a5104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_1a5108:
    // 0x1a5108: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1a5108u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1a510c:
    // 0x1a510c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1a510cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_1a5110:
    // 0x1a5110: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a5110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5114:
    // 0x1a5114: 0x0  nop
    ctx->pc = 0x1a5114u;
    // NOP
label_1a5118:
    // 0x1a5118: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_1a511c:
    if (ctx->pc == 0x1A511Cu) {
        ctx->pc = 0x1A511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5118u;
        // 0x1a511c: 0xafa000f8  sw          $zero, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5120u;
        goto label_1a5120;
    }
    ctx->pc = 0x1A5118u;
    {
        const bool branch_taken_0x1a5118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5118u;
        // 0x1a511c: 0xafa000f8  sw          $zero, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5118) {
            ctx->pc = 0x1A514Cu;
            goto label_1a514c;
        }
    }
    ctx->pc = 0x1A5120u;
label_1a5120:
    // 0x1a5120: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1a5120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5124:
    // 0x1a5124: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1a5124u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1a5128:
    // 0x1a5128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a5128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a512c:
    // 0x1a512c: 0x0  nop
    ctx->pc = 0x1a512cu;
    // NOP
label_1a5130:
    // 0x1a5130: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1a5134:
    if (ctx->pc == 0x1A5134u) {
        ctx->pc = 0x1A5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5130u;
        // 0x1a5134: 0xc7a000d8  lwc1        $f0, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5138u;
        goto label_1a5138;
    }
    ctx->pc = 0x1A5130u;
    {
        const bool branch_taken_0x1a5130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5130u;
        // 0x1a5134: 0xc7a000d8  lwc1        $f0, 0xD8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5130) {
            ctx->pc = 0x1A514Cu;
            goto label_1a514c;
        }
    }
    ctx->pc = 0x1A5138u;
label_1a5138:
    // 0x1a5138: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1a5138u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1a513c:
    // 0x1a513c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a513cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5140:
    // 0x1a5140: 0x0  nop
    ctx->pc = 0x1a5140u;
    // NOP
label_1a5144:
    // 0x1a5144: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1a5148:
    if (ctx->pc == 0x1A5148u) {
        ctx->pc = 0x1A5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5144u;
        // 0x1a5148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A514Cu;
        goto label_1a514c;
    }
    ctx->pc = 0x1A5144u;
    {
        const bool branch_taken_0x1a5144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5144) {
            ctx->pc = 0x1A5148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5144u;
            // 0x1a5148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A514Cu;
            goto label_1a514c;
        }
    }
    ctx->pc = 0x1A514Cu;
label_1a514c:
    // 0x1a514c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a5150:
    if (ctx->pc == 0x1A5150u) {
        ctx->pc = 0x1A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A514Cu;
        // 0x1a5150: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5154u;
        goto label_1a5154;
    }
    ctx->pc = 0x1A514Cu;
    {
        const bool branch_taken_0x1a514c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A514Cu;
        // 0x1a5150: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a514c) {
            ctx->pc = 0x1A516Cu;
            goto label_1a516c;
        }
    }
    ctx->pc = 0x1A5154u;
label_1a5154:
    // 0x1a5154: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a5154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1a5158:
    // 0x1a5158: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1a5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1a515c:
    // 0x1a515c: 0xc0f7218  jal         func_3DC860
label_1a5160:
    if (ctx->pc == 0x1A5160u) {
        ctx->pc = 0x1A5160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A515Cu;
        // 0x1a5160: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5164u;
        goto label_1a5164;
    }
    ctx->pc = 0x1A515Cu;
    SET_GPR_U32(ctx, 31, 0x1A5164u);
    ctx->pc = 0x1A5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A515Cu;
    // 0x1a5160: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1A515Cu, 0x1A5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5164u;
label_1a5164:
    // 0x1a5164: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a5168:
    if (ctx->pc == 0x1A5168u) {
        ctx->pc = 0x1A516Cu;
        goto label_1a516c;
    }
    ctx->pc = 0x1A5164u;
    {
        const bool branch_taken_0x1a5164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5164) {
            ctx->pc = 0x1A51D4u;
            goto label_1a51d4;
        }
    }
    ctx->pc = 0x1A516Cu;
label_1a516c:
    // 0x1a516c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1a516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1a5170:
    // 0x1a5170: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a5170u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5174:
    // 0x1a5174: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1a5174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a5178:
    // 0x1a5178: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1a5178u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a517c:
    // 0x1a517c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1a517cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a5180:
    // 0x1a5180: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1a5180u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1a5184:
    // 0x1a5184: 0x4a0003bf  vwaitq
    ctx->pc = 0x1a5184u;
    // VWAITQ (Q already resolved in this runtime)
label_1a5188:
    // 0x1a5188: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1a5188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a518c:
    // 0x1a518c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1a518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a5190:
    // 0x1a5190: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1a5194:
    // 0x1a5194: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a5194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a5198:
    // 0x1a5198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a519c:
    // 0x1a519c: 0x0  nop
    ctx->pc = 0x1a519cu;
    // NOP
label_1a51a0:
    // 0x1a51a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a51a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1a51a4:
    // 0x1a51a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a51a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a51a8:
    // 0x1a51a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1a51a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1a51ac:
    // 0x1a51ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1a51acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a51b0:
    // 0x1a51b0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1a51b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a51b4:
    // 0x1a51b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1a51b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a51b8:
    // 0x1a51b8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a51b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a51bc:
    // 0x1a51bc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a51bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a51c0:
    // 0x1a51c0: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1a51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a51c4:
    // 0x1a51c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1a51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1a51c8:
    // 0x1a51c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a51c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a51cc:
    // 0x1a51cc: 0xc0f7218  jal         func_3DC860
label_1a51d0:
    if (ctx->pc == 0x1A51D0u) {
        ctx->pc = 0x1A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51CCu;
        // 0x1a51d0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51D4u;
        goto label_1a51d4;
    }
    ctx->pc = 0x1A51CCu;
    SET_GPR_U32(ctx, 31, 0x1A51D4u);
    ctx->pc = 0x1A51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51CCu;
    // 0x1a51d0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x1A51CCu, 0x1A51D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51D4u;
label_1a51d4:
    // 0x1a51d4: 0xc061a12  jal         func_186848
label_1a51d8:
    if (ctx->pc == 0x1A51D8u) {
        ctx->pc = 0x1A51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51D4u;
        // 0x1a51d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51DCu;
        goto label_1a51dc;
    }
    ctx->pc = 0x1A51D4u;
    SET_GPR_U32(ctx, 31, 0x1A51DCu);
    ctx->pc = 0x1A51D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A51D4u;
    // 0x1a51d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A51D4u, 0x1A51DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A51DCu;
label_1a51dc:
    // 0x1a51dc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a51e0:
    // 0x1a51e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a51e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a51e4:
    // 0x1a51e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a51e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a51e8:
    // 0x1a51e8: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1a51e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1a51ec:
    // 0x1a51ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a51f0:
    // 0x1a51f0: 0x40f809  jalr        $v0
label_1a51f4:
    if (ctx->pc == 0x1A51F4u) {
        ctx->pc = 0x1A51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51F0u;
        // 0x1a51f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51F8u;
        goto label_1a51f8;
    }
    ctx->pc = 0x1A51F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A51F8u);
        ctx->pc = 0x1A51F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51F0u;
        // 0x1a51f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51F0u, 0x1A51F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A51F8u;
label_1a51f8:
    // 0x1a51f8: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1a51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_1a51fc:
    // 0x1a51fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a51fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5200:
    // 0x1a5200: 0xc061a1e  jal         func_186878
label_1a5204:
    if (ctx->pc == 0x1A5204u) {
        ctx->pc = 0x1A5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5200u;
        // 0x1a5204: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5208u;
        goto label_1a5208;
    }
    ctx->pc = 0x1A5200u;
    SET_GPR_U32(ctx, 31, 0x1A5208u);
    ctx->pc = 0x1A5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5200u;
    // 0x1a5204: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5200u, 0x1A5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5208u;
label_1a5208:
    // 0x1a5208: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x1a5208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
label_1a520c:
    // 0x1a520c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1a520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1a5210:
    // 0x1a5210: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a5210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a5214:
    // 0x1a5214: 0x60f809  jalr        $v1
label_1a5218:
    if (ctx->pc == 0x1A5218u) {
        ctx->pc = 0x1A5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5214u;
        // 0x1a5218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A521Cu;
        goto label_1a521c;
    }
    ctx->pc = 0x1A5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A521Cu);
        ctx->pc = 0x1A5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5214u;
        // 0x1a5218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5214u, 0x1A521Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A521Cu;
label_1a521c:
    // 0x1a521c: 0x26220f90  addiu       $v0, $s1, 0xF90
    ctx->pc = 0x1a521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
label_1a5220:
    // 0x1a5220: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x1a5220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1a5224:
    // 0x1a5224: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x1a5224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_1a5228:
    // 0x1a5228: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x1a5228u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1a522c:
    // 0x1a522c: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x1a522cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_1a5230:
    // 0x1a5230: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1a5230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1a5234:
    // 0x1a5234: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1a5234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a5238:
    // 0x1a5238: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1a5238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_1a523c:
    // 0x1a523c: 0x3e00008  jr          $ra
label_1a5240:
    if (ctx->pc == 0x1A5240u) {
        ctx->pc = 0x1A5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A523Cu;
        // 0x1a5240: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5244u;
        goto label_1a5244;
    }
    ctx->pc = 0x1A523Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A523Cu;
        // 0x1a5240: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A523Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5244u;
label_1a5244:
    // 0x1a5244: 0x0  nop
    ctx->pc = 0x1a5244u;
    // NOP
    ctx->pc = 0x1a5248u;
}
