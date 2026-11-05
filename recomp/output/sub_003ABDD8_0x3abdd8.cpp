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

// Function: sub_003ABDD8
// Address: 0x3abdd8 - 0x3abe28
void sub_003ABDD8_0x3abdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABDD8_0x3abdd8");
#endif

    switch (ctx->pc) {
        case 0x3abdfcu: goto label_3abdfc;
        case 0x3abe0cu: goto label_3abe0c;
        default: break;
    }

    ctx->pc = 0x3abdd8u;

    // 0x3abdd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3abdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3abddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3abddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3abde0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3abde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abde4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3abde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3abde8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3abde8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abdec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3abdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3abdf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3abdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3abdf4: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3ABDF4u;
    SET_GPR_U32(ctx, 31, 0x3ABDFCu);
    ctx->pc = 0x3ABDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDF4u;
    // 0x3abdf8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3ABDF4u, 0x3ABDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDFCu;
label_3abdfc:
    // 0x3abdfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abe00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3abe00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abe04: 0xc0eaf8a  jal         func_3ABE28
    ctx->pc = 0x3ABE04u;
    SET_GPR_U32(ctx, 31, 0x3ABE0Cu);
    ctx->pc = 0x3ABE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE04u;
    // 0x3abe08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABE28u, 0x3ABE04u, 0x3ABE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE0Cu;
label_3abe0c:
    // 0x3abe0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3abe0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abe10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3abe10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3abe14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3abe14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3abe18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3abe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3abe1c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3ABE1Cu;
    ctx->pc = 0x3ABE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE1Cu;
    // 0x3abe20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABE24u;
    // 0x3abe24: 0x0  nop
    ctx->pc = 0x3abe24u;
    // NOP
    ctx->pc = 0x3abe28u;
}
