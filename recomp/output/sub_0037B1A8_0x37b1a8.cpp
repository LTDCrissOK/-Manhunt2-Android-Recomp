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

// Function: sub_0037B1A8
// Address: 0x37b1a8 - 0x37b278
void sub_0037B1A8_0x37b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B1A8_0x37b1a8");
#endif

    switch (ctx->pc) {
        case 0x37b1fcu: goto label_37b1fc;
        case 0x37b240u: goto label_37b240;
        default: break;
    }

    ctx->pc = 0x37b1a8u;

    // 0x37b1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37b1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37b1ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b1b0: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37B1B0u;
    {
        const bool branch_taken_0x37b1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1B0u;
        // 0x37b1b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1b0) {
            ctx->pc = 0x37B200u;
            goto label_37b200;
        }
    }
    ctx->pc = 0x37B1B8u;
    // 0x37b1b8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x37b1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37b1bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B1BCu;
    {
        const bool branch_taken_0x37b1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1BCu;
        // 0x37b1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1bc) {
            ctx->pc = 0x37B1D4u;
            goto label_37b1d4;
        }
    }
    ctx->pc = 0x37B1C4u;
    // 0x37b1c4: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37B1C4u;
    {
        const bool branch_taken_0x37b1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x37b1c4) {
            ctx->pc = 0x37B1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B1C4u;
            // 0x37b1c8: 0xe48f0030  swc1        $f15, 0x30($a0) (Delay Slot)
            { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B1F0u;
            goto label_37b1f0;
        }
    }
    ctx->pc = 0x37B1CCu;
    // 0x37b1cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37B1CCu;
    {
        const bool branch_taken_0x37b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b1cc) {
            ctx->pc = 0x37B238u;
            goto label_37b238;
        }
    }
    ctx->pc = 0x37B1D4u;
label_37b1d4:
    // 0x37b1d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b1d8: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x37B1D8u;
    {
        const bool branch_taken_0x37b1d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x37B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1D8u;
        // 0x37b1dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1d8) {
            ctx->pc = 0x37B214u;
            goto label_37b214;
        }
    }
    ctx->pc = 0x37B1E0u;
    // 0x37b1e0: 0x50a20011  beql        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37B1E0u;
    {
        const bool branch_taken_0x37b1e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x37b1e0) {
            ctx->pc = 0x37B1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B1E0u;
            // 0x37b1e4: 0xe48f003c  swc1        $f15, 0x3C($a0) (Delay Slot)
            { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B228u;
            goto label_37b228;
        }
    }
    ctx->pc = 0x37B1E8u;
    // 0x37b1e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37B1E8u;
    {
        const bool branch_taken_0x37b1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b1e8) {
            ctx->pc = 0x37B238u;
            goto label_37b238;
        }
    }
    ctx->pc = 0x37B1F0u;
label_37b1f0:
    // 0x37b1f0: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x37b1f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x37b1f4: 0xe48d0010  swc1        $f13, 0x10($a0)
    ctx->pc = 0x37b1f4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x37b1f8: 0x10000011  b           . + 4 + (0x11 << 2)
label_37b1fc:
    if (ctx->pc == 0x37B1FCu) {
        ctx->pc = 0x37B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1F8u;
        // 0x37b1fc: 0xe48e0020  swc1        $f14, 0x20($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37B200u;
        goto label_37b200;
    }
    ctx->pc = 0x37B1F8u;
    {
        const bool branch_taken_0x37b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B1F8u;
        // 0x37b1fc: 0xe48e0020  swc1        $f14, 0x20($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b1f8) {
            ctx->pc = 0x37B240u;
            goto label_37b240;
        }
    }
    ctx->pc = 0x37B200u;
label_37b200:
    // 0x37b200: 0xe48f0034  swc1        $f15, 0x34($a0)
    ctx->pc = 0x37b200u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x37b204: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x37b204u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x37b208: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x37b208u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x37b20c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37B20Cu;
    {
        const bool branch_taken_0x37b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B20Cu;
        // 0x37b210: 0xe48e0024  swc1        $f14, 0x24($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b20c) {
            ctx->pc = 0x37B240u;
            goto label_37b240;
        }
    }
    ctx->pc = 0x37B214u;
label_37b214:
    // 0x37b214: 0xe48f0038  swc1        $f15, 0x38($a0)
    ctx->pc = 0x37b214u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x37b218: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x37b218u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x37b21c: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x37b21cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x37b220: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37B220u;
    {
        const bool branch_taken_0x37b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B220u;
        // 0x37b224: 0xe48e0028  swc1        $f14, 0x28($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b220) {
            ctx->pc = 0x37B240u;
            goto label_37b240;
        }
    }
    ctx->pc = 0x37B228u;
label_37b228:
    // 0x37b228: 0xe48c000c  swc1        $f12, 0xC($a0)
    ctx->pc = 0x37b228u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x37b22c: 0xe48d001c  swc1        $f13, 0x1C($a0)
    ctx->pc = 0x37b22cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x37b230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37B230u;
    {
        const bool branch_taken_0x37b230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B230u;
        // 0x37b234: 0xe48e002c  swc1        $f14, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b230) {
            ctx->pc = 0x37B240u;
            goto label_37b240;
        }
    }
    ctx->pc = 0x37B238u;
label_37b238:
    // 0x37b238: 0xc0dec24  jal         func_37B090
    ctx->pc = 0x37B238u;
    SET_GPR_U32(ctx, 31, 0x37B240u);
    ctx->pc = 0x37B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B238u;
    // 0x37b23c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B090u, 0x37B238u, 0x37B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B240u;
label_37b240:
    // 0x37b240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b244: 0x3e00008  jr          $ra
    ctx->pc = 0x37B244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B244u;
        // 0x37b248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B24Cu;
    // 0x37b24c: 0x0  nop
    ctx->pc = 0x37b24cu;
    // NOP
    // 0x37b250: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37b254: 0x0  nop
    ctx->pc = 0x37b254u;
    // NOP
    // 0x37b258: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37b258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37b25c: 0x0  nop
    ctx->pc = 0x37b25cu;
    // NOP
    // 0x37b260: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37b264: 0x0  nop
    ctx->pc = 0x37b264u;
    // NOP
    // 0x37b268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37b268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37b26c: 0x0  nop
    ctx->pc = 0x37b26cu;
    // NOP
    // 0x37b270: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x37b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37b274: 0x0  nop
    ctx->pc = 0x37b274u;
    // NOP
    ctx->pc = 0x37b278u;
}
