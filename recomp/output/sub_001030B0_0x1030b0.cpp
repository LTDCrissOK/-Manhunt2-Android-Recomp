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

// Function: sub_001030B0
// Address: 0x1030b0 - 0x103250
void sub_001030B0_0x1030b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001030B0_0x1030b0");
#endif

    switch (ctx->pc) {
        case 0x103124u: goto label_103124;
        case 0x103138u: goto label_103138;
        case 0x103140u: goto label_103140;
        case 0x103174u: goto label_103174;
        case 0x103190u: goto label_103190;
        case 0x1031ccu: goto label_1031cc;
        case 0x1031f8u: goto label_1031f8;
        case 0x103208u: goto label_103208;
        default: break;
    }

    ctx->pc = 0x1030b0u;

    // 0x1030b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1030b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1030b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1030b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1030b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1030b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1030bc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1030bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1030c0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1030c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030c4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1030c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1030c8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1030c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1030cc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1030ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1030d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1030d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1030d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1030d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1030d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1030d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1030dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1030dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1030e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1030e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1030e4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1030e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1030e8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1030e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1030ec: 0xc45489d0  lwc1        $f20, -0x7630($v0)
    ctx->pc = 0x1030ecu;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1030f0: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x1030f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1030f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1030F4u;
    {
        const bool branch_taken_0x1030f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1030F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030F4u;
        // 0x1030f8: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030f4) {
            ctx->pc = 0x103104u;
            goto label_103104;
        }
    }
    ctx->pc = 0x1030FCu;
    // 0x1030fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1030FCu;
    {
        const bool branch_taken_0x1030fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1030FCu;
        // 0x103100: 0xc6a00030  lwc1        $f0, 0x30($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1030fc) {
            ctx->pc = 0x10310Cu;
            goto label_10310c;
        }
    }
    ctx->pc = 0x103104u;
label_103104:
    // 0x103104: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x103104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x103108: 0xc440a568  lwc1        $f0, -0x5A98($v0)
    ctx->pc = 0x103108u;
    { uint32_t bits = FAST_READ32(0x43A568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10310c:
    // 0x10310c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10310cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103110: 0x0  nop
    ctx->pc = 0x103110u;
    // NOP
    // 0x103114: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x103114u;
    {
        const bool branch_taken_0x103114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103114u;
        // 0x103118: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103114) {
            ctx->pc = 0x103124u;
            goto label_103124;
        }
    }
    ctx->pc = 0x10311Cu;
    // 0x10311c: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x10311Cu;
    SET_GPR_U32(ctx, 31, 0x103124u);
    ctx->pc = 0x103120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10311Cu;
    // 0x103120: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x10311Cu, 0x103124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103124u;
label_103124:
    // 0x103124: 0x92b60022  lbu         $s6, 0x22($s5)
    ctx->pc = 0x103124u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
    // 0x103128: 0x12c00030  beqz        $s6, . + 4 + (0x30 << 2)
    ctx->pc = 0x103128u;
    {
        const bool branch_taken_0x103128 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x10312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103128u;
        // 0x10312c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103128) {
            ctx->pc = 0x1031ECu;
            goto label_1031ec;
        }
    }
    ctx->pc = 0x103130u;
    // 0x103130: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x103130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103134: 0x0  nop
    ctx->pc = 0x103134u;
    // NOP
label_103138:
    // 0x103138: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x103138u;
    SET_GPR_U32(ctx, 31, 0x103140u);
    ctx->pc = 0x10313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103138u;
    // 0x10313c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x103138u, 0x103140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103140u;
label_103140:
    // 0x103140: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x103140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103144: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x103144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x103148: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103148u;
    {
        const bool branch_taken_0x103148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103148u;
        // 0x10314c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103148) {
            ctx->pc = 0x103158u;
            goto label_103158;
        }
    }
    ctx->pc = 0x103150u;
    // 0x103150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x103150u;
    {
        const bool branch_taken_0x103150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103150u;
        // 0x103154: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103150) {
            ctx->pc = 0x10315Cu;
            goto label_10315c;
        }
    }
    ctx->pc = 0x103158u;
label_103158:
    // 0x103158: 0xc440a568  lwc1        $f0, -0x5A98($v0)
    ctx->pc = 0x103158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10315c:
    // 0x10315c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10315cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x103160: 0x0  nop
    ctx->pc = 0x103160u;
    // NOP
    // 0x103164: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x103164u;
    {
        const bool branch_taken_0x103164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x103168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103164u;
        // 0x103168: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103164) {
            ctx->pc = 0x103174u;
            goto label_103174;
        }
    }
    ctx->pc = 0x10316Cu;
    // 0x10316c: 0xc0f66bc  jal         func_3D9AF0
    ctx->pc = 0x10316Cu;
    SET_GPR_U32(ctx, 31, 0x103174u);
    ctx->pc = 0x103170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10316Cu;
    // 0x103170: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AF0u, 0x10316Cu, 0x103174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103174u;
label_103174:
    // 0x103174: 0x26120018  addiu       $s2, $s0, 0x18
    ctx->pc = 0x103174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x103178: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x103178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10317c: 0x82510004  lb          $s1, 0x4($s2)
    ctx->pc = 0x10317cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x103180: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x103180u;
    {
        const bool branch_taken_0x103180 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x103184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103180u;
        // 0x103184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103180) {
            ctx->pc = 0x1031DCu;
            goto label_1031dc;
        }
    }
    ctx->pc = 0x103188u;
    // 0x103188: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x103188u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x10318c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_103190:
    // 0x103190: 0x8e8495a8  lw          $a0, -0x6A58($s4)
    ctx->pc = 0x103190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940072)));
    // 0x103194: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x103194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x103198: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x103198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10319c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10319cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1031a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1031a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1031a4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1031a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1031a8: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1031A8u;
    {
        const bool branch_taken_0x1031a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1031a8) {
            ctx->pc = 0x1031ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1031A8u;
            // 0x1031ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1031D0u;
            goto label_1031d0;
        }
    }
    ctx->pc = 0x1031B0u;
    // 0x1031b0: 0x8ca300b8  lw          $v1, 0xB8($a1)
    ctx->pc = 0x1031b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1031b4: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x1031b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1031b8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1031b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1031bc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1031BCu;
    {
        const bool branch_taken_0x1031bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1031bc) {
            ctx->pc = 0x1031C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1031BCu;
            // 0x1031c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1031D0u;
            goto label_1031d0;
        }
    }
    ctx->pc = 0x1031C4u;
    // 0x1031c4: 0xc0f675a  jal         func_3D9D68
    ctx->pc = 0x1031C4u;
    SET_GPR_U32(ctx, 31, 0x1031CCu);
    ctx->pc = 0x1031C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031C4u;
    // 0x1031c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9D68u, 0x1031C4u, 0x1031CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031CCu;
label_1031cc:
    // 0x1031cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1031ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1031d0:
    // 0x1031d0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1031d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1031d4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1031D4u;
    {
        const bool branch_taken_0x1031d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1031d4) {
            ctx->pc = 0x1031D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1031D4u;
            // 0x1031d8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103190;
        }
    }
    ctx->pc = 0x1031DCu;
label_1031dc:
    // 0x1031dc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1031dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031e0: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x1031e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1031e4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1031E4u;
    {
        const bool branch_taken_0x1031e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1031E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1031E4u;
        // 0x1031e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1031e4) {
            ctx->pc = 0x103138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103138;
        }
    }
    ctx->pc = 0x1031ECu;
label_1031ec:
    // 0x1031ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1031ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031f0: 0xc0f6770  jal         func_3D9DC0
    ctx->pc = 0x1031F0u;
    SET_GPR_U32(ctx, 31, 0x1031F8u);
    ctx->pc = 0x1031F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1031F0u;
    // 0x1031f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC0u, 0x1031F0u, 0x1031F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1031F8u;
label_1031f8:
    // 0x1031f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1031F8u;
    {
        const bool branch_taken_0x1031f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1031f8) {
            ctx->pc = 0x1031FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1031F8u;
            // 0x1031fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103214u;
            goto label_103214;
        }
    }
    ctx->pc = 0x103200u;
    // 0x103200: 0xc0f6772  jal         func_3D9DC8
    ctx->pc = 0x103200u;
    SET_GPR_U32(ctx, 31, 0x103208u);
    ctx->pc = 0x103204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103200u;
    // 0x103204: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC8u, 0x103200u, 0x103208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103208u;
label_103208:
    // 0x103208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x103208u;
    {
        const bool branch_taken_0x103208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103208u;
        // 0x10320c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103208) {
            ctx->pc = 0x103218u;
            goto label_103218;
        }
    }
    ctx->pc = 0x103210u;
    // 0x103210: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x103210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103214:
    // 0x103214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x103214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103218:
    // 0x103218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10321c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10321cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103224: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103224u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x103228: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x103228u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10322c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10322cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103230: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x103230u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103234: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x103234u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x103238: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x103238u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10323c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x10323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x103240: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x103240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x103244: 0x3e00008  jr          $ra
    ctx->pc = 0x103244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103244u;
        // 0x103248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10324Cu;
    // 0x10324c: 0x0  nop
    ctx->pc = 0x10324cu;
    // NOP
    ctx->pc = 0x103250u;
}
