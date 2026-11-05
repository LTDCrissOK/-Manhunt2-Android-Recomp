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

// Function: sub_00297F08
// Address: 0x297f08 - 0x298030
void sub_00297F08_0x297f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297F08_0x297f08");
#endif

    switch (ctx->pc) {
        case 0x297f6cu: goto label_297f6c;
        case 0x297f78u: goto label_297f78;
        case 0x297f80u: goto label_297f80;
        case 0x297f88u: goto label_297f88;
        case 0x297f98u: goto label_297f98;
        case 0x297facu: goto label_297fac;
        case 0x297fc0u: goto label_297fc0;
        case 0x297fc8u: goto label_297fc8;
        case 0x297ff4u: goto label_297ff4;
        default: break;
    }

    ctx->pc = 0x297f08u;

    // 0x297f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297f0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x297f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x297f10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x297f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x297f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297f1c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x297f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x297f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f24: 0x9265a928  lbu         $a1, -0x56D8($s3)
    ctx->pc = 0x297f24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FA928u));
    // 0x297f28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x297f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x297f2c: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x297f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x297f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x297f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x297f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297f38: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297F38u;
    {
        const bool branch_taken_0x297f38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x297F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F38u;
        // 0x297f3c: 0xa043a929  sb          $v1, -0x56D7($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294945065), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f38) {
            ctx->pc = 0x297F54u;
            goto label_297f54;
        }
    }
    ctx->pc = 0x297F40u;
    // 0x297f40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x297f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f44: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x297f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x297f48: 0x8e42ac80  lw          $v0, -0x5380($s2)
    ctx->pc = 0x297f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945920)));
    // 0x297f4c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x297F4Cu;
    {
        const bool branch_taken_0x297f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x297F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F4Cu;
        // 0x297f50: 0x2651ac80  addiu       $s1, $s2, -0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f4c) {
            ctx->pc = 0x297F90u;
            goto label_297f90;
        }
    }
    ctx->pc = 0x297F54u;
label_297f54:
    // 0x297f54: 0x8c83ac80  lw          $v1, -0x5380($a0)
    ctx->pc = 0x297f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945920)));
    // 0x297f58: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x297f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x297f5c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x297F5Cu;
    {
        const bool branch_taken_0x297f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x297F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F5Cu;
        // 0x297f60: 0xa260a928  sb          $zero, -0x56D8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4294945064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f5c) {
            ctx->pc = 0x298010u;
            goto label_298010;
        }
    }
    ctx->pc = 0x297F64u;
    // 0x297f64: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297F64u;
    SET_GPR_U32(ctx, 31, 0x297F6Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297F64u, 0x297F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F6Cu;
label_297f6c:
    // 0x297f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f70: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x297F70u;
    SET_GPR_U32(ctx, 31, 0x297F78u);
    ctx->pc = 0x297F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297F70u;
    // 0x297f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x297F70u, 0x297F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F78u;
label_297f78:
    // 0x297f78: 0xc0a1a80  jal         func_286A00
    ctx->pc = 0x297F78u;
    SET_GPR_U32(ctx, 31, 0x297F80u);
    ctx->pc = 0x286A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A00u, 0x297F78u, 0x297F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F80u;
label_297f80:
    // 0x297f80: 0xc0a1988  jal         func_286620
    ctx->pc = 0x297F80u;
    SET_GPR_U32(ctx, 31, 0x297F88u);
    ctx->pc = 0x286620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286620u, 0x297F80u, 0x297F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F88u;
label_297f88:
    // 0x297f88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x297F88u;
    {
        const bool branch_taken_0x297f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297F88u;
        // 0x297f8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f88) {
            ctx->pc = 0x298014u;
            goto label_298014;
        }
    }
    ctx->pc = 0x297F90u;
label_297f90:
    // 0x297f90: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x297F90u;
    SET_GPR_U32(ctx, 31, 0x297F98u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x297F90u, 0x297F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297F98u;
label_297f98:
    // 0x297f98: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x297F98u;
    {
        const bool branch_taken_0x297f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297f98) {
            ctx->pc = 0x297FECu;
            goto label_297fec;
        }
    }
    ctx->pc = 0x297FA0u;
    // 0x297fa0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x297fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x297fa4: 0xc0ab184  jal         func_2AC610
    ctx->pc = 0x297FA4u;
    SET_GPR_U32(ctx, 31, 0x297FACu);
    ctx->pc = 0x297FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FA4u;
    // 0x297fa8: 0xae225908  sw          $v0, 0x5908($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 22792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC610u, 0x297FA4u, 0x297FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FACu;
label_297fac:
    // 0x297fac: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x297facu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x297fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fb4: 0x26102508  addiu       $s0, $s0, 0x2508
    ctx->pc = 0x297fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9480));
    // 0x297fb8: 0xc0acb76  jal         func_2B2DD8
    ctx->pc = 0x297FB8u;
    SET_GPR_U32(ctx, 31, 0x297FC0u);
    ctx->pc = 0x297FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FB8u;
    // 0x297fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2DD8u, 0x297FB8u, 0x297FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FC0u;
label_297fc0:
    // 0x297fc0: 0xc075ce0  jal         func_1D7380
    ctx->pc = 0x297FC0u;
    SET_GPR_U32(ctx, 31, 0x297FC8u);
    ctx->pc = 0x297FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FC0u;
    // 0x297fc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7380u, 0x297FC0u, 0x297FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FC8u;
label_297fc8:
    // 0x297fc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297fcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297fd0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x297fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x297fd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x297fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297fd8: 0xa264a928  sb          $a0, -0x56D8($s3)
    ctx->pc = 0x297fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294945064), (uint8_t)GPR_U32(ctx, 4));
    // 0x297fdc: 0xae2358f8  sw          $v1, 0x58F8($s1)
    ctx->pc = 0x297fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22776), GPR_U32(ctx, 3));
    // 0x297fe0: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x297fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x297fe4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x297fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x297fe8: 0xae24591c  sw          $a0, 0x591C($s1)
    ctx->pc = 0x297fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22812), GPR_U32(ctx, 4));
label_297fec:
    // 0x297fec: 0xc0addd2  jal         func_2B7748
    ctx->pc = 0x297FECu;
    SET_GPR_U32(ctx, 31, 0x297FF4u);
    ctx->pc = 0x297FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FECu;
    // 0x297ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7748u, 0x297FECu, 0x297FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FF4u;
label_297ff4:
    // 0x297ff4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297FF4u;
    {
        const bool branch_taken_0x297ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FF4u;
        // 0x297ff8: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ff4) {
            ctx->pc = 0x298010u;
            goto label_298010;
        }
    }
    ctx->pc = 0x297FFCu;
    // 0x297ffc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x297ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298000: 0xae42ac80  sw          $v0, -0x5380($s2)
    ctx->pc = 0x298000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945920), GPR_U32(ctx, 2));
    // 0x298004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298008: 0xae23591c  sw          $v1, 0x591C($s1)
    ctx->pc = 0x298008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22812), GPR_U32(ctx, 3));
    // 0x29800c: 0xae2458f8  sw          $a0, 0x58F8($s1)
    ctx->pc = 0x29800cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22776), GPR_U32(ctx, 4));
label_298010:
    // 0x298010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298014:
    // 0x298014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x298014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x298018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29801c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29801cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298020: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298024: 0x3e00008  jr          $ra
    ctx->pc = 0x298024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298024u;
        // 0x298028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29802Cu;
    // 0x29802c: 0x0  nop
    ctx->pc = 0x29802cu;
    // NOP
    ctx->pc = 0x298030u;
}
