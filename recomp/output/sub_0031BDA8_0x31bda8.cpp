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

// Function: sub_0031BDA8
// Address: 0x31bda8 - 0x31beb8
void sub_0031BDA8_0x31bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BDA8_0x31bda8");
#endif

    switch (ctx->pc) {
        case 0x31bdccu: goto label_31bdcc;
        case 0x31bdd8u: goto label_31bdd8;
        case 0x31bde0u: goto label_31bde0;
        case 0x31be3cu: goto label_31be3c;
        case 0x31be84u: goto label_31be84;
        case 0x31be90u: goto label_31be90;
        case 0x31bea0u: goto label_31bea0;
        default: break;
    }

    ctx->pc = 0x31bda8u;

    // 0x31bda8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31bda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31bdac: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x31bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x31bdb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31bdb4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x31bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x31bdb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31bdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bdbc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x31bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31bdc0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31bdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31bdc4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x31BDC4u;
    SET_GPR_U32(ctx, 31, 0x31BDCCu);
    ctx->pc = 0x31BDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDC4u;
    // 0x31bdc8: 0x3c110047  lui         $s1, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x31BDC4u, 0x31BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDCCu;
label_31bdcc:
    // 0x31bdcc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x31BDCCu;
    {
        const bool branch_taken_0x31bdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDCCu;
        // 0x31bdd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bdcc) {
            ctx->pc = 0x31BE88u;
            goto label_31be88;
        }
    }
    ctx->pc = 0x31BDD4u;
    // 0x31bdd4: 0x0  nop
    ctx->pc = 0x31bdd4u;
    // NOP
label_31bdd8:
    // 0x31bdd8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x31BDD8u;
    SET_GPR_U32(ctx, 31, 0x31BDE0u);
    ctx->pc = 0x31BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BDD8u;
    // 0x31bddc: 0x26253c10  addiu       $a1, $s1, 0x3C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 15376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x31BDD8u, 0x31BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BDE0u;
label_31bde0:
    // 0x31bde0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31bde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31bde4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x31BDE4u;
    {
        const bool branch_taken_0x31bde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BDE4u;
        // 0x31bde8: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bde4) {
            ctx->pc = 0x31BE84u;
            goto label_31be84;
        }
    }
    ctx->pc = 0x31BDECu;
    // 0x31bdec: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x31bdecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x31bdf0: 0x27a8006c  addiu       $t0, $sp, 0x6C
    ctx->pc = 0x31bdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x31bdf4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x31bdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31bdf8: 0x27a2005c  addiu       $v0, $sp, 0x5C
    ctx->pc = 0x31bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x31bdfc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x31bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31be00: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x31be00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x31be04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be08: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x31be08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x31be0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31be0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31be10: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x31be10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x31be14: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x31be14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x31be18: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x31be18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x31be1c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x31be1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x31be20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31be20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31be24: 0x27a8004c  addiu       $t0, $sp, 0x4C
    ctx->pc = 0x31be24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x31be28: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x31be28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x31be2c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x31be2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31be30: 0x27aa0054  addiu       $t2, $sp, 0x54
    ctx->pc = 0x31be30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x31be34: 0xc09e024  jal         func_278090
    ctx->pc = 0x31BE34u;
    SET_GPR_U32(ctx, 31, 0x31BE3Cu);
    ctx->pc = 0x31BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE34u;
    // 0x31be38: 0x27ab0058  addiu       $t3, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278090u, 0x31BE34u, 0x31BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE3Cu;
label_31be3c:
    // 0x31be3c: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x31be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31be40: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x31be40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31be44: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x31be44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31be48: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x31be48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31be4c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x31be4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31be50: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x31be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x31be54: 0xc7ae0048  lwc1        $f14, 0x48($sp)
    ctx->pc = 0x31be54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x31be58: 0xc7af004c  lwc1        $f15, 0x4C($sp)
    ctx->pc = 0x31be58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x31be5c: 0xc7b00050  lwc1        $f16, 0x50($sp)
    ctx->pc = 0x31be5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x31be60: 0xc7b10054  lwc1        $f17, 0x54($sp)
    ctx->pc = 0x31be60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x31be64: 0xc7b20058  lwc1        $f18, 0x58($sp)
    ctx->pc = 0x31be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x31be68: 0xc7b3005c  lwc1        $f19, 0x5C($sp)
    ctx->pc = 0x31be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x31be6c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x31be6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31be70: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x31be70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31be74: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x31be74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31be78: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31be78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31be7c: 0xc0cfc46  jal         func_33F118
    ctx->pc = 0x31BE7Cu;
    SET_GPR_U32(ctx, 31, 0x31BE84u);
    ctx->pc = 0x31BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE7Cu;
    // 0x31be80: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F118u, 0x31BE7Cu, 0x31BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE84u;
label_31be84:
    // 0x31be84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31be88:
    // 0x31be88: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x31BE88u;
    SET_GPR_U32(ctx, 31, 0x31BE90u);
    ctx->pc = 0x31BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE88u;
    // 0x31be8c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x31BE88u, 0x31BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE90u;
label_31be90:
    // 0x31be90: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x31BE90u;
    {
        const bool branch_taken_0x31be90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE90u;
        // 0x31be94: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be90) {
            ctx->pc = 0x31BDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bdd8;
        }
    }
    ctx->pc = 0x31BE98u;
    // 0x31be98: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x31BE98u;
    SET_GPR_U32(ctx, 31, 0x31BEA0u);
    ctx->pc = 0x31BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BE98u;
    // 0x31be9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x31BE98u, 0x31BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEA0u;
label_31bea0:
    // 0x31bea0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x31bea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31bea4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x31bea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31bea8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x31bea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31beac: 0x3e00008  jr          $ra
    ctx->pc = 0x31BEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BEACu;
        // 0x31beb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BEB4u;
    // 0x31beb4: 0x0  nop
    ctx->pc = 0x31beb4u;
    // NOP
    ctx->pc = 0x31beb8u;
}
