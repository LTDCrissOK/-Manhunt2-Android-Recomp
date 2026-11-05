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

// Function: sub_0019DDD0
// Address: 0x19ddd0 - 0x19df40
void sub_0019DDD0_0x19ddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DDD0_0x19ddd0");
#endif

    switch (ctx->pc) {
        case 0x19ddd0u: goto label_19ddd0;
        case 0x19ddd4u: goto label_19ddd4;
        case 0x19ddd8u: goto label_19ddd8;
        case 0x19dddcu: goto label_19dddc;
        case 0x19dde0u: goto label_19dde0;
        case 0x19dde4u: goto label_19dde4;
        case 0x19dde8u: goto label_19dde8;
        case 0x19ddecu: goto label_19ddec;
        case 0x19ddf0u: goto label_19ddf0;
        case 0x19ddf4u: goto label_19ddf4;
        case 0x19ddf8u: goto label_19ddf8;
        case 0x19ddfcu: goto label_19ddfc;
        case 0x19de00u: goto label_19de00;
        case 0x19de04u: goto label_19de04;
        case 0x19de08u: goto label_19de08;
        case 0x19de0cu: goto label_19de0c;
        case 0x19de10u: goto label_19de10;
        case 0x19de14u: goto label_19de14;
        case 0x19de18u: goto label_19de18;
        case 0x19de1cu: goto label_19de1c;
        case 0x19de20u: goto label_19de20;
        case 0x19de24u: goto label_19de24;
        case 0x19de28u: goto label_19de28;
        case 0x19de2cu: goto label_19de2c;
        case 0x19de30u: goto label_19de30;
        case 0x19de34u: goto label_19de34;
        case 0x19de38u: goto label_19de38;
        case 0x19de3cu: goto label_19de3c;
        case 0x19de40u: goto label_19de40;
        case 0x19de44u: goto label_19de44;
        case 0x19de48u: goto label_19de48;
        case 0x19de4cu: goto label_19de4c;
        case 0x19de50u: goto label_19de50;
        case 0x19de54u: goto label_19de54;
        case 0x19de58u: goto label_19de58;
        case 0x19de5cu: goto label_19de5c;
        case 0x19de60u: goto label_19de60;
        case 0x19de64u: goto label_19de64;
        case 0x19de68u: goto label_19de68;
        case 0x19de6cu: goto label_19de6c;
        case 0x19de70u: goto label_19de70;
        case 0x19de74u: goto label_19de74;
        case 0x19de78u: goto label_19de78;
        case 0x19de7cu: goto label_19de7c;
        case 0x19de80u: goto label_19de80;
        case 0x19de84u: goto label_19de84;
        case 0x19de88u: goto label_19de88;
        case 0x19de8cu: goto label_19de8c;
        case 0x19de90u: goto label_19de90;
        case 0x19de94u: goto label_19de94;
        case 0x19de98u: goto label_19de98;
        case 0x19de9cu: goto label_19de9c;
        case 0x19dea0u: goto label_19dea0;
        case 0x19dea4u: goto label_19dea4;
        case 0x19dea8u: goto label_19dea8;
        case 0x19deacu: goto label_19deac;
        case 0x19deb0u: goto label_19deb0;
        case 0x19deb4u: goto label_19deb4;
        case 0x19deb8u: goto label_19deb8;
        case 0x19debcu: goto label_19debc;
        case 0x19dec0u: goto label_19dec0;
        case 0x19dec4u: goto label_19dec4;
        case 0x19dec8u: goto label_19dec8;
        case 0x19deccu: goto label_19decc;
        case 0x19ded0u: goto label_19ded0;
        case 0x19ded4u: goto label_19ded4;
        case 0x19ded8u: goto label_19ded8;
        case 0x19dedcu: goto label_19dedc;
        case 0x19dee0u: goto label_19dee0;
        case 0x19dee4u: goto label_19dee4;
        case 0x19dee8u: goto label_19dee8;
        case 0x19deecu: goto label_19deec;
        case 0x19def0u: goto label_19def0;
        case 0x19def4u: goto label_19def4;
        case 0x19def8u: goto label_19def8;
        case 0x19defcu: goto label_19defc;
        case 0x19df00u: goto label_19df00;
        case 0x19df04u: goto label_19df04;
        case 0x19df08u: goto label_19df08;
        case 0x19df0cu: goto label_19df0c;
        case 0x19df10u: goto label_19df10;
        case 0x19df14u: goto label_19df14;
        case 0x19df18u: goto label_19df18;
        case 0x19df1cu: goto label_19df1c;
        case 0x19df20u: goto label_19df20;
        case 0x19df24u: goto label_19df24;
        case 0x19df28u: goto label_19df28;
        case 0x19df2cu: goto label_19df2c;
        case 0x19df30u: goto label_19df30;
        case 0x19df34u: goto label_19df34;
        case 0x19df38u: goto label_19df38;
        case 0x19df3cu: goto label_19df3c;
        default: break;
    }

    ctx->pc = 0x19ddd0u;

label_19ddd0:
    // 0x19ddd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19ddd4:
    // 0x19ddd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x19ddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_19ddd8:
    // 0x19ddd8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x19ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_19dddc:
    // 0x19dddc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19dddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dde0:
    // 0x19dde0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x19dde0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_19dde4:
    // 0x19dde4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19dde4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19dde8:
    // 0x19dde8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x19dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19ddec:
    // 0x19ddec: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19ddecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_19ddf0:
    // 0x19ddf0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ddf4:
    // 0x19ddf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ddf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19ddf8:
    // 0x19ddf8: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
label_19ddfc:
    if (ctx->pc == 0x19DDFCu) {
        ctx->pc = 0x19DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDF8u;
        // 0x19ddfc: 0xae200070  sw          $zero, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE00u;
        goto label_19de00;
    }
    ctx->pc = 0x19DDF8u;
    {
        const bool branch_taken_0x19ddf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DDF8u;
        // 0x19ddfc: 0xae200070  sw          $zero, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ddf8) {
            ctx->pc = 0x19DE50u;
            goto label_19de50;
        }
    }
    ctx->pc = 0x19DE00u;
label_19de00:
    // 0x19de00: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x19de00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_19de04:
    // 0x19de04: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x19de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19de08:
    // 0x19de08: 0xc442c6a4  lwc1        $f2, -0x395C($v0)
    ctx->pc = 0x19de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19de0c:
    // 0x19de0c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x19de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_19de10:
    // 0x19de10: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x19de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19de14:
    // 0x19de14: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19de14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19de18:
    // 0x19de18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19de18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19de1c:
    // 0x19de1c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x19de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19de20:
    // 0x19de20: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x19de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19de24:
    // 0x19de24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19de24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19de28:
    // 0x19de28: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19de28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_19de2c:
    // 0x19de2c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x19de2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19de30:
    // 0x19de30: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19de30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_19de34:
    // 0x19de34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x19de34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19de38:
    // 0x19de38: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x19de38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_19de3c:
    // 0x19de3c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x19de3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19de40:
    // 0x19de40: 0xc0f7218  jal         func_3DC860
label_19de44:
    if (ctx->pc == 0x19DE44u) {
        ctx->pc = 0x19DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE40u;
        // 0x19de44: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE48u;
        goto label_19de48;
    }
    ctx->pc = 0x19DE40u;
    SET_GPR_U32(ctx, 31, 0x19DE48u);
    ctx->pc = 0x19DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE40u;
    // 0x19de44: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC860u, 0x19DE40u, 0x19DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE48u;
label_19de48:
    // 0x19de48: 0x10000007  b           . + 4 + (0x7 << 2)
label_19de4c:
    if (ctx->pc == 0x19DE4Cu) {
        ctx->pc = 0x19DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE48u;
        // 0x19de4c: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE50u;
        goto label_19de50;
    }
    ctx->pc = 0x19DE48u;
    {
        const bool branch_taken_0x19de48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE48u;
        // 0x19de4c: 0x26300030  addiu       $s0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de48) {
            ctx->pc = 0x19DE68u;
            goto label_19de68;
        }
    }
    ctx->pc = 0x19DE50u;
label_19de50:
    // 0x19de50: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x19de50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_19de54:
    // 0x19de54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19de54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19de58:
    // 0x19de58: 0xc06fb38  jal         func_1BECE0
label_19de5c:
    if (ctx->pc == 0x19DE5Cu) {
        ctx->pc = 0x19DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE58u;
        // 0x19de5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE60u;
        goto label_19de60;
    }
    ctx->pc = 0x19DE58u;
    SET_GPR_U32(ctx, 31, 0x19DE60u);
    ctx->pc = 0x19DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE58u;
    // 0x19de5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x19DE58u, 0x19DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE60u;
label_19de60:
    // 0x19de60: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x19de60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19de64:
    // 0x19de64: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x19de64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_19de68:
    // 0x19de68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19de68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19de6c:
    // 0x19de6c: 0xc06fb38  jal         func_1BECE0
label_19de70:
    if (ctx->pc == 0x19DE70u) {
        ctx->pc = 0x19DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE6Cu;
        // 0x19de70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE74u;
        goto label_19de74;
    }
    ctx->pc = 0x19DE6Cu;
    SET_GPR_U32(ctx, 31, 0x19DE74u);
    ctx->pc = 0x19DE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE6Cu;
    // 0x19de70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x19DE6Cu, 0x19DE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE74u;
label_19de74:
    // 0x19de74: 0xe634007c  swc1        $f20, 0x7C($s1)
    ctx->pc = 0x19de74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_19de78:
    // 0x19de78: 0xc061a16  jal         func_186858
label_19de7c:
    if (ctx->pc == 0x19DE7Cu) {
        ctx->pc = 0x19DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE78u;
        // 0x19de7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE80u;
        goto label_19de80;
    }
    ctx->pc = 0x19DE78u;
    SET_GPR_U32(ctx, 31, 0x19DE80u);
    ctx->pc = 0x19DE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE78u;
    // 0x19de7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19DE78u, 0x19DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE80u;
label_19de80:
    // 0x19de80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19de80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19de84:
    // 0x19de84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19de84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19de88:
    // 0x19de88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19de8c:
    // 0x19de8c: 0xc061a16  jal         func_186858
label_19de90:
    if (ctx->pc == 0x19DE90u) {
        ctx->pc = 0x19DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE8Cu;
        // 0x19de90: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DE94u;
        goto label_19de94;
    }
    ctx->pc = 0x19DE8Cu;
    SET_GPR_U32(ctx, 31, 0x19DE94u);
    ctx->pc = 0x19DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE8Cu;
    // 0x19de90: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19DE8Cu, 0x19DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DE94u;
label_19de94:
    // 0x19de94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19de94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19de98:
    // 0x19de98: 0xc06ee66  jal         func_1BB998
label_19de9c:
    if (ctx->pc == 0x19DE9Cu) {
        ctx->pc = 0x19DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE98u;
        // 0x19de9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEA0u;
        goto label_19dea0;
    }
    ctx->pc = 0x19DE98u;
    SET_GPR_U32(ctx, 31, 0x19DEA0u);
    ctx->pc = 0x19DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DE98u;
    // 0x19de9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x19DE98u, 0x19DEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEA0u;
label_19dea0:
    // 0x19dea0: 0xc061a12  jal         func_186848
label_19dea4:
    if (ctx->pc == 0x19DEA4u) {
        ctx->pc = 0x19DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEA0u;
        // 0x19dea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEA8u;
        goto label_19dea8;
    }
    ctx->pc = 0x19DEA0u;
    SET_GPR_U32(ctx, 31, 0x19DEA8u);
    ctx->pc = 0x19DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DEA0u;
    // 0x19dea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19DEA0u, 0x19DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DEA8u;
label_19dea8:
    // 0x19dea8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19deac:
    // 0x19deac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19deacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19deb0:
    // 0x19deb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19deb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19deb4:
    // 0x19deb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19deb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19deb8:
    // 0x19deb8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19debc:
    // 0x19debc: 0x40f809  jalr        $v0
label_19dec0:
    if (ctx->pc == 0x19DEC0u) {
        ctx->pc = 0x19DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEBCu;
        // 0x19dec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DEC4u;
        goto label_19dec4;
    }
    ctx->pc = 0x19DEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19DEC4u);
        ctx->pc = 0x19DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEBCu;
        // 0x19dec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DEBCu, 0x19DEC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19DEC4u;
label_19dec4:
    // 0x19dec4: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x19dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_19dec8:
    // 0x19dec8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19decc:
    // 0x19decc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19ded0:
    // 0x19ded0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ded4:
    if (ctx->pc == 0x19DED4u) {
        ctx->pc = 0x19DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DED0u;
        // 0x19ded4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DED8u;
        goto label_19ded8;
    }
    ctx->pc = 0x19DED0u;
    {
        const bool branch_taken_0x19ded0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DED0u;
        // 0x19ded4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ded0) {
            ctx->pc = 0x19DEECu;
            goto label_19deec;
        }
    }
    ctx->pc = 0x19DED8u;
label_19ded8:
    // 0x19ded8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19ded8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19dedc:
    // 0x19dedc: 0x0  nop
    ctx->pc = 0x19dedcu;
    // NOP
label_19dee0:
    // 0x19dee0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19dee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19dee4:
    // 0x19dee4: 0x10000007  b           . + 4 + (0x7 << 2)
label_19dee8:
    if (ctx->pc == 0x19DEE8u) {
        ctx->pc = 0x19DEECu;
        goto label_19deec;
    }
    ctx->pc = 0x19DEE4u;
    {
        const bool branch_taken_0x19dee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dee4) {
            ctx->pc = 0x19DF04u;
            goto label_19df04;
        }
    }
    ctx->pc = 0x19DEECu;
label_19deec:
    // 0x19deec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19deecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19def0:
    // 0x19def0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19def0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19def4:
    // 0x19def4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19def4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19def8:
    // 0x19def8: 0x0  nop
    ctx->pc = 0x19def8u;
    // NOP
label_19defc:
    // 0x19defc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19defcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19df00:
    // 0x19df00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19df00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19df04:
    // 0x19df04: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19df04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19df08:
    // 0x19df08: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19df08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19df0c:
    // 0x19df0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19df0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19df10:
    // 0x19df10: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x19df10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_19df14:
    // 0x19df14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19df14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19df18:
    // 0x19df18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19df18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19df1c:
    // 0x19df1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19df1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19df20:
    // 0x19df20: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x19df20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19df24:
    // 0x19df24: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x19df24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_19df28:
    // 0x19df28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x19df28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19df2c:
    // 0x19df2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19df2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19df30:
    // 0x19df30: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x19df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19df34:
    // 0x19df34: 0x3e00008  jr          $ra
label_19df38:
    if (ctx->pc == 0x19DF38u) {
        ctx->pc = 0x19DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF34u;
        // 0x19df38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF3Cu;
        goto label_19df3c;
    }
    ctx->pc = 0x19DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF34u;
        // 0x19df38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DF3Cu;
label_19df3c:
    // 0x19df3c: 0x0  nop
    ctx->pc = 0x19df3cu;
    // NOP
    ctx->pc = 0x19df40u;
}
