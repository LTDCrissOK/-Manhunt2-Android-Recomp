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

// Function: sub_003BB750
// Address: 0x3bb750 - 0x3bb980
void sub_003BB750_0x3bb750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB750_0x3bb750");
#endif

    switch (ctx->pc) {
        case 0x3bb768u: goto label_3bb768;
        case 0x3bb774u: goto label_3bb774;
        case 0x3bb780u: goto label_3bb780;
        case 0x3bb78cu: goto label_3bb78c;
        case 0x3bb798u: goto label_3bb798;
        case 0x3bb7a4u: goto label_3bb7a4;
        case 0x3bb7b8u: goto label_3bb7b8;
        case 0x3bb7d0u: goto label_3bb7d0;
        case 0x3bb7dcu: goto label_3bb7dc;
        case 0x3bb7e8u: goto label_3bb7e8;
        case 0x3bb7f4u: goto label_3bb7f4;
        case 0x3bb800u: goto label_3bb800;
        case 0x3bb80cu: goto label_3bb80c;
        case 0x3bb820u: goto label_3bb820;
        case 0x3bb8d8u: goto label_3bb8d8;
        default: break;
    }

    ctx->pc = 0x3bb750u;

    // 0x3bb750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bb754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bb758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb75c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bb75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb760: 0xc0eedcc  jal         func_3BB730
    ctx->pc = 0x3BB760u;
    SET_GPR_U32(ctx, 31, 0x3BB768u);
    ctx->pc = 0x3BB764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB760u;
    // 0x3bb764: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB730u, 0x3BB760u, 0x3BB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB768u;
label_3bb768:
    // 0x3bb768: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x3bb768u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3bb76c: 0xc0eedcc  jal         func_3BB730
    ctx->pc = 0x3BB76Cu;
    SET_GPR_U32(ctx, 31, 0x3BB774u);
    ctx->pc = 0x3BB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB76Cu;
    // 0x3bb770: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB730u, 0x3BB76Cu, 0x3BB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB774u;
label_3bb774:
    // 0x3bb774: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x3bb774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3bb778: 0xc0eedcc  jal         func_3BB730
    ctx->pc = 0x3BB778u;
    SET_GPR_U32(ctx, 31, 0x3BB780u);
    ctx->pc = 0x3BB77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB778u;
    // 0x3bb77c: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB730u, 0x3BB778u, 0x3BB780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB780u;
label_3bb780:
    // 0x3bb780: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3bb780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3bb784: 0xc0eedcc  jal         func_3BB730
    ctx->pc = 0x3BB784u;
    SET_GPR_U32(ctx, 31, 0x3BB78Cu);
    ctx->pc = 0x3BB788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB784u;
    // 0x3bb788: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB730u, 0x3BB784u, 0x3BB78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB78Cu;
label_3bb78c:
    // 0x3bb78c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3bb78cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3bb790: 0xc0eedcc  jal         func_3BB730
    ctx->pc = 0x3BB790u;
    SET_GPR_U32(ctx, 31, 0x3BB798u);
    ctx->pc = 0x3BB794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB790u;
    // 0x3bb794: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB730u, 0x3BB790u, 0x3BB798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB798u;
label_3bb798:
    // 0x3bb798: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x3bb798u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3bb79c: 0xc0eedcc  jal         func_3BB730
    ctx->pc = 0x3BB79Cu;
    SET_GPR_U32(ctx, 31, 0x3BB7A4u);
    ctx->pc = 0x3BB7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB79Cu;
    // 0x3bb7a0: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB730u, 0x3BB79Cu, 0x3BB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7A4u;
label_3bb7a4:
    // 0x3bb7a4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3bb7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bb7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bb7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB7B0u;
        // 0x3bb7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB7B8u;
label_3bb7b8:
    // 0x3bb7b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bb7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bb7c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb7c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bb7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb7c8: 0xc0eedc0  jal         func_3BB700
    ctx->pc = 0x3BB7C8u;
    SET_GPR_U32(ctx, 31, 0x3BB7D0u);
    ctx->pc = 0x3BB7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7C8u;
    // 0x3bb7cc: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB700u, 0x3BB7C8u, 0x3BB7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7D0u;
label_3bb7d0:
    // 0x3bb7d0: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x3bb7d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x3bb7d4: 0xc0eedc0  jal         func_3BB700
    ctx->pc = 0x3BB7D4u;
    SET_GPR_U32(ctx, 31, 0x3BB7DCu);
    ctx->pc = 0x3BB7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7D4u;
    // 0x3bb7d8: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB700u, 0x3BB7D4u, 0x3BB7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7DCu;
label_3bb7dc:
    // 0x3bb7dc: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x3bb7dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3bb7e0: 0xc0eedc0  jal         func_3BB700
    ctx->pc = 0x3BB7E0u;
    SET_GPR_U32(ctx, 31, 0x3BB7E8u);
    ctx->pc = 0x3BB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7E0u;
    // 0x3bb7e4: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB700u, 0x3BB7E0u, 0x3BB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7E8u;
label_3bb7e8:
    // 0x3bb7e8: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x3bb7e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3bb7ec: 0xc0eedc0  jal         func_3BB700
    ctx->pc = 0x3BB7ECu;
    SET_GPR_U32(ctx, 31, 0x3BB7F4u);
    ctx->pc = 0x3BB7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7ECu;
    // 0x3bb7f0: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB700u, 0x3BB7ECu, 0x3BB7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB7F4u;
label_3bb7f4:
    // 0x3bb7f4: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3bb7f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3bb7f8: 0xc0eedc0  jal         func_3BB700
    ctx->pc = 0x3BB7F8u;
    SET_GPR_U32(ctx, 31, 0x3BB800u);
    ctx->pc = 0x3BB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB7F8u;
    // 0x3bb7fc: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB700u, 0x3BB7F8u, 0x3BB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB800u;
label_3bb800:
    // 0x3bb800: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x3bb800u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3bb804: 0xc0eedc0  jal         func_3BB700
    ctx->pc = 0x3BB804u;
    SET_GPR_U32(ctx, 31, 0x3BB80Cu);
    ctx->pc = 0x3BB808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB804u;
    // 0x3bb808: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB700u, 0x3BB804u, 0x3BB80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB80Cu;
label_3bb80c:
    // 0x3bb80c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3bb80cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bb810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bb814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb818: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB818u;
        // 0x3bb81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB820u;
label_3bb820:
    // 0x3bb820: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3bb820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bb824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bb828: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x3bb828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3bb82c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3bb82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3bb830: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x3bb830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x3bb834: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb838: 0x24490b08  addiu       $t1, $v0, 0xB08
    ctx->pc = 0x3bb838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2824));
    // 0x3bb83c: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x3bb83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3bb840: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x3bb840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3bb844: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x3bb844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3bb848: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x3bb848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3bb84c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x3bb84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bb850: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x3bb850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bb854: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x3bb854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3bb858: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x3bb858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3bb85c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x3bb85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3bb860: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB860u;
    {
        const bool branch_taken_0x3bb860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB860u;
        // 0x3bb864: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb860) {
            ctx->pc = 0x3BB870u;
            goto label_3bb870;
        }
    }
    ctx->pc = 0x3BB868u;
    // 0x3bb868: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x3bb868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3bb86c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x3bb86cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_3bb870:
    // 0x3bb870: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x3bb870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3bb874: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x3bb874u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3bb878: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3bb878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bb87c: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x3bb87cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x3bb880: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3bb880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3bb884: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB884u;
    {
        const bool branch_taken_0x3bb884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB884u;
        // 0x3bb888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb884) {
            ctx->pc = 0x3BB8CCu;
            goto label_3bb8cc;
        }
    }
    ctx->pc = 0x3BB88Cu;
    // 0x3bb88c: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x3bb88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3bb890: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x3bb890u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bb894: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3bb894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3bb898: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb89c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3bb89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3bb8a0: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BB8A0u;
    {
        const bool branch_taken_0x3bb8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8A0u;
        // 0x3bb8a4: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8a0) {
            ctx->pc = 0x3BB8CCu;
            goto label_3bb8cc;
        }
    }
    ctx->pc = 0x3BB8A8u;
    // 0x3bb8a8: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x3bb8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x3bb8ac: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x3bb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3bb8b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB8B0u;
    {
        const bool branch_taken_0x3bb8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8B0u;
        // 0x3bb8b4: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8b0) {
            ctx->pc = 0x3BB8C0u;
            goto label_3bb8c0;
        }
    }
    ctx->pc = 0x3BB8B8u;
    // 0x3bb8b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB8B8u;
    {
        const bool branch_taken_0x3bb8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8B8u;
        // 0x3bb8bc: 0xa0a00007  sb          $zero, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8b8) {
            ctx->pc = 0x3BB8C4u;
            goto label_3bb8c4;
        }
    }
    ctx->pc = 0x3BB8C0u;
label_3bb8c0:
    // 0x3bb8c0: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x3bb8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_3bb8c4:
    // 0x3bb8c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb8c8: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3bb8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_3bb8cc:
    // 0x3bb8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB8CCu;
        // 0x3bb8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB8D4u;
    // 0x3bb8d4: 0x0  nop
    ctx->pc = 0x3bb8d4u;
    // NOP
label_3bb8d8:
    // 0x3bb8d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3bb8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb8dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3bb8dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3bb8e0: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x3bb8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3bb8e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3bb8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3bb8e8: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x3bb8e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x3bb8ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3bb8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3bb8f0: 0x24490b08  addiu       $t1, $v0, 0xB08
    ctx->pc = 0x3bb8f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2824));
    // 0x3bb8f4: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x3bb8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3bb8f8: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x3bb8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3bb8fc: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x3bb8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3bb900: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x3bb900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3bb904: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x3bb904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bb908: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x3bb908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bb90c: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x3bb90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3bb910: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x3bb910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3bb914: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x3bb914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3bb918: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB918u;
    {
        const bool branch_taken_0x3bb918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB918u;
        // 0x3bb91c: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb918) {
            ctx->pc = 0x3BB928u;
            goto label_3bb928;
        }
    }
    ctx->pc = 0x3BB920u;
    // 0x3bb920: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x3bb920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3bb924: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x3bb924u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_3bb928:
    // 0x3bb928: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x3bb928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3bb92c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB92Cu;
    {
        const bool branch_taken_0x3bb92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb92c) {
            ctx->pc = 0x3BB974u;
            goto label_3bb974;
        }
    }
    ctx->pc = 0x3BB934u;
    // 0x3bb934: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x3bb934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3bb938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bb938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bb93c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3bb93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bb940: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB940u;
    {
        const bool branch_taken_0x3bb940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB940u;
        // 0x3bb944: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb940) {
            ctx->pc = 0x3BB964u;
            goto label_3bb964;
        }
    }
    ctx->pc = 0x3BB948u;
    // 0x3bb948: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x3bb948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x3bb94c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB94Cu;
    {
        const bool branch_taken_0x3bb94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB94Cu;
        // 0x3bb950: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb94c) {
            ctx->pc = 0x3BB958u;
            goto label_3bb958;
        }
    }
    ctx->pc = 0x3BB954u;
    // 0x3bb954: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x3bb954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_3bb958:
    // 0x3bb958: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x3bb958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bb95c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3bb95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3bb960: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3bb960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_3bb964:
    // 0x3bb964: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x3bb964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3bb968: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3bb968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bb96c: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x3bb96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x3bb970: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x3bb970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_3bb974:
    // 0x3bb974: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB974u;
        // 0x3bb978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB97Cu;
    // 0x3bb97c: 0x0  nop
    ctx->pc = 0x3bb97cu;
    // NOP
    ctx->pc = 0x3bb980u;
}
