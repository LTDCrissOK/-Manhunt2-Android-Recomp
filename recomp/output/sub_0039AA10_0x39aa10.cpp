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

// Function: sub_0039AA10
// Address: 0x39aa10 - 0x39ab10
void sub_0039AA10_0x39aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AA10_0x39aa10");
#endif

    switch (ctx->pc) {
        case 0x39aa3cu: goto label_39aa3c;
        case 0x39aa58u: goto label_39aa58;
        case 0x39aa64u: goto label_39aa64;
        case 0x39aa7cu: goto label_39aa7c;
        case 0x39aa8cu: goto label_39aa8c;
        case 0x39aaa4u: goto label_39aaa4;
        case 0x39aaacu: goto label_39aaac;
        case 0x39aad4u: goto label_39aad4;
        case 0x39aaf8u: goto label_39aaf8;
        default: break;
    }

    ctx->pc = 0x39aa10u;

    // 0x39aa10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39aa14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39aa14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39aa18: 0x2442ad40  addiu       $v0, $v0, -0x52C0
    ctx->pc = 0x39aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946112));
    // 0x39aa1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39aa20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39aa24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39aa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39aa2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39aa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa34: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x39AA34u;
    SET_GPR_U32(ctx, 31, 0x39AA3Cu);
    ctx->pc = 0x39AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA34u;
    // 0x39aa38: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x39AA34u, 0x39AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA3Cu;
label_39aa3c:
    // 0x39aa3c: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x39aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x39aa40: 0x2484ad50  addiu       $a0, $a0, -0x52B0
    ctx->pc = 0x39aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946128));
    // 0x39aa44: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x39aa44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x39aa48: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x39aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x39aa4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39aa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa50: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x39AA50u;
    SET_GPR_U32(ctx, 31, 0x39AA58u);
    ctx->pc = 0x39AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA50u;
    // 0x39aa54: 0x2610a9f8  addiu       $s0, $s0, -0x5608 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x39AA50u, 0x39AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA58u;
label_39aa58:
    // 0x39aa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa5c: 0xc0e896a  jal         func_3A25A8
    ctx->pc = 0x39AA5Cu;
    SET_GPR_U32(ctx, 31, 0x39AA64u);
    ctx->pc = 0x39AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA5Cu;
    // 0x39aa60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25A8u, 0x39AA5Cu, 0x39AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA64u;
label_39aa64:
    // 0x39aa64: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39aa68: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39aa68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39aa6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39aa6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa70: 0x2484b1d0  addiu       $a0, $a0, -0x4E30
    ctx->pc = 0x39aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947280));
    // 0x39aa74: 0xc0e8696  jal         func_3A1A58
    ctx->pc = 0x39AA74u;
    SET_GPR_U32(ctx, 31, 0x39AA7Cu);
    ctx->pc = 0x39AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA74u;
    // 0x39aa78: 0x24a57ae0  addiu       $a1, $a1, 0x7AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A58u, 0x39AA74u, 0x39AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA7Cu;
label_39aa7c:
    // 0x39aa7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39aa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39aa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa84: 0xc0e896a  jal         func_3A25A8
    ctx->pc = 0x39AA84u;
    SET_GPR_U32(ctx, 31, 0x39AA8Cu);
    ctx->pc = 0x39AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA84u;
    // 0x39aa88: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25A8u, 0x39AA84u, 0x39AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA8Cu;
label_39aa8c:
    // 0x39aa8c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39aa90: 0x2610b1d8  addiu       $s0, $s0, -0x4E28
    ctx->pc = 0x39aa90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947288));
    // 0x39aa94: 0x24a53f90  addiu       $a1, $a1, 0x3F90
    ctx->pc = 0x39aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16272));
    // 0x39aa98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39aa98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa9c: 0xc0e8696  jal         func_3A1A58
    ctx->pc = 0x39AA9Cu;
    SET_GPR_U32(ctx, 31, 0x39AAA4u);
    ctx->pc = 0x39AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA9Cu;
    // 0x39aaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A58u, 0x39AA9Cu, 0x39AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAA4u;
label_39aaa4:
    // 0x39aaa4: 0xc0e872e  jal         func_3A1CB8
    ctx->pc = 0x39AAA4u;
    SET_GPR_U32(ctx, 31, 0x39AAACu);
    ctx->pc = 0x39AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AAA4u;
    // 0x39aaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1CB8u, 0x39AAA4u, 0x39AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAACu;
label_39aaac:
    // 0x39aaac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39aab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39aab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aab8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x39AAB8u;
    {
        const bool branch_taken_0x39aab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AAB8u;
        // 0x39aabc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aab8) {
            ctx->pc = 0x39AAF0u;
            goto label_39aaf0;
        }
    }
    ctx->pc = 0x39AAC0u;
    // 0x39aac0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x39aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x39aac4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x39aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x39aac8: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x39aac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x39aacc: 0xc0e95a2  jal         func_3A5688
    ctx->pc = 0x39AACCu;
    SET_GPR_U32(ctx, 31, 0x39AAD4u);
    ctx->pc = 0x39AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AACCu;
    // 0x39aad0: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5688u, 0x39AACCu, 0x39AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAD4u;
label_39aad4:
    // 0x39aad4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x39aad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39aad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39aadc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39aadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39aae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39aae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39aae4: 0x80e95aa  j           func_3A56A8
    ctx->pc = 0x39AAE4u;
    ctx->pc = 0x39AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AAE4u;
    // 0x39aae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A56A8u;
    sub_003A56A8_0x3a56a8(rdram, ctx, runtime); return;
    ctx->pc = 0x39AAECu;
    // 0x39aaec: 0x0  nop
    ctx->pc = 0x39aaecu;
    // NOP
label_39aaf0:
    // 0x39aaf0: 0xc0e95a2  jal         func_3A5688
    ctx->pc = 0x39AAF0u;
    SET_GPR_U32(ctx, 31, 0x39AAF8u);
    ctx->pc = 0x3A5688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5688u, 0x39AAF0u, 0x39AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AAF8u;
label_39aaf8:
    // 0x39aaf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39aafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ab00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ab00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ab04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39ab04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ab08: 0x80e95aa  j           func_3A56A8
    ctx->pc = 0x39AB08u;
    ctx->pc = 0x39AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB08u;
    // 0x39ab0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A56A8u;
    sub_003A56A8_0x3a56a8(rdram, ctx, runtime); return;
    ctx->pc = 0x39AB10u;
}
