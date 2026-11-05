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

// Function: sub_002C1778
// Address: 0x2c1778 - 0x2c1930
void sub_002C1778_0x2c1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1778_0x2c1778");
#endif

    switch (ctx->pc) {
        case 0x2c17a0u: goto label_2c17a0;
        case 0x2c17acu: goto label_2c17ac;
        case 0x2c17b4u: goto label_2c17b4;
        case 0x2c17bcu: goto label_2c17bc;
        case 0x2c17c0u: goto label_2c17c0;
        case 0x2c17ccu: goto label_2c17cc;
        case 0x2c17e0u: goto label_2c17e0;
        case 0x2c17e8u: goto label_2c17e8;
        case 0x2c17f0u: goto label_2c17f0;
        case 0x2c17f8u: goto label_2c17f8;
        case 0x2c1800u: goto label_2c1800;
        case 0x2c1808u: goto label_2c1808;
        case 0x2c1810u: goto label_2c1810;
        case 0x2c1818u: goto label_2c1818;
        case 0x2c1820u: goto label_2c1820;
        case 0x2c1828u: goto label_2c1828;
        case 0x2c1830u: goto label_2c1830;
        case 0x2c1838u: goto label_2c1838;
        case 0x2c1840u: goto label_2c1840;
        case 0x2c1848u: goto label_2c1848;
        case 0x2c1850u: goto label_2c1850;
        case 0x2c1858u: goto label_2c1858;
        case 0x2c1860u: goto label_2c1860;
        case 0x2c1868u: goto label_2c1868;
        case 0x2c1870u: goto label_2c1870;
        case 0x2c1878u: goto label_2c1878;
        case 0x2c1880u: goto label_2c1880;
        case 0x2c1888u: goto label_2c1888;
        case 0x2c1890u: goto label_2c1890;
        case 0x2c1898u: goto label_2c1898;
        case 0x2c18a0u: goto label_2c18a0;
        case 0x2c18a8u: goto label_2c18a8;
        case 0x2c18b0u: goto label_2c18b0;
        case 0x2c18b8u: goto label_2c18b8;
        case 0x2c18c0u: goto label_2c18c0;
        case 0x2c18c8u: goto label_2c18c8;
        case 0x2c18d0u: goto label_2c18d0;
        case 0x2c18d8u: goto label_2c18d8;
        case 0x2c18e0u: goto label_2c18e0;
        case 0x2c18e8u: goto label_2c18e8;
        case 0x2c18f0u: goto label_2c18f0;
        case 0x2c18f8u: goto label_2c18f8;
        default: break;
    }

    ctx->pc = 0x2c1778u;

    // 0x2c1778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c177c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c1780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c1784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c1788: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c178c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c1790: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2c1790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c1794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c1794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c1798: 0xc0b0586  jal         func_2C1618
    ctx->pc = 0x2C1798u;
    SET_GPR_U32(ctx, 31, 0x2C17A0u);
    ctx->pc = 0x2C179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1798u;
    // 0x2c179c: 0x26110060  addiu       $s1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1618u, 0x2C1798u, 0x2C17A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17A0u;
label_2c17a0:
    // 0x2c17a0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2c17a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c17a4: 0xc0b0586  jal         func_2C1618
    ctx->pc = 0x2C17A4u;
    SET_GPR_U32(ctx, 31, 0x2C17ACu);
    ctx->pc = 0x2C17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17A4u;
    // 0x2c17a8: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1618u, 0x2C17A4u, 0x2C17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17ACu;
label_2c17ac:
    // 0x2c17ac: 0xc0b0586  jal         func_2C1618
    ctx->pc = 0x2C17ACu;
    SET_GPR_U32(ctx, 31, 0x2C17B4u);
    ctx->pc = 0x2C17B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17ACu;
    // 0x2c17b0: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1618u, 0x2C17ACu, 0x2C17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17B4u;
label_2c17b4:
    // 0x2c17b4: 0xc0b0d44  jal         func_2C3510
    ctx->pc = 0x2C17B4u;
    SET_GPR_U32(ctx, 31, 0x2C17BCu);
    ctx->pc = 0x2C17B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17B4u;
    // 0x2c17b8: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x2C17B4u, 0x2C17BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17BCu;
label_2c17bc:
    // 0x2c17bc: 0x0  nop
    ctx->pc = 0x2c17bcu;
    // NOP
label_2c17c0:
    // 0x2c17c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c17c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c17c4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2C17C4u;
    SET_GPR_U32(ctx, 31, 0x2C17CCu);
    ctx->pc = 0x2C17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17C4u;
    // 0x2c17c8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2C17C4u, 0x2C17CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17CCu;
label_2c17cc:
    // 0x2c17cc: 0x0  nop
    ctx->pc = 0x2c17ccu;
    // NOP
    // 0x2c17d0: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C17D0u;
    {
        const bool branch_taken_0x2c17d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2C17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C17D0u;
        // 0x2c17d4: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c17d0) {
            ctx->pc = 0x2C17C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c17c0;
        }
    }
    ctx->pc = 0x2C17D8u;
    // 0x2c17d8: 0xc0fa43c  jal         func_3E90F0
    ctx->pc = 0x2C17D8u;
    SET_GPR_U32(ctx, 31, 0x2C17E0u);
    ctx->pc = 0x2C17DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17D8u;
    // 0x2c17dc: 0x260400ec  addiu       $a0, $s0, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E90F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E90F0u, 0x2C17D8u, 0x2C17E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17E0u;
label_2c17e0:
    // 0x2c17e0: 0xc0fa46c  jal         func_3E91B0
    ctx->pc = 0x2C17E0u;
    SET_GPR_U32(ctx, 31, 0x2C17E8u);
    ctx->pc = 0x2C17E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17E0u;
    // 0x2c17e4: 0x26040138  addiu       $a0, $s0, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E91B0u, 0x2C17E0u, 0x2C17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17E8u;
label_2c17e8:
    // 0x2c17e8: 0xc0fa49c  jal         func_3E9270
    ctx->pc = 0x2C17E8u;
    SET_GPR_U32(ctx, 31, 0x2C17F0u);
    ctx->pc = 0x2C17ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17E8u;
    // 0x2c17ec: 0x26040184  addiu       $a0, $s0, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9270u, 0x2C17E8u, 0x2C17F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17F0u;
label_2c17f0:
    // 0x2c17f0: 0xc0fa4cc  jal         func_3E9330
    ctx->pc = 0x2C17F0u;
    SET_GPR_U32(ctx, 31, 0x2C17F8u);
    ctx->pc = 0x2C17F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17F0u;
    // 0x2c17f4: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9330u, 0x2C17F0u, 0x2C17F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C17F8u;
label_2c17f8:
    // 0x2c17f8: 0xc0fa4fc  jal         func_3E93F0
    ctx->pc = 0x2C17F8u;
    SET_GPR_U32(ctx, 31, 0x2C1800u);
    ctx->pc = 0x2C17FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C17F8u;
    // 0x2c17fc: 0x2604021c  addiu       $a0, $s0, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E93F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E93F0u, 0x2C17F8u, 0x2C1800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1800u;
label_2c1800:
    // 0x2c1800: 0xc0fa52c  jal         func_3E94B0
    ctx->pc = 0x2C1800u;
    SET_GPR_U32(ctx, 31, 0x2C1808u);
    ctx->pc = 0x2C1804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1800u;
    // 0x2c1804: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E94B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E94B0u, 0x2C1800u, 0x2C1808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1808u;
label_2c1808:
    // 0x2c1808: 0xc0fa55c  jal         func_3E9570
    ctx->pc = 0x2C1808u;
    SET_GPR_U32(ctx, 31, 0x2C1810u);
    ctx->pc = 0x2C180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1808u;
    // 0x2c180c: 0x260402b4  addiu       $a0, $s0, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9570u, 0x2C1808u, 0x2C1810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1810u;
label_2c1810:
    // 0x2c1810: 0xc0fa58c  jal         func_3E9630
    ctx->pc = 0x2C1810u;
    SET_GPR_U32(ctx, 31, 0x2C1818u);
    ctx->pc = 0x2C1814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1810u;
    // 0x2c1814: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9630u, 0x2C1810u, 0x2C1818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1818u;
label_2c1818:
    // 0x2c1818: 0xc0fa5bc  jal         func_3E96F0
    ctx->pc = 0x2C1818u;
    SET_GPR_U32(ctx, 31, 0x2C1820u);
    ctx->pc = 0x2C181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1818u;
    // 0x2c181c: 0x2604034c  addiu       $a0, $s0, 0x34C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E96F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E96F0u, 0x2C1818u, 0x2C1820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1820u;
label_2c1820:
    // 0x2c1820: 0xc0fa60a  jal         func_3E9828
    ctx->pc = 0x2C1820u;
    SET_GPR_U32(ctx, 31, 0x2C1828u);
    ctx->pc = 0x2C1824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1820u;
    // 0x2c1824: 0x26040398  addiu       $a0, $s0, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9828u, 0x2C1820u, 0x2C1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1828u;
label_2c1828:
    // 0x2c1828: 0xc0fa65e  jal         func_3E9978
    ctx->pc = 0x2C1828u;
    SET_GPR_U32(ctx, 31, 0x2C1830u);
    ctx->pc = 0x2C182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1828u;
    // 0x2c182c: 0x260403e4  addiu       $a0, $s0, 0x3E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 996));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9978u, 0x2C1828u, 0x2C1830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1830u;
label_2c1830:
    // 0x2c1830: 0xc0fa6aa  jal         func_3E9AA8
    ctx->pc = 0x2C1830u;
    SET_GPR_U32(ctx, 31, 0x2C1838u);
    ctx->pc = 0x2C1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1830u;
    // 0x2c1834: 0x26040430  addiu       $a0, $s0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9AA8u, 0x2C1830u, 0x2C1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1838u;
label_2c1838:
    // 0x2c1838: 0xc0fa6fe  jal         func_3E9BF8
    ctx->pc = 0x2C1838u;
    SET_GPR_U32(ctx, 31, 0x2C1840u);
    ctx->pc = 0x2C183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1838u;
    // 0x2c183c: 0x2604047c  addiu       $a0, $s0, 0x47C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9BF8u, 0x2C1838u, 0x2C1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1840u;
label_2c1840:
    // 0x2c1840: 0xc0fa752  jal         func_3E9D48
    ctx->pc = 0x2C1840u;
    SET_GPR_U32(ctx, 31, 0x2C1848u);
    ctx->pc = 0x2C1844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1840u;
    // 0x2c1844: 0x260404c8  addiu       $a0, $s0, 0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9D48u, 0x2C1840u, 0x2C1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1848u;
label_2c1848:
    // 0x2c1848: 0xc0fa7a6  jal         func_3E9E98
    ctx->pc = 0x2C1848u;
    SET_GPR_U32(ctx, 31, 0x2C1850u);
    ctx->pc = 0x2C184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1848u;
    // 0x2c184c: 0x26040514  addiu       $a0, $s0, 0x514 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9E98u, 0x2C1848u, 0x2C1850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1850u;
label_2c1850:
    // 0x2c1850: 0xc0fa7fa  jal         func_3E9FE8
    ctx->pc = 0x2C1850u;
    SET_GPR_U32(ctx, 31, 0x2C1858u);
    ctx->pc = 0x2C1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1850u;
    // 0x2c1854: 0x26040560  addiu       $a0, $s0, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9FE8u, 0x2C1850u, 0x2C1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1858u;
label_2c1858:
    // 0x2c1858: 0xc0fa84e  jal         func_3EA138
    ctx->pc = 0x2C1858u;
    SET_GPR_U32(ctx, 31, 0x2C1860u);
    ctx->pc = 0x2C185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1858u;
    // 0x2c185c: 0x260405ac  addiu       $a0, $s0, 0x5AC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA138u, 0x2C1858u, 0x2C1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1860u;
label_2c1860:
    // 0x2c1860: 0xc0fa8a2  jal         func_3EA288
    ctx->pc = 0x2C1860u;
    SET_GPR_U32(ctx, 31, 0x2C1868u);
    ctx->pc = 0x2C1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1860u;
    // 0x2c1864: 0x260405f8  addiu       $a0, $s0, 0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA288u, 0x2C1860u, 0x2C1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1868u;
label_2c1868:
    // 0x2c1868: 0xc0fa8f6  jal         func_3EA3D8
    ctx->pc = 0x2C1868u;
    SET_GPR_U32(ctx, 31, 0x2C1870u);
    ctx->pc = 0x2C186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1868u;
    // 0x2c186c: 0x26040644  addiu       $a0, $s0, 0x644 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1604));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA3D8u, 0x2C1868u, 0x2C1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1870u;
label_2c1870:
    // 0x2c1870: 0xc0fa94a  jal         func_3EA528
    ctx->pc = 0x2C1870u;
    SET_GPR_U32(ctx, 31, 0x2C1878u);
    ctx->pc = 0x2C1874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1870u;
    // 0x2c1874: 0x26040690  addiu       $a0, $s0, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA528u, 0x2C1870u, 0x2C1878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1878u;
label_2c1878:
    // 0x2c1878: 0xc0fa99e  jal         func_3EA678
    ctx->pc = 0x2C1878u;
    SET_GPR_U32(ctx, 31, 0x2C1880u);
    ctx->pc = 0x2C187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1878u;
    // 0x2c187c: 0x260406dc  addiu       $a0, $s0, 0x6DC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA678u, 0x2C1878u, 0x2C1880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1880u;
label_2c1880:
    // 0x2c1880: 0xc0fa9f2  jal         func_3EA7C8
    ctx->pc = 0x2C1880u;
    SET_GPR_U32(ctx, 31, 0x2C1888u);
    ctx->pc = 0x2C1884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1880u;
    // 0x2c1884: 0x26040728  addiu       $a0, $s0, 0x728 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA7C8u, 0x2C1880u, 0x2C1888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1888u;
label_2c1888:
    // 0x2c1888: 0xc0faa46  jal         func_3EA918
    ctx->pc = 0x2C1888u;
    SET_GPR_U32(ctx, 31, 0x2C1890u);
    ctx->pc = 0x2C188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1888u;
    // 0x2c188c: 0x26040774  addiu       $a0, $s0, 0x774 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1908));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA918u, 0x2C1888u, 0x2C1890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1890u;
label_2c1890:
    // 0x2c1890: 0xc0faa9a  jal         func_3EAA68
    ctx->pc = 0x2C1890u;
    SET_GPR_U32(ctx, 31, 0x2C1898u);
    ctx->pc = 0x2C1894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1890u;
    // 0x2c1894: 0x260407c0  addiu       $a0, $s0, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAA68u, 0x2C1890u, 0x2C1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1898u;
label_2c1898:
    // 0x2c1898: 0xc0faaee  jal         func_3EABB8
    ctx->pc = 0x2C1898u;
    SET_GPR_U32(ctx, 31, 0x2C18A0u);
    ctx->pc = 0x2C189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1898u;
    // 0x2c189c: 0x2604080c  addiu       $a0, $s0, 0x80C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EABB8u, 0x2C1898u, 0x2C18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18A0u;
label_2c18a0:
    // 0x2c18a0: 0xc0fab42  jal         func_3EAD08
    ctx->pc = 0x2C18A0u;
    SET_GPR_U32(ctx, 31, 0x2C18A8u);
    ctx->pc = 0x2C18A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18A0u;
    // 0x2c18a4: 0x26040858  addiu       $a0, $s0, 0x858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAD08u, 0x2C18A0u, 0x2C18A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18A8u;
label_2c18a8:
    // 0x2c18a8: 0xc0fab96  jal         func_3EAE58
    ctx->pc = 0x2C18A8u;
    SET_GPR_U32(ctx, 31, 0x2C18B0u);
    ctx->pc = 0x2C18ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18A8u;
    // 0x2c18ac: 0x260408a4  addiu       $a0, $s0, 0x8A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAE58u, 0x2C18A8u, 0x2C18B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18B0u;
label_2c18b0:
    // 0x2c18b0: 0xc0fabea  jal         func_3EAFA8
    ctx->pc = 0x2C18B0u;
    SET_GPR_U32(ctx, 31, 0x2C18B8u);
    ctx->pc = 0x2C18B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18B0u;
    // 0x2c18b4: 0x260408f0  addiu       $a0, $s0, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAFA8u, 0x2C18B0u, 0x2C18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18B8u;
label_2c18b8:
    // 0x2c18b8: 0xc0fac3e  jal         func_3EB0F8
    ctx->pc = 0x2C18B8u;
    SET_GPR_U32(ctx, 31, 0x2C18C0u);
    ctx->pc = 0x2C18BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18B8u;
    // 0x2c18bc: 0x2604093c  addiu       $a0, $s0, 0x93C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB0F8u, 0x2C18B8u, 0x2C18C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18C0u;
label_2c18c0:
    // 0x2c18c0: 0xc0fac92  jal         func_3EB248
    ctx->pc = 0x2C18C0u;
    SET_GPR_U32(ctx, 31, 0x2C18C8u);
    ctx->pc = 0x2C18C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18C0u;
    // 0x2c18c4: 0x26040988  addiu       $a0, $s0, 0x988 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB248u, 0x2C18C0u, 0x2C18C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18C8u;
label_2c18c8:
    // 0x2c18c8: 0xc0face6  jal         func_3EB398
    ctx->pc = 0x2C18C8u;
    SET_GPR_U32(ctx, 31, 0x2C18D0u);
    ctx->pc = 0x2C18CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18C8u;
    // 0x2c18cc: 0x260409d4  addiu       $a0, $s0, 0x9D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB398u, 0x2C18C8u, 0x2C18D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18D0u;
label_2c18d0:
    // 0x2c18d0: 0xc0fad3a  jal         func_3EB4E8
    ctx->pc = 0x2C18D0u;
    SET_GPR_U32(ctx, 31, 0x2C18D8u);
    ctx->pc = 0x2C18D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18D0u;
    // 0x2c18d4: 0x26040a20  addiu       $a0, $s0, 0xA20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB4E8u, 0x2C18D0u, 0x2C18D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18D8u;
label_2c18d8:
    // 0x2c18d8: 0xc0fad8e  jal         func_3EB638
    ctx->pc = 0x2C18D8u;
    SET_GPR_U32(ctx, 31, 0x2C18E0u);
    ctx->pc = 0x2C18DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18D8u;
    // 0x2c18dc: 0x26040a6c  addiu       $a0, $s0, 0xA6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB638u, 0x2C18D8u, 0x2C18E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18E0u;
label_2c18e0:
    // 0x2c18e0: 0xc0fade2  jal         func_3EB788
    ctx->pc = 0x2C18E0u;
    SET_GPR_U32(ctx, 31, 0x2C18E8u);
    ctx->pc = 0x2C18E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18E0u;
    // 0x2c18e4: 0x26040ab8  addiu       $a0, $s0, 0xAB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB788u, 0x2C18E0u, 0x2C18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18E8u;
label_2c18e8:
    // 0x2c18e8: 0xc0fae36  jal         func_3EB8D8
    ctx->pc = 0x2C18E8u;
    SET_GPR_U32(ctx, 31, 0x2C18F0u);
    ctx->pc = 0x2C18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18E8u;
    // 0x2c18ec: 0x26040b04  addiu       $a0, $s0, 0xB04 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EB8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB8D8u, 0x2C18E8u, 0x2C18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18F0u;
label_2c18f0:
    // 0x2c18f0: 0xc0fae8a  jal         func_3EBA28
    ctx->pc = 0x2C18F0u;
    SET_GPR_U32(ctx, 31, 0x2C18F8u);
    ctx->pc = 0x2C18F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C18F0u;
    // 0x2c18f4: 0x26040b50  addiu       $a0, $s0, 0xB50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EBA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EBA28u, 0x2C18F0u, 0x2C18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C18F8u;
label_2c18f8:
    // 0x2c18f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c18f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c18fc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2c18fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c1900: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x2c1900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x2c1904: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x2c1904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x2c1908: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2c1908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2c190c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c190cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c1910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1914: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c1914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1918: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c1918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c191c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c191cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1920: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1920u;
        // 0x2c1924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1928u;
    // 0x2c1928: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c192c: 0x0  nop
    ctx->pc = 0x2c192cu;
    // NOP
    ctx->pc = 0x2c1930u;
}
