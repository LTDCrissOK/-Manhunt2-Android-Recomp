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

// Function: sub_003D56D0
// Address: 0x3d56d0 - 0x3d5774
void sub_003D56D0_0x3d56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D56D0_0x3d56d0");
#endif

    switch (ctx->pc) {
        case 0x3d56d0u: goto label_3d56d0;
        case 0x3d56d4u: goto label_3d56d4;
        case 0x3d56d8u: goto label_3d56d8;
        case 0x3d56dcu: goto label_3d56dc;
        case 0x3d56e0u: goto label_3d56e0;
        case 0x3d56e4u: goto label_3d56e4;
        case 0x3d56e8u: goto label_3d56e8;
        case 0x3d56ecu: goto label_3d56ec;
        case 0x3d56f0u: goto label_3d56f0;
        case 0x3d56f4u: goto label_3d56f4;
        case 0x3d56f8u: goto label_3d56f8;
        case 0x3d56fcu: goto label_3d56fc;
        case 0x3d5700u: goto label_3d5700;
        case 0x3d5704u: goto label_3d5704;
        case 0x3d5708u: goto label_3d5708;
        case 0x3d570cu: goto label_3d570c;
        case 0x3d5710u: goto label_3d5710;
        case 0x3d5714u: goto label_3d5714;
        case 0x3d5718u: goto label_3d5718;
        case 0x3d571cu: goto label_3d571c;
        case 0x3d5720u: goto label_3d5720;
        case 0x3d5724u: goto label_3d5724;
        case 0x3d5728u: goto label_3d5728;
        case 0x3d572cu: goto label_3d572c;
        case 0x3d5730u: goto label_3d5730;
        case 0x3d5734u: goto label_3d5734;
        case 0x3d5738u: goto label_3d5738;
        case 0x3d573cu: goto label_3d573c;
        case 0x3d5740u: goto label_3d5740;
        case 0x3d5744u: goto label_3d5744;
        case 0x3d5748u: goto label_3d5748;
        case 0x3d574cu: goto label_3d574c;
        case 0x3d5750u: goto label_3d5750;
        case 0x3d5754u: goto label_3d5754;
        case 0x3d5758u: goto label_3d5758;
        case 0x3d575cu: goto label_3d575c;
        case 0x3d5760u: goto label_3d5760;
        case 0x3d5764u: goto label_3d5764;
        case 0x3d5768u: goto label_3d5768;
        case 0x3d576cu: goto label_3d576c;
        case 0x3d5770u: goto label_3d5770;
        default: break;
    }

    ctx->pc = 0x3d56d0u;

label_3d56d0:
    // 0x3d56d0: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x3d56d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
label_3d56d4:
    // 0x3d56d4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d56d8:
    // 0x3d56d8: 0xffbe0670  sd          $fp, 0x670($sp)
    ctx->pc = 0x3d56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 30));
label_3d56dc:
    // 0x3d56dc: 0xffbf0680  sd          $ra, 0x680($sp)
    ctx->pc = 0x3d56dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 31));
label_3d56e0:
    // 0x3d56e0: 0xffb70660  sd          $s7, 0x660($sp)
    ctx->pc = 0x3d56e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 23));
label_3d56e4:
    // 0x3d56e4: 0xffb60650  sd          $s6, 0x650($sp)
    ctx->pc = 0x3d56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 22));
label_3d56e8:
    // 0x3d56e8: 0xffb50640  sd          $s5, 0x640($sp)
    ctx->pc = 0x3d56e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 21));
label_3d56ec:
    // 0x3d56ec: 0xffb40630  sd          $s4, 0x630($sp)
    ctx->pc = 0x3d56ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 20));
label_3d56f0:
    // 0x3d56f0: 0xffb30620  sd          $s3, 0x620($sp)
    ctx->pc = 0x3d56f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 19));
label_3d56f4:
    // 0x3d56f4: 0xffb20610  sd          $s2, 0x610($sp)
    ctx->pc = 0x3d56f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 18));
label_3d56f8:
    // 0x3d56f8: 0xffb10600  sd          $s1, 0x600($sp)
    ctx->pc = 0x3d56f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 17));
label_3d56fc:
    // 0x3d56fc: 0xffb005f0  sd          $s0, 0x5F0($sp)
    ctx->pc = 0x3d56fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 16));
label_3d5700:
    // 0x3d5700: 0xe7bf06e8  swc1        $f31, 0x6E8($sp)
    ctx->pc = 0x3d5700u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_3d5704:
    // 0x3d5704: 0xe7be06e0  swc1        $f30, 0x6E0($sp)
    ctx->pc = 0x3d5704u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_3d5708:
    // 0x3d5708: 0xe7bd06d8  swc1        $f29, 0x6D8($sp)
    ctx->pc = 0x3d5708u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_3d570c:
    // 0x3d570c: 0xe7bc06d0  swc1        $f28, 0x6D0($sp)
    ctx->pc = 0x3d570cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_3d5710:
    // 0x3d5710: 0xe7bb06c8  swc1        $f27, 0x6C8($sp)
    ctx->pc = 0x3d5710u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_3d5714:
    // 0x3d5714: 0xe7ba06c0  swc1        $f26, 0x6C0($sp)
    ctx->pc = 0x3d5714u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_3d5718:
    // 0x3d5718: 0xe7b906b8  swc1        $f25, 0x6B8($sp)
    ctx->pc = 0x3d5718u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_3d571c:
    // 0x3d571c: 0xe7b806b0  swc1        $f24, 0x6B0($sp)
    ctx->pc = 0x3d571cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_3d5720:
    // 0x3d5720: 0xe7b706a8  swc1        $f23, 0x6A8($sp)
    ctx->pc = 0x3d5720u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_3d5724:
    // 0x3d5724: 0xe7b606a0  swc1        $f22, 0x6A0($sp)
    ctx->pc = 0x3d5724u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_3d5728:
    // 0x3d5728: 0xe7b50698  swc1        $f21, 0x698($sp)
    ctx->pc = 0x3d5728u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1688), bits); }
label_3d572c:
    // 0x3d572c: 0xe7b40690  swc1        $f20, 0x690($sp)
    ctx->pc = 0x3d572cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1680), bits); }
label_3d5730:
    // 0x3d5730: 0x8c62ede8  lw          $v0, -0x1218($v1)
    ctx->pc = 0x3d5730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962664)));
label_3d5734:
    // 0x3d5734: 0x40f809  jalr        $v0
label_3d5738:
    if (ctx->pc == 0x3D5738u) {
        ctx->pc = 0x3D5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5734u;
        // 0x3d5738: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D573Cu;
        goto label_3d573c;
    }
    ctx->pc = 0x3D5734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D573Cu);
        ctx->pc = 0x3D5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5734u;
        // 0x3d5738: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5734u, 0x3D573Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D573Cu;
label_3d573c:
    // 0x3d573c: 0xafc205e4  sw          $v0, 0x5E4($fp)
    ctx->pc = 0x3d573cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 2));
label_3d5740:
    // 0x3d5740: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x3d5740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_3d5744:
    // 0x3d5744: 0x8fc305e4  lw          $v1, 0x5E4($fp)
    ctx->pc = 0x3d5744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_3d5748:
    // 0x3d5748: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x3d5748u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_3d574c:
    // 0x3d574c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3d5750:
    // 0x3d5750: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3d5754:
    if (ctx->pc == 0x3D5754u) {
        ctx->pc = 0x3D5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5750u;
        // 0x3d5754: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5758u;
        goto label_3d5758;
    }
    ctx->pc = 0x3D5750u;
    {
        const bool branch_taken_0x3d5750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5750u;
        // 0x3d5754: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5750) {
            ctx->pc = 0x3D576Cu;
            goto label_3d576c;
        }
    }
    ctx->pc = 0x3D5758u;
label_3d5758:
    // 0x3d5758: 0xc0f52ce  jal         func_3D4B38
label_3d575c:
    if (ctx->pc == 0x3D575Cu) {
        ctx->pc = 0x3D5760u;
        goto label_3d5760;
    }
    ctx->pc = 0x3D5758u;
    SET_GPR_U32(ctx, 31, 0x3D5760u);
    ctx->pc = 0x3D4B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B38u, 0x3D5758u, 0x3D5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5760u;
label_3d5760:
    // 0x3d5760: 0x27c505e0  addiu       $a1, $fp, 0x5E0
    ctx->pc = 0x3d5760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_3d5764:
    // 0x3d5764: 0x10000003  b           . + 4 + (0x3 << 2)
label_3d5768:
    if (ctx->pc == 0x3D5768u) {
        ctx->pc = 0x3D5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5764u;
        // 0x3d5768: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D576Cu;
        goto label_3d576c;
    }
    ctx->pc = 0x3D5764u;
    {
        const bool branch_taken_0x3d5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5764u;
        // 0x3d5768: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5764) {
            ctx->pc = 0x3D5774u;
            return;
        }
    }
    ctx->pc = 0x3D576Cu;
label_3d576c:
    // 0x3d576c: 0x27c605e0  addiu       $a2, $fp, 0x5E0
    ctx->pc = 0x3d576cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_3d5770:
    // 0x3d5770: 0xafc605ec  sw          $a2, 0x5EC($fp)
    ctx->pc = 0x3d5770u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 6));
    ctx->pc = 0x3d5774u;
}
