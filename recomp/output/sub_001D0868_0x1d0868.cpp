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

// Function: sub_001D0868
// Address: 0x1d0868 - 0x1d0958
void sub_001D0868_0x1d0868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0868_0x1d0868");
#endif

    switch (ctx->pc) {
        case 0x1d089cu: goto label_1d089c;
        case 0x1d08e8u: goto label_1d08e8;
        case 0x1d0918u: goto label_1d0918;
        case 0x1d0924u: goto label_1d0924;
        default: break;
    }

    ctx->pc = 0x1d0868u;

    // 0x1d0868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d086c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0870: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0874: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d0874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d087c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d087cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0880: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1d0880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1d0884: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d0884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0888: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1d0888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d088c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1d088cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1d0890: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0894: 0xc0742a0  jal         func_1D0A80
    ctx->pc = 0x1D0894u;
    SET_GPR_U32(ctx, 31, 0x1D089Cu);
    ctx->pc = 0x1D0898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0894u;
    // 0x1d0898: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A80u, 0x1D0894u, 0x1D089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D089Cu;
label_1d089c:
    // 0x1d089c: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1d089cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1d08a0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d08a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d08a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D08A4u;
    {
        const bool branch_taken_0x1d08a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08A4u;
        // 0x1d08a8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08a4) {
            ctx->pc = 0x1D08B4u;
            goto label_1d08b4;
        }
    }
    ctx->pc = 0x1D08ACu;
    // 0x1d08ac: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D08ACu;
    {
        const bool branch_taken_0x1d08ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d08ac) {
            ctx->pc = 0x1D08B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D08ACu;
            // 0x1d08b0: 0x3231ffff  andi        $s1, $s1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D08E8u;
            goto label_1d08e8;
        }
    }
    ctx->pc = 0x1D08B4u;
label_1d08b4:
    // 0x1d08b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d08b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D08B8u;
    {
        const bool branch_taken_0x1d08b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d08b8) {
            ctx->pc = 0x1D08BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D08B8u;
            // 0x1d08bc: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D08C0u;
            goto label_1d08c0;
        }
    }
    ctx->pc = 0x1D08C0u;
label_1d08c0:
    // 0x1d08c0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D08C0u;
    {
        const bool branch_taken_0x1d08c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d08c0) {
            ctx->pc = 0x1D08C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D08C0u;
            // 0x1d08c4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D08DCu;
            goto label_1d08dc;
        }
    }
    ctx->pc = 0x1D08C8u;
    // 0x1d08c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d08cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D08CCu;
    {
        const bool branch_taken_0x1d08cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d08cc) {
            ctx->pc = 0x1D08D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D08CCu;
            // 0x1d08d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D08D4u;
            goto label_1d08d4;
        }
    }
    ctx->pc = 0x1D08D4u;
label_1d08d4:
    // 0x1d08d4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x1d08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x1d08d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d08dc:
    // 0x1d08dc: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x1d08dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d08e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D08E0u;
    {
        const bool branch_taken_0x1d08e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08E0u;
        // 0x1d08e4: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08e0) {
            ctx->pc = 0x1D090Cu;
            goto label_1d090c;
        }
    }
    ctx->pc = 0x1D08E8u;
label_1d08e8:
    // 0x1d08e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D08E8u;
    {
        const bool branch_taken_0x1d08e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08E8u;
        // 0x1d08ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08e8) {
            ctx->pc = 0x1D0910u;
            goto label_1d0910;
        }
    }
    ctx->pc = 0x1D08F0u;
    // 0x1d08f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d08f4: 0x0  nop
    ctx->pc = 0x1d08f4u;
    // NOP
    // 0x1d08f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D08F8u;
    {
        const bool branch_taken_0x1d08f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d08f8) {
            ctx->pc = 0x1D08FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D08F8u;
            // 0x1d08fc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D08E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d08e8;
        }
    }
    ctx->pc = 0x1D0900u;
    // 0x1d0900: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0900u;
    {
        const bool branch_taken_0x1d0900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0900) {
            ctx->pc = 0x1D0904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0900u;
            // 0x1d0904: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0908u;
            goto label_1d0908;
        }
    }
    ctx->pc = 0x1D0908u;
label_1d0908:
    // 0x1d0908: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1d0908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1d090c:
    // 0x1d090c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d090cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d0910:
    // 0x1d0910: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1D0910u;
    SET_GPR_U32(ctx, 31, 0x1D0918u);
    ctx->pc = 0x1D0914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0910u;
    // 0x1d0914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1D0910u, 0x1D0918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0918u;
label_1d0918:
    // 0x1d0918: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d0918u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d091c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1D091Cu;
    SET_GPR_U32(ctx, 31, 0x1D0924u);
    ctx->pc = 0x1D0920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D091Cu;
    // 0x1d0920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1D091Cu, 0x1D0924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0924u;
label_1d0924:
    // 0x1d0924: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x1d0924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1d0928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d092c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d092cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0930: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x1d0930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x1d0934: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0938: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x1d0938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d093c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d093cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0944: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1d0944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d0948: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1d0948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d094c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D094Cu;
        // 0x1d0950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D094Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0954u;
    // 0x1d0954: 0x0  nop
    ctx->pc = 0x1d0954u;
    // NOP
    ctx->pc = 0x1d0958u;
}
