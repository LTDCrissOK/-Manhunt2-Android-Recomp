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

// Function: sub_002D56D0
// Address: 0x2d56d0 - 0x2d58b0
void sub_002D56D0_0x2d56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D56D0_0x2d56d0");
#endif

    switch (ctx->pc) {
        case 0x2d5738u: goto label_2d5738;
        case 0x2d5798u: goto label_2d5798;
        case 0x2d57d0u: goto label_2d57d0;
        case 0x2d57e4u: goto label_2d57e4;
        case 0x2d5834u: goto label_2d5834;
        case 0x2d5860u: goto label_2d5860;
        default: break;
    }

    ctx->pc = 0x2d56d0u;

    // 0x2d56d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d56d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d56d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d56d8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d56dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d56dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56e0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d56e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d56e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d56e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d56e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d56ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d56ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d56f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d56f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d56f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d56f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d56f8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d56f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d56fc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d56fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d5700: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d5700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d5704: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d5704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d5708: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x2d5708u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d570c: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x2d570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2d5710: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2d5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5714: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2d5714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2d5718: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d5718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d571c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5720: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d5720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d5724: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d5724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5728: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d5728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d572c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2d572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5730: 0xc0b58ce  jal         func_2D6338
    ctx->pc = 0x2D5730u;
    SET_GPR_U32(ctx, 31, 0x2D5738u);
    ctx->pc = 0x2D5734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5730u;
    // 0x2d5734: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6338u, 0x2D5730u, 0x2D5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5738u;
label_2d5738:
    // 0x2d5738: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d5738u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d573c: 0x6820001  bltzl       $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D573Cu;
    {
        const bool branch_taken_0x2d573c = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2d573c) {
            ctx->pc = 0x2D5740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D573Cu;
            // 0x2d5740: 0x8e340024  lw          $s4, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5744u;
            goto label_2d5744;
        }
    }
    ctx->pc = 0x2D5744u;
label_2d5744:
    // 0x2d5744: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x2d5744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d5748: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2d5748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2d574c: 0x240301c4  addiu       $v1, $zero, 0x1C4
    ctx->pc = 0x2d574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d5750: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2d5750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d5754: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d5754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d5758: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d5758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d575c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x2d575cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5760: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x2d5760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d5764: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d5768: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d5768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d576c: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D576Cu;
    {
        const bool branch_taken_0x2d576c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D576Cu;
        // 0x2d5770: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d576c) {
            ctx->pc = 0x2D577Cu;
            goto label_2d577c;
        }
    }
    ctx->pc = 0x2D5774u;
    // 0x2d5774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5774u;
    {
        const bool branch_taken_0x2d5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5774u;
        // 0x2d5778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5774) {
            ctx->pc = 0x2D5780u;
            goto label_2d5780;
        }
    }
    ctx->pc = 0x2D577Cu;
label_2d577c:
    // 0x2d577c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d577cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5780:
    // 0x2d5780: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5784u;
    {
        const bool branch_taken_0x2d5784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5784u;
        // 0x2d5788: 0x240401c4  addiu       $a0, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5784) {
            ctx->pc = 0x2D5798u;
            goto label_2d5798;
        }
    }
    ctx->pc = 0x2D578Cu;
    // 0x2d578c: 0x1041018  mult        $v0, $t0, $a0
    ctx->pc = 0x2d578cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d5790: 0xc0b521c  jal         func_2D4870
    ctx->pc = 0x2D5790u;
    SET_GPR_U32(ctx, 31, 0x2D5798u);
    ctx->pc = 0x2D5794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5790u;
    // 0x2d5794: 0x472021  addu        $a0, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4870u, 0x2D5790u, 0x2D5798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5798u;
label_2d5798:
    // 0x2d5798: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x2d5798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d579c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2d579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d57a0: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x2d57a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d57a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d57a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d57a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d57ac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2d57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d57b0: 0x18600032  blez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D57B0u;
    {
        const bool branch_taken_0x2d57b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57B0u;
        // 0x2d57b4: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57b0) {
            ctx->pc = 0x2D587Cu;
            goto label_2d587c;
        }
    }
    ctx->pc = 0x2D57B8u;
    // 0x2d57b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d57b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d57bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57c0: 0x241501c4  addiu       $s5, $zero, 0x1C4
    ctx->pc = 0x2d57c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d57c4: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x2d57c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d57c8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2d57c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d57cc: 0x0  nop
    ctx->pc = 0x2d57ccu;
    // NOP
label_2d57d0:
    // 0x2d57d0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2d57d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d57d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d57d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d57d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57dc: 0xc0b556a  jal         func_2D55A8
    ctx->pc = 0x2D57DCu;
    SET_GPR_U32(ctx, 31, 0x2D57E4u);
    ctx->pc = 0x2D57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D57DCu;
    // 0x2d57e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D55A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D55A8u, 0x2D57DCu, 0x2D57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D57E4u;
label_2d57e4:
    // 0x2d57e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D57E4u;
    {
        const bool branch_taken_0x2d57e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D57E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57E4u;
        // 0x2d57e8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57e4) {
            ctx->pc = 0x2D5860u;
            goto label_2d5860;
        }
    }
    ctx->pc = 0x2D57ECu;
    // 0x2d57ec: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2d57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2d57f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d57f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d57f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d57f8: 0x4a00019  bltz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D57F8u;
    {
        const bool branch_taken_0x2d57f8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D57FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57F8u;
        // 0x2d57fc: 0xb51818  mult        $v1, $a1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57f8) {
            ctx->pc = 0x2D5860u;
            goto label_2d5860;
        }
    }
    ctx->pc = 0x2D5800u;
    // 0x2d5800: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2d5800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d5804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5808: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d5808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d580c: 0x145e0003  bne         $v0, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D580Cu;
    {
        const bool branch_taken_0x2d580c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2D5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D580Cu;
        // 0x2d5810: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d580c) {
            ctx->pc = 0x2D581Cu;
            goto label_2d581c;
        }
    }
    ctx->pc = 0x2D5814u;
    // 0x2d5814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5814u;
    {
        const bool branch_taken_0x2d5814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5814u;
        // 0x2d5818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5814) {
            ctx->pc = 0x2D5820u;
            goto label_2d5820;
        }
    }
    ctx->pc = 0x2D581Cu;
label_2d581c:
    // 0x2d581c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d581cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5820:
    // 0x2d5820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5824: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5824u;
    {
        const bool branch_taken_0x2d5824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5824u;
        // 0x2d5828: 0xb51018  mult        $v0, $a1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5824) {
            ctx->pc = 0x2D583Cu;
            goto label_2d583c;
        }
    }
    ctx->pc = 0x2D582Cu;
    // 0x2d582c: 0xc0b521c  jal         func_2D4870
    ctx->pc = 0x2D582Cu;
    SET_GPR_U32(ctx, 31, 0x2D5834u);
    ctx->pc = 0x2D5830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D582Cu;
    // 0x2d5830: 0x472021  addu        $a0, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4870u, 0x2D582Cu, 0x2D5834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5834u;
label_2d5834:
    // 0x2d5834: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D5834u;
    {
        const bool branch_taken_0x2d5834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5834u;
        // 0x2d5838: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5834) {
            ctx->pc = 0x2D5864u;
            goto label_2d5864;
        }
    }
    ctx->pc = 0x2D583Cu;
label_2d583c:
    // 0x2d583c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2d583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d5840: 0x90620038  lbu         $v0, 0x38($v1)
    ctx->pc = 0x2d5840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2d5844: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5844u;
    {
        const bool branch_taken_0x2d5844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5844) {
            ctx->pc = 0x2D5848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5844u;
            // 0x2d5848: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5864u;
            goto label_2d5864;
        }
    }
    ctx->pc = 0x2D584Cu;
    // 0x2d584c: 0xa0770038  sb          $s7, 0x38($v1)
    ctx->pc = 0x2d584cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 23));
    // 0x2d5850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d5850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5858: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D5858u;
    SET_GPR_U32(ctx, 31, 0x2D5860u);
    ctx->pc = 0x2D585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5858u;
    // 0x2d585c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x2D5858u, 0x2D5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5860u;
label_2d5860:
    // 0x2d5860: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2d5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2d5864:
    // 0x2d5864: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d5864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d5868: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2d5868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2d586c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d5870: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2d5870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5874: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2D5874u;
    {
        const bool branch_taken_0x2d5874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5874u;
        // 0x2d5878: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5874) {
            ctx->pc = 0x2D57D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d57d0;
        }
    }
    ctx->pc = 0x2D587Cu;
label_2d587c:
    // 0x2d587c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d587cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5880: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d5880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5884: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d5884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5888: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d5888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d588c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d588cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5890: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d5890u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d5894: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d5894u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5898: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d5898u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d589c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d589cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d58a0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d58a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d58a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D58A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D58A4u;
        // 0x2d58a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D58A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D58ACu;
    // 0x2d58ac: 0x0  nop
    ctx->pc = 0x2d58acu;
    // NOP
    ctx->pc = 0x2d58b0u;
}
