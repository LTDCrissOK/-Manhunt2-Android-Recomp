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

// Function: sub_001D9600
// Address: 0x1d9600 - 0x1d98a0
void sub_001D9600_0x1d9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9600_0x1d9600");
#endif

    switch (ctx->pc) {
        case 0x1d9660u: goto label_1d9660;
        case 0x1d966cu: goto label_1d966c;
        case 0x1d9688u: goto label_1d9688;
        case 0x1d9694u: goto label_1d9694;
        case 0x1d96b8u: goto label_1d96b8;
        case 0x1d9730u: goto label_1d9730;
        case 0x1d9768u: goto label_1d9768;
        case 0x1d9828u: goto label_1d9828;
        case 0x1d9850u: goto label_1d9850;
        default: break;
    }

    ctx->pc = 0x1d9600u;

    // 0x1d9600: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1d9604: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x1d9604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x1d9608: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x1d9608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x1d960c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d960cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9610: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x1d9610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x1d9614: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x1d9614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x1d9618: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x1d9618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x1d961c: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x1d961cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x1d9620: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x1d9620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x1d9624: 0xffb70158  sd          $s7, 0x158($sp)
    ctx->pc = 0x1d9624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 23));
    // 0x1d9628: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x1d9628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x1d962c: 0xffbf0168  sd          $ra, 0x168($sp)
    ctx->pc = 0x1d962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
    // 0x1d9630: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1d9634: 0x8c5e0004  lw          $fp, 0x4($v0)
    ctx->pc = 0x1d9634u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d9638: 0x13c0008c  beqz        $fp, . + 4 + (0x8C << 2)
    ctx->pc = 0x1D9638u;
    {
        const bool branch_taken_0x1d9638 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9638u;
        // 0x1d963c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9638) {
            ctx->pc = 0x1D986Cu;
            goto label_1d986c;
        }
    }
    ctx->pc = 0x1D9640u;
    // 0x1d9640: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1d9644: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1d9644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9648: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1d9648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d964c: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x1d964cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d9650: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1d9650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d9654: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x1d9654u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d9658: 0x27b70110  addiu       $s7, $sp, 0x110
    ctx->pc = 0x1d9658u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d965c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d965cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d9660:
    // 0x1d9660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9664: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D9664u;
    SET_GPR_U32(ctx, 31, 0x1D966Cu);
    ctx->pc = 0x1D9668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9664u;
    // 0x1d9668: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D9664u, 0x1D966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D966Cu;
label_1d966c:
    // 0x1d966c: 0x0  nop
    ctx->pc = 0x1d966cu;
    // NOP
    // 0x1d9670: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9670u;
    {
        const bool branch_taken_0x1d9670 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9670u;
        // 0x1d9674: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9670) {
            ctx->pc = 0x1D9660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9660;
        }
    }
    ctx->pc = 0x1D9678u;
    // 0x1d9678: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1d9678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d967c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1d967cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d9680: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1d9680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9684: 0x0  nop
    ctx->pc = 0x1d9684u;
    // NOP
label_1d9688:
    // 0x1d9688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d968c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1D968Cu;
    SET_GPR_U32(ctx, 31, 0x1D9694u);
    ctx->pc = 0x1D9690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D968Cu;
    // 0x1d9690: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1D968Cu, 0x1D9694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9694u;
label_1d9694:
    // 0x1d9694: 0x0  nop
    ctx->pc = 0x1d9694u;
    // NOP
    // 0x1d9698: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9698u;
    {
        const bool branch_taken_0x1d9698 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9698u;
        // 0x1d969c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9698) {
            ctx->pc = 0x1D9688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9688;
        }
    }
    ctx->pc = 0x1D96A0u;
    // 0x1d96a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d96a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96a4: 0x26490020  addiu       $t1, $s2, 0x20
    ctx->pc = 0x1d96a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d96a8: 0x26480010  addiu       $t0, $s2, 0x10
    ctx->pc = 0x1d96a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d96ac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1d96acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d96b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d96b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d96b8:
    // 0x1d96b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1d96b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d96bc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D96BCu;
    {
        const bool branch_taken_0x1d96bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d96bc) {
            ctx->pc = 0x1D96C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D96BCu;
            // 0x1d96c0: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D96C8u;
            goto label_1d96c8;
        }
    }
    ctx->pc = 0x1D96C4u;
    // 0x1d96c4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1d96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d96c8:
    // 0x1d96c8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d96c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d96cc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1d96ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1d96d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D96D0u;
    {
        const bool branch_taken_0x1d96d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96D0u;
        // 0x1d96d4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96d0) {
            ctx->pc = 0x1D96E0u;
            goto label_1d96e0;
        }
    }
    ctx->pc = 0x1D96D8u;
    // 0x1d96d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D96D8u;
    {
        const bool branch_taken_0x1d96d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96D8u;
        // 0x1d96dc: 0xc5200004  lwc1        $f0, 0x4($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96d8) {
            ctx->pc = 0x1D96E4u;
            goto label_1d96e4;
        }
    }
    ctx->pc = 0x1D96E0u;
label_1d96e0:
    // 0x1d96e0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1d96e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d96e4:
    // 0x1d96e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1d96e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d96e8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1d96e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d96ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D96ECu;
    {
        const bool branch_taken_0x1d96ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96ECu;
        // 0x1d96f0: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96ec) {
            ctx->pc = 0x1D96FCu;
            goto label_1d96fc;
        }
    }
    ctx->pc = 0x1D96F4u;
    // 0x1d96f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D96F4u;
    {
        const bool branch_taken_0x1d96f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96F4u;
        // 0x1d96f8: 0xc5200008  lwc1        $f0, 0x8($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96f4) {
            ctx->pc = 0x1D9700u;
            goto label_1d9700;
        }
    }
    ctx->pc = 0x1D96FCu;
label_1d96fc:
    // 0x1d96fc: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1d96fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d9700:
    // 0x1d9700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d9700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d9704: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d9704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1d9708: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1d9708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1d970c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1d970cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d9710: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1d9710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d9714: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D9714u;
    {
        const bool branch_taken_0x1d9714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9714u;
        // 0x1d9718: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9714) {
            ctx->pc = 0x1D96B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d96b8;
        }
    }
    ctx->pc = 0x1D971Cu;
    // 0x1d971c: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x1d971cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1d9720: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d9720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d9724: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d9724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9728: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x1D9728u;
    SET_GPR_U32(ctx, 31, 0x1D9730u);
    ctx->pc = 0x1D972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9728u;
    // 0x1d972c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x1D9728u, 0x1D9730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9730u;
label_1d9730:
    // 0x1d9730: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d9734: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1d9734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9738: 0xc440d7dc  lwc1        $f0, -0x2824($v0)
    ctx->pc = 0x1d9738u;
    { uint32_t bits = FAST_READ32(0x45D7DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d973c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d9740: 0xc441d7e0  lwc1        $f1, -0x2820($v0)
    ctx->pc = 0x1d9740u;
    { uint32_t bits = FAST_READ32(0x45D7E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9744: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1d9744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1d9748: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d9748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d974c: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x1d974cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x1d9750: 0xe6c00004  swc1        $f0, 0x4($s6)
    ctx->pc = 0x1d9750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x1d9754: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x1d9754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x1d9758: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x1d9758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1d975c: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x1d975cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x1d9760: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x1d9760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1d9764: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x1d9764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_1d9768:
    // 0x1d9768: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1d9768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d976c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1d976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9770: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9774: 0x0  nop
    ctx->pc = 0x1d9774u;
    // NOP
    // 0x1d9778: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9778u;
    {
        const bool branch_taken_0x1d9778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9778) {
            ctx->pc = 0x1D977Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9778u;
            // 0x1d977c: 0xe7a10100  swc1        $f1, 0x100($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9780u;
            goto label_1d9780;
        }
    }
    ctx->pc = 0x1D9780u;
label_1d9780:
    // 0x1d9780: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d9780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9784: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x1d9784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9788: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d9788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d978c: 0x0  nop
    ctx->pc = 0x1d978cu;
    // NOP
    // 0x1d9790: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9790u;
    {
        const bool branch_taken_0x1d9790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9790) {
            ctx->pc = 0x1D9794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9790u;
            // 0x1d9794: 0xe7a10104  swc1        $f1, 0x104($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9798u;
            goto label_1d9798;
        }
    }
    ctx->pc = 0x1D9798u;
label_1d9798:
    // 0x1d9798: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1d9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d979c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1d979cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d97a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d97a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d97a4: 0x0  nop
    ctx->pc = 0x1d97a4u;
    // NOP
    // 0x1d97a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D97A8u;
    {
        const bool branch_taken_0x1d97a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d97a8) {
            ctx->pc = 0x1D97ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97A8u;
            // 0x1d97ac: 0xe7a10108  swc1        $f1, 0x108($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D97B0u;
            goto label_1d97b0;
        }
    }
    ctx->pc = 0x1D97B0u;
label_1d97b0:
    // 0x1d97b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1d97b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d97b4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1d97b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d97b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d97b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d97bc: 0x0  nop
    ctx->pc = 0x1d97bcu;
    // NOP
    // 0x1d97c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D97C0u;
    {
        const bool branch_taken_0x1d97c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d97c0) {
            ctx->pc = 0x1D97C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97C0u;
            // 0x1d97c4: 0xe7a10110  swc1        $f1, 0x110($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D97C8u;
            goto label_1d97c8;
        }
    }
    ctx->pc = 0x1D97C8u;
label_1d97c8:
    // 0x1d97c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1d97c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d97cc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1d97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d97d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d97d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d97d4: 0x0  nop
    ctx->pc = 0x1d97d4u;
    // NOP
    // 0x1d97d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D97D8u;
    {
        const bool branch_taken_0x1d97d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d97d8) {
            ctx->pc = 0x1D97DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97D8u;
            // 0x1d97dc: 0xe7a10114  swc1        $f1, 0x114($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D97E0u;
            goto label_1d97e0;
        }
    }
    ctx->pc = 0x1D97E0u;
label_1d97e0:
    // 0x1d97e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1d97e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d97e4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x1d97e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d97e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d97e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d97ec: 0x0  nop
    ctx->pc = 0x1d97ecu;
    // NOP
    // 0x1d97f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D97F0u;
    {
        const bool branch_taken_0x1d97f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d97f0) {
            ctx->pc = 0x1D97F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97F0u;
            // 0x1d97f4: 0xe7a10118  swc1        $f1, 0x118($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D97F8u;
            goto label_1d97f8;
        }
    }
    ctx->pc = 0x1D97F8u;
label_1d97f8:
    // 0x1d97f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d97fc: 0x441ffda  bgez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D97FCu;
    {
        const bool branch_taken_0x1d97fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97FCu;
        // 0x1d9800: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97fc) {
            ctx->pc = 0x1D9768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9768;
        }
    }
    ctx->pc = 0x1D9804u;
    // 0x1d9804: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x1d9804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d9808: 0xfbc10010  sqc2        $vf1, 0x10($fp)
    ctx->pc = 0x1d9808u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d980c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x1d980cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d9810: 0xfbc10020  sqc2        $vf1, 0x20($fp)
    ctx->pc = 0x1d9810u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d9814: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d9814u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9818: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9818u;
    {
        const bool branch_taken_0x1d9818 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9818) {
            ctx->pc = 0x1D981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9818u;
            // 0x1d981c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9844u;
            goto label_1d9844;
        }
    }
    ctx->pc = 0x1D9820u;
    // 0x1d9820: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1d9820u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9824: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1d9824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1d9828:
    // 0x1d9828: 0x0  nop
    ctx->pc = 0x1d9828u;
    // NOP
    // 0x1d982c: 0x0  nop
    ctx->pc = 0x1d982cu;
    // NOP
    // 0x1d9830: 0x0  nop
    ctx->pc = 0x1d9830u;
    // NOP
    // 0x1d9834: 0x0  nop
    ctx->pc = 0x1d9834u;
    // NOP
    // 0x1d9838: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9838u;
    {
        const bool branch_taken_0x1d9838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9838u;
        // 0x1d983c: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9838) {
            ctx->pc = 0x1D9828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9828;
        }
    }
    ctx->pc = 0x1D9840u;
    // 0x1d9840: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1d9840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d9844:
    // 0x1d9844: 0x53a20009  beql        $sp, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9844u;
    {
        const bool branch_taken_0x1d9844 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9844) {
            ctx->pc = 0x1D9848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9844u;
            // 0x1d9848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D986Cu;
            goto label_1d986c;
        }
    }
    ctx->pc = 0x1D984Cu;
    // 0x1d984c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1d984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1d9850:
    // 0x1d9850: 0x0  nop
    ctx->pc = 0x1d9850u;
    // NOP
    // 0x1d9854: 0x0  nop
    ctx->pc = 0x1d9854u;
    // NOP
    // 0x1d9858: 0x0  nop
    ctx->pc = 0x1d9858u;
    // NOP
    // 0x1d985c: 0x0  nop
    ctx->pc = 0x1d985cu;
    // NOP
    // 0x1d9860: 0x17a2fffb  bne         $sp, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9860u;
    {
        const bool branch_taken_0x1d9860 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9860u;
        // 0x1d9864: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9860) {
            ctx->pc = 0x1D9850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9850;
        }
    }
    ctx->pc = 0x1D9868u;
    // 0x1d9868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d986c:
    // 0x1d986c: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x1d986cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d9870: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x1d9870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1d9874: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x1d9874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1d9878: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x1d9878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1d987c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x1d987cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1d9880: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x1d9880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d9884: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x1d9884u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d9888: 0xdfb70158  ld          $s7, 0x158($sp)
    ctx->pc = 0x1d9888u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1d988c: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x1d988cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d9890: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x1d9890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d9894: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9894u;
        // 0x1d9898: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D989Cu;
    // 0x1d989c: 0x0  nop
    ctx->pc = 0x1d989cu;
    // NOP
    ctx->pc = 0x1d98a0u;
}
