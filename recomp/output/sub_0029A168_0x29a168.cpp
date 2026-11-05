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

// Function: sub_0029A168
// Address: 0x29a168 - 0x29a240
void sub_0029A168_0x29a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A168_0x29a168");
#endif

    switch (ctx->pc) {
        case 0x29a18cu: goto label_29a18c;
        case 0x29a1b0u: goto label_29a1b0;
        case 0x29a1e8u: goto label_29a1e8;
        case 0x29a228u: goto label_29a228;
        default: break;
    }

    ctx->pc = 0x29a168u;

    // 0x29a168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a170: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x29a170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29a174: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29a178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29a17c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29a17cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x29a180: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x29a180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x29a184: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x29A184u;
    SET_GPR_U32(ctx, 31, 0x29A18Cu);
    ctx->pc = 0x29A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A184u;
    // 0x29a188: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x29A184u, 0x29A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A18Cu;
label_29a18c:
    // 0x29a18c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x29a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x29a190: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x29A190u;
    {
        const bool branch_taken_0x29a190 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A190u;
        // 0x29a194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a190) {
            ctx->pc = 0x29A1CCu;
            goto label_29a1cc;
        }
    }
    ctx->pc = 0x29A198u;
    // 0x29a198: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x29a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x29a19c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x29a19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1a0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x29a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a1a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x29a1a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1a8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x29a1ac: 0x0  nop
    ctx->pc = 0x29a1acu;
    // NOP
label_29a1b0:
    // 0x29a1b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a1b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x29a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x29a1b8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x29a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x29a1bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29a1bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29a1c0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x29a1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29a1c4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29A1C4u;
    {
        const bool branch_taken_0x29a1c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1C4u;
        // 0x29a1c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1c4) {
            ctx->pc = 0x29A1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a1b0;
        }
    }
    ctx->pc = 0x29A1CCu;
label_29a1cc:
    // 0x29a1cc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x29a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x29a1d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29a1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1d4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29A1D4u;
    {
        const bool branch_taken_0x29a1d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1D4u;
        // 0x29a1d8: 0xe6140018  swc1        $f20, 0x18($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1d4) {
            ctx->pc = 0x29A218u;
            goto label_29a218;
        }
    }
    ctx->pc = 0x29A1DCu;
    // 0x29a1dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29a1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29a1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1e4: 0x0  nop
    ctx->pc = 0x29a1e4u;
    // NOP
label_29a1e8:
    // 0x29a1e8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29a1ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29a1f0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x29a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29a1f4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29a1f8: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x29a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x29a1fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29a1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29a200: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x29a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x29a204: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x29a204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x29a208: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x29a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x29a20c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x29a20cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a210: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x29A210u;
    {
        const bool branch_taken_0x29a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A210u;
        // 0x29a214: 0x24e70078  addiu       $a3, $a3, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a210) {
            ctx->pc = 0x29A1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a1e8;
        }
    }
    ctx->pc = 0x29A218u;
label_29a218:
    // 0x29a218: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A218u;
    {
        const bool branch_taken_0x29a218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A218u;
        // 0x29a21c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a218) {
            ctx->pc = 0x29A22Cu;
            goto label_29a22c;
        }
    }
    ctx->pc = 0x29A220u;
    // 0x29a220: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x29A220u;
    SET_GPR_U32(ctx, 31, 0x29A228u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x29A220u, 0x29A228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A228u;
label_29a228:
    // 0x29a228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a22c:
    // 0x29a22c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29a22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29a230: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x29a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a234: 0x3e00008  jr          $ra
    ctx->pc = 0x29A234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A234u;
        // 0x29a238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A23Cu;
    // 0x29a23c: 0x0  nop
    ctx->pc = 0x29a23cu;
    // NOP
    ctx->pc = 0x29a240u;
}
